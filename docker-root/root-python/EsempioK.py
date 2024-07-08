####################################################
# ESEMPIO per la lettura dei dati di NA62:
# per prima cosa è necessario creare il file con il
# dizionario per la classe di NA62
# seguire questi step
# - avviare root -l outFile.root (o altro file dei dati di NA62)
# - scrivere: _file0->MakeProject("NA62Lib","*","recreate++")
# - questo produce e compila la libreria statica di NA62 che poi
#   sarà linkata con il comando ProcessLine
# Per poter meglio comprendere il contenuto di qeusto file di esempio
# si consiglia di aprire il contenuto del file dei dati con TBrowser()


from ROOT import *
gROOT.ProcessLine(".L ./NA62Lib/NA62Lib.so") # linka il dizionario della classe
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
# questo è solo un esempio di informazioni che si possono estrarre
