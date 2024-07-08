import ROOT
import csv
import time
import math
from array import array
import sys

def plot():
    f = ROOT.TFile("outFile.root")
    # f.ls()

    # Draw all the trees in the file
    for key in f.GetListOfKeys():
        obj = key.ReadObj()

        if obj.IsA().InheritsFrom("TTree"):
            obj.Print()
        # obj = key.ReadObj()
        # print name and the type of the object separated by comma
        # print(key.GetName(), key.GetClassName())
        
        # if obj.IsA().InheritsFrom("TH2") or obj.IsA().InheritsFrom("TH1"):
            # save in pdf format the histogram
            # obj.Draw("colz")
            # ROOT.gPad.Print("{}.pdf".format(obj.GetName()))

        # ROOT.gApplication.Run()
    # f.EventsTotal_Int.Draw()
    # mytree = f.Get("ParticlesEvents")
    # get tree info
    # mytree.Print()



    # draw the tree
    # mytree.Draw("Events.fChargedParticleCandidates.fVertexKTAG.z()","Events.fChargedParticleCandidates.fVertexKTAG.z()","")

    # read TH1F	BadEventsMonitorTotal
    # th1 = f.Get("BadEventsMonitorTotal")
    # th1.Draw()
    # ROOT.gApplication.Run()
    f.Close()

def plot2():
    #ROOT.ProcessLine(".L ./NA62Lib/NA62Lib.so") # linka il dizionario della classe
    f = TFile("outFile.root") # apre file 
    mytree = f.Get("ParticlesEvents") # estrae il tree
    zpos_lkr = 241093. # distanza del calorimentro dalla targhetta
    for event in mytree: 
        np = event.Events.fNeutralParticleCandidates #branch particelle neutre
        cp = event.Events.fChargedParticleCandidates #branch particelle cariche
        if (len(np)==2 and len(cp)==1): #con len ottengo il numero di tracce e clulster neutri
            if cp[0].fVertexKTAG.z()!=0 : #usare fVertxKTAG per il vertice della particella carica
                vertex=zpos_lkr-cp[0].fVertexKTAG.z()
                xn0=np[0].fPosition.x()
                xn1=np[1].fPosition.x()
                yn0=np[0].fPosition.y()
                yn1=np[1].fPosition.y()
                en0=np[0].fEnergyLKr
                en1=np[1].fEnergyLKr     
                vertex_n=sqrt(((xn0-xn1)**2+(yn0-yn1)**2)*en0*en1)/135.
                if (abs(vertex-vertex_n)<4000.):
                    print(vertex,vertex_n, vertex-vertex_n)                



if __name__ == "__main__":
    plot()