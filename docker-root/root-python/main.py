import ROOT
import math

ROOT.gROOT.SetBatch(True)

def plot():
    # load the library
    ROOT.gROOT.ProcessLine('.L ./NA62Lib/NA62Lib.so')

    # open the file
    f = ROOT.TFile("outFile.root")

    # get the tree
    mytree = f.Get("ParticlesEvents")
    zpos_lkr = 241093. # distance from the target to the calorimeter

    h = ROOT.TH1S("h1", "MINV", 100, 140, 600)  

    # loop over the entries
    for event in mytree: 

        # get the neutral and charged particles
        np = event.Events.fNeutralParticleCandidates
        cp = event.Events.fChargedParticleCandidates

        # check if the event has 2 neutral and 1 charged particles
        if (len(np) == 2 and len(cp) == 1):
            # check if the charged particle has a vertex
            if (cp[0].fVertexKTAG.z() != 0):
                
                # pp+
                ppx=cp[0].fMomentum.x()
                ppy=cp[0].fMomentum.y()
                ppz=cp[0].fMomentum.z()
                ppm=139.57039 #massa
                Epp = math.sqrt(ppm**2 + ppx**2 + ppy**2 + ppz**2) 
                # add a cut on the total momentum
                if(math.sqrt(ppx**2 + ppy**2 + ppz**2) < 50000):
                    # vertex
                    vertex=zpos_lkr-cp[0].fVertexKTAG.z()
                    vx = 0
                    vy = 0

                    # fotone 1
                    en0=np[0].fEnergyLKr
                    xn0=np[0].fPosition.x()
                    yn0=np[0].fPosition.y()
                    zn0=np[0].fPosition.z()
                    d0=math.sqrt((xn0 - vx)**2 + (yn0 - vy)**2 + (zn0 - vertex)**2)
                    px0=en0*(xn0 - vx)/d0
                    py0=en0*(yn0 - vy)/d0
                    pz0=en0*(zn0 - vertex)/d0

                    # fotone 2
                    en1=np[1].fEnergyLKr
                    xn1=np[1].fPosition.x()
                    yn1=np[1].fPosition.y()
                    zn1=np[1].fPosition.z()
                    d1=math.sqrt((xn1 - vx)**2 + (yn1 - vy)**2 + (zn1 - vertex)**2)
                    px1=en1*(xn1 - vx)/d1
                    py1=en1*(yn1 - vy)/d1
                    pz1=en1*(zn1 - vertex)/d1

                    # invariant mass
                    MINV = math.sqrt((Epp + en0 + en1)**2 - ((ppx + px0 + px1)**2 + (ppy + py0 + py1) + (ppz + pz0 + pz1)**2))
                    
                    # create the histogram with the invariant mass
                    h.Fill(MINV)


    max_bin = h.GetMaximumBin()
    max_bin_content = h.GetBinContent(max_bin)
    max_bin_center = h.GetBinCenter(max_bin)

    # Stampa il bin di massimo e il suo contenuto
    print(f"Bin di massimo: {max_bin} (Centro del bin: {max_bin_center}), Contenuto: {max_bin_content}")

    c1 = ROOT.TCanvas()
    # c1.SetLogy()
    h.Draw() 
    c1.SaveAs("histogram.png")

    # open the file
    f2 = ROOT.TFile("k2pi_MC_5bursts.root")
    h2 = ROOT.TH1S("h2", "MINV", 100, 140, 600)
    # get the tree
    mytree2 = f2.Get("ParticlesEvents")
    # loop over the entries
    for event in mytree2: 

        # get the neutral and charged particles
        np = event.Events.fNeutralParticleCandidates
        cp = event.Events.fChargedParticleCandidates

        # check if the event has 2 neutral and 1 charged particles
        if (len(np) == 2 and len(cp) == 1):
            # check if the charged particle has a vertex
            if (cp[0].fVertexKTAG.z() != 0):
                
                # pp+
                ppx=cp[0].fMomentum.x()
                ppy=cp[0].fMomentum.y()
                ppz=cp[0].fMomentum.z()
                ppm=139.57039 #massa
                Epp = math.sqrt(ppm**2 + ppx**2 + ppy**2 + ppz**2) 
                # add a cut on the total momentum
                if(math.sqrt(ppx**2 + ppy**2 + ppz**2) < 50000):
                    # vertex
                    vertex=zpos_lkr-cp[0].fVertexKTAG.z()
                    vx = 0
                    vy = 0

                    # fotone 1
                    en0=np[0].fEnergyLKr
                    xn0=np[0].fPosition.x()
                    yn0=np[0].fPosition.y()
                    zn0=np[0].fPosition.z()
                    d0=math.sqrt((xn0 - vx)**2 + (yn0 - vy)**2 + (zn0 - vertex)**2)
                    px0=en0*(xn0 - vx)/d0
                    py0=en0*(yn0 - vy)/d0
                    pz0=en0*(zn0 - vertex)/d0

                    # fotone 2
                    en1=np[1].fEnergyLKr
                    xn1=np[1].fPosition.x()
                    yn1=np[1].fPosition.y()
                    zn1=np[1].fPosition.z()
                    d1=math.sqrt((xn1 - vx)**2 + (yn1 - vy)**2 + (zn1 - vertex)**2)
                    px1=en1*(xn1 - vx)/d1
                    py1=en1*(yn1 - vy)/d1
                    pz1=en1*(zn1 - vertex)/d1

                    # invariant mass
                    MINV = math.sqrt((Epp + en0 + en1)**2 - ((ppx + px0 + px1)**2 + (ppy + py0 + py1) + (ppz + pz0 + pz1)**2))
                    
                    # create the histogram with the invariant mass
                    h2.Fill(MINV)

    c2 = ROOT.TCanvas()
    # c2.SetLogy()
    h2.Draw() 
    c2.SaveAs("histogram2.png")

    # normalize the histogram
    h1_clone = h.Clone("h1")
    h2_clone = h2.Clone("h2")

    norm1 = h1_clone.Integral(30, 90)
    norm2 = h2_clone.Integral(30, 90)
    norm_factor = norm2/norm1;

    h1_clone.Scale(norm_factor)
    h2_clone.SetLineColor(ROOT.kRed)
    h1_clone.SetLineWidth(2)

    c3 = ROOT.TCanvas()
    c3.SetLogy()
    h1_clone.Draw()
    h2_clone.Draw("SAME")
    c3.SaveAs("histogram3.png")

    f.Close()

if __name__ == "__main__":
    plot()