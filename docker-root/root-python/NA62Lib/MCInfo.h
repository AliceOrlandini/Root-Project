//////////////////////////////////////////////////////////
//   This class has been generated by TFile::MakeProject
//     (Thu Jul 18 20:06:36 2024 by ROOT version 6.32.02)
//      from the StreamerInfo in file outFile.root
//////////////////////////////////////////////////////////


#ifndef MCInfo_h
#define MCInfo_h
class MCInfo;

#include "Rtypes.h"
#include "TObject.h"
#include <TString.h>
#include "Riostream.h"
#include <vector>
#include "CheckPointInfo.h"
#include "TString.h"
#include "BeamLineInfo.h"

class MCInfo : public TObject {

public:
// Nested classes declaration.

public:
// Data Members.
   TString     fRevision;    //NA62MC revision
   int         fBeamType;    //Beam type: see MCBeamType in NA62Tools/include/NA62Global.hh
   int         fBeamParticleType;    //PDG code of the primary beam particle
   int         fForcedDecay;         //Forced beam particle decay: 0=decay not forced, 1=forced decay only, 2=forced decay and mode
   int         fForcedMuonDecay;     //Forced muon decay mode: 0=normal, 1=decay with polarization, 2=no polarization (only for external beam mode)
   int         fDecayType;           //Decay type (-1 for data and for beam types for which it has no meaning)
   int         fMuonDecayType;       //Decay type for muons (see Standard_DecayOptions.mac for additional information)
   int         fRadCor;              //Radiative corrections mode
   int         fPiZeroDecay;         //pi0 decay modes (encoded for up to three pi0 mesons)
   double      fBRPi0D;              //BR(pi0-->e+e-gamma)
   int         fDecayUniform;        //Generate decay with uniform phase-space distribution? (0=no, 1=yes)
   int         fDecayGeneratorMode;    //Decay generator settings (see NA62MC macro files for documentation)
   double      fZDecayMin;             //Lower limit of the decay region generated [mm]
   double      fZDecayMax;             //Upper limit of the decay region generated [mm]
   vector<CheckPointInfo> fCheckPoints;           //checkpoints, introduced in v5 (CheckPointInfo)
   vector<double>         fExoticParticleMass;    //
   vector<int>            fExoticParticleDecayMode;    //
   vector<double>         fExoticParticleLifetime;     //
   vector<TString>        fFileName;                   //
   vector<int>            fRunNumber;                  //
   vector<int>            fRandomSeed;                 //
   vector<int>            fNEvents;                    //
   vector<BeamLineInfo>   fBeamlinemap;                // (BeamLineInfo)
   int                    fFastSimulationMode;         //Fast simulation mode: 0=normal, 1=fast (BeamlineDetectors.FastMC.dat)
   double                 fBrPie2;                     //BR(pi+ --> e+ nu)
   int                    fForcedPionDecay;            //Forced pion decay mode: 0=normal, 1=one pion decay forced (only for modes with a single charged pion in the final state), 2=two pion decays forced; 3=three pion decays forced

   MCInfo();
   MCInfo(MCInfo && ) = default;
   MCInfo &operator=(const MCInfo & );
   MCInfo(const MCInfo & );
   virtual ~MCInfo();

   ClassDef(MCInfo,11); // Generated by MakeProject.
};
#endif
