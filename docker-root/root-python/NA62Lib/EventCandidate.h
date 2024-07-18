//////////////////////////////////////////////////////////
//   This class has been generated by TFile::MakeProject
//     (Thu Jul 18 20:06:36 2024 by ROOT version 6.32.02)
//      from the StreamerInfo in file outFile.root
//////////////////////////////////////////////////////////


#ifndef EventCandidate_h
#define EventCandidate_h
class EventCandidate;

#include "Rtypes.h"
#include "TObject.h"
#include "EventInfo.h"
#include "Riostream.h"
#include <vector>
#include "ChParticleCandidate.h"
#include "NeParticleCandidate.h"

class EventCandidate : public TObject {

public:
// Nested classes declaration.

public:
// Data Members.
   EventInfo*  fEventInfo;    //
   vector<ChParticleCandidate*> fChargedParticleCandidates;    //
   vector<NeParticleCandidate*> fNeutralParticleCandidates;    //

   EventCandidate();
   EventCandidate(EventCandidate && ) = default;
   EventCandidate &operator=(const EventCandidate & );
   EventCandidate(const EventCandidate & );
   virtual ~EventCandidate();

   ClassDef(EventCandidate,2); // Generated by MakeProject.
};
#endif
