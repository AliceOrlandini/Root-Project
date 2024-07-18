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

    h = ROOT.TH1F("h1", "MyHistogram", 100, 57838.40254981886, 138633.60501040035)  
    vertex_min = 1000000000
    vertex_max = -1000000000
    # loop over the entries
    for event in mytree: 
        # get the neutral and charged particles
        np = event.Events.fNeutralParticleCandidates
        cp = event.Events.fChargedParticleCandidates

        # check if the event has 2 neutral and 1 charged particles
        if (len(np) == 2 and len(cp) == 1):
            # check if the charged particle has a vertex
            if (cp[0].fVertexKTAG.z() != 0):
                # calculate the vertex
                vertex= zpos_lkr - cp[0].fVertexKTAG.z()

                if (vertex < vertex_min):
                    vertex_min = vertex
                if (vertex > vertex_max):
                    vertex_max = vertex

                xn0 = np[0].fPosition.x()
                xn1 = np[1].fPosition.x()
                yn0 = np[0].fPosition.y()
                yn1 = np[1].fPosition.y()
                en0 = np[0].fEnergyLKr
                en1 = np[1].fEnergyLKr

                vertex_n = math.sqrt(((xn0 - xn1)**2 + (yn0 - yn1)**2) * en0 * en1) / 135.
                if (abs(vertex - vertex_n) < 4000.):
                    #print(f"vertex: {vertex}; vertex_n: {vertex_n}; vertex-vertex_n: {vertex-vertex_n}")

                    # crea un istogramma il vertice calcolato
                    h.Fill(vertex)

    print(f"vertex_min: {vertex_min}; vertex_max: {vertex_max}")
    c1 = ROOT.TCanvas()
    h.Draw() 
    c1.SaveAs("histogram.png")

    #ROOT.gApplication.Run()
    f.Close()

if __name__ == "__main__":
    plot()