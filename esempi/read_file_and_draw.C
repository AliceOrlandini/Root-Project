#include <iostream>
#include <fstream>
#include <vector>
#include <string> //use for int to string conversion in text
#include "TH1F.h"
#include "TFile.h"
using namespace std;
//void read_file_and_draw(const char* filename_bkg, const char* filename_sig) {
void read_file_and_draw() {
  // define important variables
    ifstream file_bkg("fondo_lyso_16h.csv");
    ifstream file_sig("segnale_lyso_6h.csv");
    string line;
    vector<double> bin_bkg;
    vector<double> spectrum_bkg;
    vector<double> bin_sig;
    vector<double> spectrum_sig;
    int line_number = 0;
    // read bkg file
    while (std::getline(file_bkg, line)) {
      if (line_number == 0) { //skip the first line
            line_number++;
            continue;
        }
        double b, s;
        char sep=';';
        std::istringstream ss(line);
        ss >> b >> sep >> s; //read b and s from the line ss with the separator sep
        bin_bkg.push_back(b); //fill the two vectors
        spectrum_bkg.push_back(s);
    } //end while


    // read sig file
    line_number=0;
    bin_sig.clear();
    spectrum_sig.clear();
    while (std::getline(file_sig, line)) {
      if (line_number == 0) { //skip the first line
	line_number++;
	continue;
      }
      double b, s;
      char sep=';';
      std::istringstream ss(line);
      ss >> b >> sep >> s; //read b and s from the line ss with the separatore sep
      bin_sig.push_back(b);
      spectrum_sig.push_back(s);
    } //end while
    
    //book histograms
    TH1F* hist_bkg = new TH1F("hist_bkg", "hist_bkg", bin_bkg.size(), 0, 2049);
    TH1F* hist_sig = new TH1F("hist_sig", "hist_sig", bin_sig.size(), 0, 2049);

    //Fill the histograms
    for (int i = 0; i < spectrum_bkg.size()-1; ++i) {
        hist_bkg->SetBinContent(i+1, spectrum_bkg[i]);
    }// end for
    for (int i = 0; i < spectrum_sig.size()-1; ++i) {
        hist_sig->SetBinContent(i+1, spectrum_sig[i]);
    }// end for
    
    //play with hist_bkg and hist_sig
    //normalize the histograms
    TH1F* hhs = (TH1F*)(hist_sig->Clone("hhs")); //define a clone of signal histogram
    TH1F* hhb = (TH1F*)(hist_bkg->Clone("hhb")); //define a clone of signal histogram
    double norm1 = hhs->Integral(30.,90.);
    double norm2 = hhb->Integral(30.,90.);
    double norm_factor = norm2/norm1; //compute the normalization factor
    hhs->Scale(norm_factor);
    hhs->GetXaxis()->SetRangeUser(10.,600.);
    hhb->GetXaxis()->SetRangeUser(10.,600.);
    hhb->SetLineColor(kRed);
    hhs->SetLineWidth(2);
    hhb->SetLineWidth(2);
    TH1F *hhsum = (TH1F*)(hhs->Clone("hhsum"));
    hhsum->Add(hhb,-1.); //histograms difference
    //fit with two gaussians
    Double_t par[6];
    
    //extract the initial parameters from two single fits
    //use vector par of the initial parameters as starting point
    //for the two gaussian fit
    TF1 *g1 = new TF1("m1","gaus",90,130);
    TF1 *g2 = new TF1("m2","gaus",140,180);
    TF1 *tot = new TF1("doublegauss","gaus(0)+gaus(3)",90,180);
    hhsum->Fit(g1,"R",""); 
    hhsum->Fit(g2,"R+","");
    g1->GetParameters(&par[0]); 
    g2->GetParameters(&par[3]);
    tot->SetParameters(par);
    hhsum->Fit("doublegauss");
    
    //compute the difference between the two peeks to extract the calibration factor
    Double_t diff_bins=par[4]-par[1]; //fitted peeks positions
    Double_t diff_energy=105.0; //keV 
    Double_t calibr=diff_energy/diff_bins;
    Double_t trigger_bin = 15.; //position of the first acquired bin

    //rescale the hhs histogram
    TH1F *hhs_calib = (TH1F*)(hhs->Clone("hhs_calib"));
    TAxis *xax= (TAxis*) hhs_calib->GetXaxis();
    xax->Set(xax->GetNbins(),calibr*(xax->GetXmin()-trigger_bin),calibr*(xax->GetXmax()-trigger_bin)); //define the X axis in keV
    //prepare the final plot (hss_calib)
    xax->SetTitle("keV");
    hhs_calib->SetTitle("Energy spectrum of LYSO");
    Int_t ncenter1=xax->FindBin((par[1]-trigger_bin)*calibr); //find the position of the maxima
    Int_t ncenter2=xax->FindBin((par[4]-trigger_bin)*calibr);
    Double_t height1=hhs_calib->GetBinContent(ncenter1); //find the heigth of the maxima
    Double_t height2=hhs_calib->GetBinContent(ncenter2);
    printf("%d %d %f %f\n",ncenter1, ncenter2, height1,height2);
    hhs_calib->Draw("hist");
    //    TText *t1 = new TText(par[1], height1, to_string(int(par[1])));
    
    TText *t1 = new TText(par[1]*calibr-trigger_bin, height1+500.,Form("%d keV",int((par[1]-trigger_bin)*calibr)));
    TText *t2 = new TText(par[4]*calibr-trigger_bin, height2+500.,Form("%d keV",int((par[4]-trigger_bin)*calibr)));
    t1->Draw();
    t2->Draw();
    
    
    TFile* file_out = new TFile("output.root", "RECREATE");
    hhs_calib->Write();
    file_out->Close();
}

int main() {
    read_file_and_draw();
}
