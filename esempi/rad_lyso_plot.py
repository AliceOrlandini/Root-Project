import ROOT
import csv
import time
import math
from array import array


# csv files
bkg_file="fondo_lyso_16h.csv"
sig_file="segnale_lyso_6h.csv"

# arrays to store the data
bin_b = []
cont_b = []
bin_s = []
cont_s = []

# read the csv files
with open(bkg_file,'r') as csvfile:
    # read the csv file
    csvf = csv.reader(csvfile, delimiter=";", quotechar='"')
    # skip the csv header
    next(csvf,None)
    # for each row in the csv file
    for i in csvf:
        # append the first column to bin_b as float
        bin_b.append(float(i[0]))
        # append the second column to cont_b as float
        cont_b.append(float(i[1]))

# same for the signal file
with open(sig_file,'r') as csvfile:
    csvf = csv.reader(csvfile, delimiter=";", quotechar='"')
    next(csvf,None)
    for i in csvf:
        bin_s.append(float(i[0]))
        cont_s.append(float(i[1]))        

# book histograms for signal and background
# the length of the histograms is the length of the bin arrays
hist_bkg = ROOT.TH1F("hist_bkg", "hist_bkg", len(bin_b), 0., 2049.)
hist_sig = ROOT.TH1F("hist_sig", "hist_sig", len(bin_s), 0., 2049.)        

# fill histograms

# for each bin in bin_b
for i in bin_b:  
    # get the index of the bin
    idx = int(i)
    # set the content of the bin to the corresponding value in cont_b
    hist_bkg.SetBinContent(idx, cont_b[idx])

# same for the signal
for i in bin_b:
    idx = int(i)
    hist_sig.SetBinContent(idx,cont_s[idx])

# normalize the histograms

# clone the histograms to keep the original ones
hist_bkg_nor = hist_bkg.Clone()
hist_sig_nor = hist_sig.Clone()

# use the integral of the histograms to normalize them
norm1 = hist_sig_nor.Integral(30,90)
norm2 = hist_bkg_nor.Integral(30,90)
# compute the normalization factor
norm_factor = norm1/norm2
print(norm1,norm2,norm_factor)
# scale the histograms
hist_bkg_nor.Scale(norm_factor)


# difference between normalize signal and background
# and fit with two gaussians
hist_diff = hist_sig.Clone()
# subtract the background from the signal
hist_diff.Add(hist_bkg_nor,-1.)
# array to store the parameters of the fit
par1 = []
par2 = []
# par is an array of 6 floats initialized to 0
par = array('d', 6*[0.])

# create two gaussian functions
g1 = ROOT.TF1("m1","gaus",90.,130.)
g2 = ROOT.TF1("m2","gaus",140.,180.)

# create a function that is the sum of the two gaussians
gtot = ROOT.TF1("doublegauss", "gaus(0)+gaus(3)", 50., 200.)

# fit the two gaussians
hist_diff.Fit(g1,"R","")
hist_diff.Fit(g2,"R+","")

# get the parameters of the two gaussians
par1 = g1.GetParameters()
par2 = g2.GetParameters()

# use the par array to store the parameters to pass to the sum of the two gaussians
par[0] = par1[0]
par[1] = par1[1]
par[3] = par2[0]
par[4] = par2[1]

# set the parameters of the sum of the two gaussians
gtot.SetParameters(par)

# colors
gtot.SetLineColor(ROOT.kBlack)

# fit the sum of the two gaussians
hist_diff.Fit("doublegauss","R+","")

# draw the histogram
ROOT.gStyle.SetOptFit(1111)
hist_diff.Draw()

# compute the difference between the two peaks to extract the calibration factor
canv = ROOT.TCanvas("newcanvas", "Final PLot", 800, 600)

# calculate the difference between the two peaks
diff_peaks = par[4] - par[1]
# energy of the difference
diff_energy = 105.0 # keV
# calibration factor
calibr = diff_energy/diff_peaks
# position of the first acuired bin
trigger_bin = 15. 

# histogram for the calibration
hist_calib = hist_sig_nor.Clone()
hist_calib.GetXaxis().SetRangeUser(10., 600.)

# set the x axis of the histogram
xax = hist_calib.GetXaxis()
# set the bins of the x axis
xax.Set(xax.GetNbins(), calibr*(xax.GetXmin()-trigger_bin), calibr*(xax.GetXmax()-trigger_bin))
xax.SetTitle("keV")
hist_calib.SetTitle("Energy Spectrum of Lyso")

ncenter1 = xax.FindBin((par[1]-trigger_bin)*calibr)
ncenter2 = xax.FindBin((par[4]-trigger_bin)*calibr)

height1 = hist_calib.GetBinContent(ncenter1)
height2 = hist_calib.GetBinContent(ncenter2)


tnum1 = round((par[1]-trigger_bin)*calibr,2)
tnum2 = round((par[4]-trigger_bin)*calibr,2)


t1 = ROOT.TText(par[1]*calibr-trigger_bin, height1+450., ROOT.Form(str(tnum1)+" keV"))
t2 = ROOT.TText(par[4]*calibr-trigger_bin, height2+450., ROOT.Form(str(tnum2)+" keV"))

hist_calib.SetLineWidth(3)

hist_calib_b = hist_bkg_nor.Clone()
hist_calib_b.GetXaxis().SetRangeUser(10.,600.)

xax_b = hist_calib_b.GetXaxis()
xax_b.Set(xax_b.GetNbins(),calibr*(xax_b.GetXmin()-trigger_bin),calibr*(xax_b.GetXmax()-trigger_bin))

hist_calib_b.SetLineColor(ROOT.kRed)
hist_calib_b.SetLineWidth(3)
hist_calib_b.SetLineStyle(4)

# draw
hist_calib_b.Draw("histl")
hist_calib.Draw("histlsame")
t1.Draw()
t2.Draw()
legend = ROOT.TLegend(0.65,0.6,0.85,0.7)
legend.AddEntry(hist_calib,"Signal")
legend.AddEntry(hist_calib_b,"Background")
legend.Draw()
ROOT.gStyle.SetOptStat(0)
canv.Update()
time.sleep(10)

#tmp plot

#time.sleep(100)
################





time.sleep(10)
