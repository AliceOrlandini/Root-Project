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

                xn0 = np[0].fPosition.x()
                xn1 = np[1].fPosition.x()
                yn0 = np[0].fPosition.y()
                yn1 = np[1].fPosition.y()
                en0 = np[0].fEnergyLKr
                en1 = np[1].fEnergyLKr

                vertex_n = math.sqrt(((xn0 - xn1)**2 + (yn0 - yn1)**2) * en0 * en1) / 135.
                if (abs(vertex - vertex_n) < 4000.):
                    print(f"vertex: {vertex}; vertex_n: {vertex_n}; vertex-vertex_n: {vertex-vertex_n}")

    f.Close()

if __name__ == "__main__":
    plot()