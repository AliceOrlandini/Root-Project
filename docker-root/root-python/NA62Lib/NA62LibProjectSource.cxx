namespace std {}
using namespace std;
#include "NA62LibProjectHeaders.h"

#include "NA62LibLinkDef.h"

#include "NA62LibProjectDict.cxx"

struct DeleteObjectFunctor {
   template <typename T>
   void operator()(const T *ptr) const {
      delete ptr;
   }
   template <typename T, typename Q>
   void operator()(const std::pair<T,Q> &) const {
      // Do nothing
   }
   template <typename T, typename Q>
   void operator()(const std::pair<T,Q*> &ptr) const {
      delete ptr.second;
   }
   template <typename T, typename Q>
   void operator()(const std::pair<T*,Q> &ptr) const {
      delete ptr.first;
   }
   template <typename T, typename Q>
   void operator()(const std::pair<T*,Q*> &ptr) const {
      delete ptr.first;
      delete ptr.second;
   }
};

#ifndef Stream_cxx
#define Stream_cxx
Stream::Stream() {
}
Stream &Stream::operator=(const Stream & rhs)
{
   // This is NOT a copy operator=. This is actually a move operator= (for stl container's sake).
   // Use at your own risk!
   (void)rhs; // avoid warning about unused parameter
   TObject::operator=(const_cast<Stream &>( rhs ));
   fMCInfo = (const_cast<Stream &>( rhs ).fMCInfo);
   fRecoInfo = (const_cast<Stream &>( rhs ).fRecoInfo);
   fAnalysisInfo = (const_cast<Stream &>( rhs ).fAnalysisInfo);
   return *this;
}
Stream::Stream(const Stream & rhs)
   : TObject(const_cast<Stream &>( rhs ))
   , fMCInfo(const_cast<Stream &>( rhs ).fMCInfo)
   , fRecoInfo(const_cast<Stream &>( rhs ).fRecoInfo)
   , fAnalysisInfo(const_cast<Stream &>( rhs ).fAnalysisInfo)
{
   // This is NOT a copy constructor. This is actually a move constructor (for stl container's sake).
   // Use at your own risk!
   (void)rhs; // avoid warning about unused parameter
}
Stream::~Stream() {
}
#endif // Stream_cxx

#ifndef CheckPointInfo_cxx
#define CheckPointInfo_cxx
CheckPointInfo::CheckPointInfo() {
}
CheckPointInfo &CheckPointInfo::operator=(const CheckPointInfo & rhs)
{
   // This is NOT a copy operator=. This is actually a move operator= (for stl container's sake).
   // Use at your own risk!
   (void)rhs; // avoid warning about unused parameter
   TObject::operator=(const_cast<CheckPointInfo &>( rhs ));
   fCheckPointName = (const_cast<CheckPointInfo &>( rhs ).fCheckPointName);
   fZPos = (const_cast<CheckPointInfo &>( rhs ).fZPos);
   fZMax = (const_cast<CheckPointInfo &>( rhs ).fZMax);
   fPreStepName = (const_cast<CheckPointInfo &>( rhs ).fPreStepName);
   fPostStepName = (const_cast<CheckPointInfo &>( rhs ).fPostStepName);
   return *this;
}
CheckPointInfo::CheckPointInfo(const CheckPointInfo & rhs)
   : TObject(const_cast<CheckPointInfo &>( rhs ))
   , fCheckPointName(const_cast<CheckPointInfo &>( rhs ).fCheckPointName)
   , fZPos(const_cast<CheckPointInfo &>( rhs ).fZPos)
   , fZMax(const_cast<CheckPointInfo &>( rhs ).fZMax)
   , fPreStepName(const_cast<CheckPointInfo &>( rhs ).fPreStepName)
   , fPostStepName(const_cast<CheckPointInfo &>( rhs ).fPostStepName)
{
   // This is NOT a copy constructor. This is actually a move constructor (for stl container's sake).
   // Use at your own risk!
   (void)rhs; // avoid warning about unused parameter
}
CheckPointInfo::~CheckPointInfo() {
}
#endif // CheckPointInfo_cxx

#ifndef BeamLineInfo_cxx
#define BeamLineInfo_cxx
BeamLineInfo::BeamLineInfo() {
}
BeamLineInfo &BeamLineInfo::operator=(const BeamLineInfo & rhs)
{
   // This is NOT a copy operator=. This is actually a move operator= (for stl container's sake).
   // Use at your own risk!
   (void)rhs; // avoid warning about unused parameter
   TObject::operator=(const_cast<BeamLineInfo &>( rhs ));
   fDetectorName = (const_cast<BeamLineInfo &>( rhs ).fDetectorName);
   fZpos = (const_cast<BeamLineInfo &>( rhs ).fZpos);
   fXpos = (const_cast<BeamLineInfo &>( rhs ).fXpos);
   fYpos = (const_cast<BeamLineInfo &>( rhs ).fYpos);
   fthetaZ = (const_cast<BeamLineInfo &>( rhs ).fthetaZ);
   fthetaX = (const_cast<BeamLineInfo &>( rhs ).fthetaX);
   fthetaY = (const_cast<BeamLineInfo &>( rhs ).fthetaY);
   fDetectorParameters = (const_cast<BeamLineInfo &>( rhs ).fDetectorParameters);
   BeamLineInfo &modrhs = const_cast<BeamLineInfo &>( rhs );
   modrhs.fDetectorParameters.clear();
   return *this;
}
BeamLineInfo::BeamLineInfo(const BeamLineInfo & rhs)
   : TObject(const_cast<BeamLineInfo &>( rhs ))
   , fDetectorName(const_cast<BeamLineInfo &>( rhs ).fDetectorName)
   , fZpos(const_cast<BeamLineInfo &>( rhs ).fZpos)
   , fXpos(const_cast<BeamLineInfo &>( rhs ).fXpos)
   , fYpos(const_cast<BeamLineInfo &>( rhs ).fYpos)
   , fthetaZ(const_cast<BeamLineInfo &>( rhs ).fthetaZ)
   , fthetaX(const_cast<BeamLineInfo &>( rhs ).fthetaX)
   , fthetaY(const_cast<BeamLineInfo &>( rhs ).fthetaY)
   , fDetectorParameters(const_cast<BeamLineInfo &>( rhs ).fDetectorParameters)
{
   // This is NOT a copy constructor. This is actually a move constructor (for stl container's sake).
   // Use at your own risk!
   (void)rhs; // avoid warning about unused parameter
   BeamLineInfo &modrhs = const_cast<BeamLineInfo &>( rhs );
   modrhs.fDetectorParameters.clear();
}
BeamLineInfo::~BeamLineInfo() {
}
#endif // BeamLineInfo_cxx

#ifndef RecoInfo_cxx
#define RecoInfo_cxx
RecoInfo::RecoInfo() {
}
RecoInfo &RecoInfo::operator=(const RecoInfo & rhs)
{
   // This is NOT a copy operator=. This is actually a move operator= (for stl container's sake).
   // Use at your own risk!
   (void)rhs; // avoid warning about unused parameter
   TObject::operator=(const_cast<RecoInfo &>( rhs ));
   fRevision = (const_cast<RecoInfo &>( rhs ).fRevision);
   fNReadEvents = (const_cast<RecoInfo &>( rhs ).fNReadEvents);
   fNProcessedEvents = (const_cast<RecoInfo &>( rhs ).fNProcessedEvents);
   fNSkippedEvents = (const_cast<RecoInfo &>( rhs ).fNSkippedEvents);
   fNCriticalEvents = (const_cast<RecoInfo &>( rhs ).fNCriticalEvents);
   fNPhysicsTriggerEvents = (const_cast<RecoInfo &>( rhs ).fNPhysicsTriggerEvents);
   fNControlTriggerEvents = (const_cast<RecoInfo &>( rhs ).fNControlTriggerEvents);
   fNPeriodicTriggerEvents = (const_cast<RecoInfo &>( rhs ).fNPeriodicTriggerEvents);
   fNSpecialTriggerEvents = (const_cast<RecoInfo &>( rhs ).fNSpecialTriggerEvents);
   fKaonRate = (const_cast<RecoInfo &>( rhs ).fKaonRate);
   fKaonRateError = (const_cast<RecoInfo &>( rhs ).fKaonRateError);
   fRunID = (const_cast<RecoInfo &>( rhs ).fRunID);
   fBurstID = (const_cast<RecoInfo &>( rhs ).fBurstID);
   fBurstTime = (const_cast<RecoInfo &>( rhs ).fBurstTime);
   fChokeONTime = (const_cast<RecoInfo &>( rhs ).fChokeONTime);
   RecoInfo &modrhs = const_cast<RecoInfo &>( rhs );
   modrhs.fRunID.clear();
   modrhs.fBurstID.clear();
   modrhs.fBurstTime.clear();
   return *this;
}
RecoInfo::RecoInfo(const RecoInfo & rhs)
   : TObject(const_cast<RecoInfo &>( rhs ))
   , fRevision(const_cast<RecoInfo &>( rhs ).fRevision)
   , fNReadEvents(const_cast<RecoInfo &>( rhs ).fNReadEvents)
   , fNProcessedEvents(const_cast<RecoInfo &>( rhs ).fNProcessedEvents)
   , fNSkippedEvents(const_cast<RecoInfo &>( rhs ).fNSkippedEvents)
   , fNCriticalEvents(const_cast<RecoInfo &>( rhs ).fNCriticalEvents)
   , fNPhysicsTriggerEvents(const_cast<RecoInfo &>( rhs ).fNPhysicsTriggerEvents)
   , fNControlTriggerEvents(const_cast<RecoInfo &>( rhs ).fNControlTriggerEvents)
   , fNPeriodicTriggerEvents(const_cast<RecoInfo &>( rhs ).fNPeriodicTriggerEvents)
   , fNSpecialTriggerEvents(const_cast<RecoInfo &>( rhs ).fNSpecialTriggerEvents)
   , fKaonRate(const_cast<RecoInfo &>( rhs ).fKaonRate)
   , fKaonRateError(const_cast<RecoInfo &>( rhs ).fKaonRateError)
   , fRunID(const_cast<RecoInfo &>( rhs ).fRunID)
   , fBurstID(const_cast<RecoInfo &>( rhs ).fBurstID)
   , fBurstTime(const_cast<RecoInfo &>( rhs ).fBurstTime)
   , fChokeONTime(const_cast<RecoInfo &>( rhs ).fChokeONTime)
{
   // This is NOT a copy constructor. This is actually a move constructor (for stl container's sake).
   // Use at your own risk!
   (void)rhs; // avoid warning about unused parameter
   RecoInfo &modrhs = const_cast<RecoInfo &>( rhs );
   modrhs.fRunID.clear();
   modrhs.fBurstID.clear();
   modrhs.fBurstTime.clear();
}
RecoInfo::~RecoInfo() {
}
#endif // RecoInfo_cxx

#ifndef AnalysisInfo_cxx
#define AnalysisInfo_cxx
AnalysisInfo::AnalysisInfo() {
}
AnalysisInfo &AnalysisInfo::operator=(const AnalysisInfo & rhs)
{
   // This is NOT a copy operator=. This is actually a move operator= (for stl container's sake).
   // Use at your own risk!
   (void)rhs; // avoid warning about unused parameter
   TObject::operator=(const_cast<AnalysisInfo &>( rhs ));
   fAnalyzerList = (const_cast<AnalysisInfo &>( rhs ).fAnalyzerList);
   fStreamList = (const_cast<AnalysisInfo &>( rhs ).fStreamList);
   fRevisionList = (const_cast<AnalysisInfo &>( rhs ).fRevisionList);
   fInputFileList = (const_cast<AnalysisInfo &>( rhs ).fInputFileList);
   AnalysisInfo &modrhs = const_cast<AnalysisInfo &>( rhs );
   modrhs.fAnalyzerList.clear();
   modrhs.fStreamList.clear();
   modrhs.fRevisionList.clear();
   modrhs.fInputFileList.clear();
   return *this;
}
AnalysisInfo::AnalysisInfo(const AnalysisInfo & rhs)
   : TObject(const_cast<AnalysisInfo &>( rhs ))
   , fAnalyzerList(const_cast<AnalysisInfo &>( rhs ).fAnalyzerList)
   , fStreamList(const_cast<AnalysisInfo &>( rhs ).fStreamList)
   , fRevisionList(const_cast<AnalysisInfo &>( rhs ).fRevisionList)
   , fInputFileList(const_cast<AnalysisInfo &>( rhs ).fInputFileList)
{
   // This is NOT a copy constructor. This is actually a move constructor (for stl container's sake).
   // Use at your own risk!
   (void)rhs; // avoid warning about unused parameter
   AnalysisInfo &modrhs = const_cast<AnalysisInfo &>( rhs );
   modrhs.fAnalyzerList.clear();
   modrhs.fStreamList.clear();
   modrhs.fRevisionList.clear();
   modrhs.fInputFileList.clear();
}
AnalysisInfo::~AnalysisInfo() {
}
#endif // AnalysisInfo_cxx

#ifndef NA62Analysis__Core__AnalyzerIdentifier_cxx
#define NA62Analysis__Core__AnalyzerIdentifier_cxx
NA62Analysis::Core::AnalyzerIdentifier::AnalyzerIdentifier() {
}
NA62Analysis::Core::AnalyzerIdentifier &NA62Analysis::Core::AnalyzerIdentifier::operator=(const AnalyzerIdentifier & rhs)
{
   // This is NOT a copy operator=. This is actually a move operator= (for stl container's sake).
   // Use at your own risk!
   (void)rhs; // avoid warning about unused parameter
   TObject::operator=(const_cast<AnalyzerIdentifier &>( rhs ));
   fAnalyzerName = (const_cast<AnalyzerIdentifier &>( rhs ).fAnalyzerName);
   return *this;
}
NA62Analysis::Core::AnalyzerIdentifier::AnalyzerIdentifier(const AnalyzerIdentifier & rhs)
   : TObject(const_cast<AnalyzerIdentifier &>( rhs ))
   , fAnalyzerName(const_cast<AnalyzerIdentifier &>( rhs ).fAnalyzerName)
{
   // This is NOT a copy constructor. This is actually a move constructor (for stl container's sake).
   // Use at your own risk!
   (void)rhs; // avoid warning about unused parameter
}
NA62Analysis::Core::AnalyzerIdentifier::~AnalyzerIdentifier() {
}
#endif // NA62Analysis__Core__AnalyzerIdentifier_cxx

#ifndef MCInfo_cxx
#define MCInfo_cxx
MCInfo::MCInfo() {
}
MCInfo &MCInfo::operator=(const MCInfo & rhs)
{
   // This is NOT a copy operator=. This is actually a move operator= (for stl container's sake).
   // Use at your own risk!
   (void)rhs; // avoid warning about unused parameter
   TObject::operator=(const_cast<MCInfo &>( rhs ));
   fRevision = (const_cast<MCInfo &>( rhs ).fRevision);
   fBeamType = (const_cast<MCInfo &>( rhs ).fBeamType);
   fBeamParticleType = (const_cast<MCInfo &>( rhs ).fBeamParticleType);
   fForcedDecay = (const_cast<MCInfo &>( rhs ).fForcedDecay);
   fForcedMuonDecay = (const_cast<MCInfo &>( rhs ).fForcedMuonDecay);
   fDecayType = (const_cast<MCInfo &>( rhs ).fDecayType);
   fMuonDecayType = (const_cast<MCInfo &>( rhs ).fMuonDecayType);
   fRadCor = (const_cast<MCInfo &>( rhs ).fRadCor);
   fPiZeroDecay = (const_cast<MCInfo &>( rhs ).fPiZeroDecay);
   fBRPi0D = (const_cast<MCInfo &>( rhs ).fBRPi0D);
   fDecayUniform = (const_cast<MCInfo &>( rhs ).fDecayUniform);
   fDecayGeneratorMode = (const_cast<MCInfo &>( rhs ).fDecayGeneratorMode);
   fZDecayMin = (const_cast<MCInfo &>( rhs ).fZDecayMin);
   fZDecayMax = (const_cast<MCInfo &>( rhs ).fZDecayMax);
   fCheckPoints = (const_cast<MCInfo &>( rhs ).fCheckPoints);
   fExoticParticleMass = (const_cast<MCInfo &>( rhs ).fExoticParticleMass);
   fExoticParticleDecayMode = (const_cast<MCInfo &>( rhs ).fExoticParticleDecayMode);
   fExoticParticleLifetime = (const_cast<MCInfo &>( rhs ).fExoticParticleLifetime);
   fFileName = (const_cast<MCInfo &>( rhs ).fFileName);
   fRunNumber = (const_cast<MCInfo &>( rhs ).fRunNumber);
   fRandomSeed = (const_cast<MCInfo &>( rhs ).fRandomSeed);
   fNEvents = (const_cast<MCInfo &>( rhs ).fNEvents);
   fBeamlinemap = (const_cast<MCInfo &>( rhs ).fBeamlinemap);
   fFastSimulationMode = (const_cast<MCInfo &>( rhs ).fFastSimulationMode);
   fBrPie2 = (const_cast<MCInfo &>( rhs ).fBrPie2);
   fForcedPionDecay = (const_cast<MCInfo &>( rhs ).fForcedPionDecay);
   MCInfo &modrhs = const_cast<MCInfo &>( rhs );
   modrhs.fCheckPoints.clear();
   modrhs.fExoticParticleMass.clear();
   modrhs.fExoticParticleDecayMode.clear();
   modrhs.fExoticParticleLifetime.clear();
   modrhs.fFileName.clear();
   modrhs.fRunNumber.clear();
   modrhs.fRandomSeed.clear();
   modrhs.fNEvents.clear();
   modrhs.fBeamlinemap.clear();
   return *this;
}
MCInfo::MCInfo(const MCInfo & rhs)
   : TObject(const_cast<MCInfo &>( rhs ))
   , fRevision(const_cast<MCInfo &>( rhs ).fRevision)
   , fBeamType(const_cast<MCInfo &>( rhs ).fBeamType)
   , fBeamParticleType(const_cast<MCInfo &>( rhs ).fBeamParticleType)
   , fForcedDecay(const_cast<MCInfo &>( rhs ).fForcedDecay)
   , fForcedMuonDecay(const_cast<MCInfo &>( rhs ).fForcedMuonDecay)
   , fDecayType(const_cast<MCInfo &>( rhs ).fDecayType)
   , fMuonDecayType(const_cast<MCInfo &>( rhs ).fMuonDecayType)
   , fRadCor(const_cast<MCInfo &>( rhs ).fRadCor)
   , fPiZeroDecay(const_cast<MCInfo &>( rhs ).fPiZeroDecay)
   , fBRPi0D(const_cast<MCInfo &>( rhs ).fBRPi0D)
   , fDecayUniform(const_cast<MCInfo &>( rhs ).fDecayUniform)
   , fDecayGeneratorMode(const_cast<MCInfo &>( rhs ).fDecayGeneratorMode)
   , fZDecayMin(const_cast<MCInfo &>( rhs ).fZDecayMin)
   , fZDecayMax(const_cast<MCInfo &>( rhs ).fZDecayMax)
   , fCheckPoints(const_cast<MCInfo &>( rhs ).fCheckPoints)
   , fExoticParticleMass(const_cast<MCInfo &>( rhs ).fExoticParticleMass)
   , fExoticParticleDecayMode(const_cast<MCInfo &>( rhs ).fExoticParticleDecayMode)
   , fExoticParticleLifetime(const_cast<MCInfo &>( rhs ).fExoticParticleLifetime)
   , fFileName(const_cast<MCInfo &>( rhs ).fFileName)
   , fRunNumber(const_cast<MCInfo &>( rhs ).fRunNumber)
   , fRandomSeed(const_cast<MCInfo &>( rhs ).fRandomSeed)
   , fNEvents(const_cast<MCInfo &>( rhs ).fNEvents)
   , fBeamlinemap(const_cast<MCInfo &>( rhs ).fBeamlinemap)
   , fFastSimulationMode(const_cast<MCInfo &>( rhs ).fFastSimulationMode)
   , fBrPie2(const_cast<MCInfo &>( rhs ).fBrPie2)
   , fForcedPionDecay(const_cast<MCInfo &>( rhs ).fForcedPionDecay)
{
   // This is NOT a copy constructor. This is actually a move constructor (for stl container's sake).
   // Use at your own risk!
   (void)rhs; // avoid warning about unused parameter
   MCInfo &modrhs = const_cast<MCInfo &>( rhs );
   modrhs.fCheckPoints.clear();
   modrhs.fExoticParticleMass.clear();
   modrhs.fExoticParticleDecayMode.clear();
   modrhs.fExoticParticleLifetime.clear();
   modrhs.fFileName.clear();
   modrhs.fRunNumber.clear();
   modrhs.fRandomSeed.clear();
   modrhs.fNEvents.clear();
   modrhs.fBeamlinemap.clear();
}
MCInfo::~MCInfo() {
}
#endif // MCInfo_cxx

#ifndef EventCandidate_cxx
#define EventCandidate_cxx
EventCandidate::EventCandidate() {
   fEventInfo = 0;
}
EventCandidate &EventCandidate::operator=(const EventCandidate & rhs)
{
   // This is NOT a copy operator=. This is actually a move operator= (for stl container's sake).
   // Use at your own risk!
   (void)rhs; // avoid warning about unused parameter
   TObject::operator=(const_cast<EventCandidate &>( rhs ));
   fEventInfo = (const_cast<EventCandidate &>( rhs ).fEventInfo);
   fChargedParticleCandidates = (const_cast<EventCandidate &>( rhs ).fChargedParticleCandidates);
   fNeutralParticleCandidates = (const_cast<EventCandidate &>( rhs ).fNeutralParticleCandidates);
   EventCandidate &modrhs = const_cast<EventCandidate &>( rhs );
   modrhs.fEventInfo = 0;
   modrhs.fChargedParticleCandidates.clear();
   modrhs.fNeutralParticleCandidates.clear();
   return *this;
}
EventCandidate::EventCandidate(const EventCandidate & rhs)
   : TObject(const_cast<EventCandidate &>( rhs ))
   , fEventInfo(const_cast<EventCandidate &>( rhs ).fEventInfo)
   , fChargedParticleCandidates(const_cast<EventCandidate &>( rhs ).fChargedParticleCandidates)
   , fNeutralParticleCandidates(const_cast<EventCandidate &>( rhs ).fNeutralParticleCandidates)
{
   // This is NOT a copy constructor. This is actually a move constructor (for stl container's sake).
   // Use at your own risk!
   (void)rhs; // avoid warning about unused parameter
   EventCandidate &modrhs = const_cast<EventCandidate &>( rhs );
   modrhs.fEventInfo = 0;
   modrhs.fChargedParticleCandidates.clear();
   modrhs.fNeutralParticleCandidates.clear();
}
EventCandidate::~EventCandidate() {
   delete fEventInfo;   fEventInfo = 0;
   std::for_each( ( fChargedParticleCandidates).rbegin(), ( fChargedParticleCandidates).rend(), DeleteObjectFunctor() );
   std::for_each( ( fNeutralParticleCandidates).rbegin(), ( fNeutralParticleCandidates).rend(), DeleteObjectFunctor() );
}
#endif // EventCandidate_cxx

#ifndef EventInfo_cxx
#define EventInfo_cxx
EventInfo::EventInfo() {
}
EventInfo &EventInfo::operator=(const EventInfo & rhs)
{
   // This is NOT a copy operator=. This is actually a move operator= (for stl container's sake).
   // Use at your own risk!
   (void)rhs; // avoid warning about unused parameter
   TObject::operator=(const_cast<EventInfo &>( rhs ));
   fRunNumber = (const_cast<EventInfo &>( rhs ).fRunNumber);
   fBurstNumber = (const_cast<EventInfo &>( rhs ).fBurstNumber);
   fEventNumber = (const_cast<EventInfo &>( rhs ).fEventNumber);
   fEventQualityMask = (const_cast<EventInfo &>( rhs ).fEventQualityMask);
   fTimestamp = (const_cast<EventInfo &>( rhs ).fTimestamp);
   fTriggerMask = (const_cast<EventInfo &>( rhs ).fTriggerMask);
   fTriggerFlags = (const_cast<EventInfo &>( rhs ).fTriggerFlags);
   fTriggerTime = (const_cast<EventInfo &>( rhs ).fTriggerTime);
   fLambda = (const_cast<EventInfo &>( rhs ).fLambda);
   fInstantaneousIntensity = (const_cast<EventInfo &>( rhs ).fInstantaneousIntensity);
   fMUV3Primitives = (const_cast<EventInfo &>( rhs ).fMUV3Primitives);
   fNewCHODPrimitives = (const_cast<EventInfo &>( rhs ).fNewCHODPrimitives);
   fOtherPrimitives = (const_cast<EventInfo &>( rhs ).fOtherPrimitives);
   return *this;
}
EventInfo::EventInfo(const EventInfo & rhs)
   : TObject(const_cast<EventInfo &>( rhs ))
   , fRunNumber(const_cast<EventInfo &>( rhs ).fRunNumber)
   , fBurstNumber(const_cast<EventInfo &>( rhs ).fBurstNumber)
   , fEventNumber(const_cast<EventInfo &>( rhs ).fEventNumber)
   , fEventQualityMask(const_cast<EventInfo &>( rhs ).fEventQualityMask)
   , fTimestamp(const_cast<EventInfo &>( rhs ).fTimestamp)
   , fTriggerMask(const_cast<EventInfo &>( rhs ).fTriggerMask)
   , fTriggerFlags(const_cast<EventInfo &>( rhs ).fTriggerFlags)
   , fTriggerTime(const_cast<EventInfo &>( rhs ).fTriggerTime)
   , fLambda(const_cast<EventInfo &>( rhs ).fLambda)
   , fInstantaneousIntensity(const_cast<EventInfo &>( rhs ).fInstantaneousIntensity)
   , fMUV3Primitives(const_cast<EventInfo &>( rhs ).fMUV3Primitives)
   , fNewCHODPrimitives(const_cast<EventInfo &>( rhs ).fNewCHODPrimitives)
   , fOtherPrimitives(const_cast<EventInfo &>( rhs ).fOtherPrimitives)
{
   // This is NOT a copy constructor. This is actually a move constructor (for stl container's sake).
   // Use at your own risk!
   (void)rhs; // avoid warning about unused parameter
}
EventInfo::~EventInfo() {
}
#endif // EventInfo_cxx

#ifndef ChParticleCandidate_cxx
#define ChParticleCandidate_cxx
ChParticleCandidate::ChParticleCandidate() {
}
ChParticleCandidate &ChParticleCandidate::operator=(const ChParticleCandidate & rhs)
{
   // This is NOT a copy operator=. This is actually a move operator= (for stl container's sake).
   // Use at your own risk!
   (void)rhs; // avoid warning about unused parameter
   TObject::operator=(const_cast<ChParticleCandidate &>( rhs ));
   fUpstreamTracks = (const_cast<ChParticleCandidate &>( rhs ).fUpstreamTracks);
   fUpstreamTracksG = (const_cast<ChParticleCandidate &>( rhs ).fUpstreamTracksG);
   fUpstreamTracksRICH = (const_cast<ChParticleCandidate &>( rhs ).fUpstreamTracksRICH);
   fUpstreamTracksKTAG = (const_cast<ChParticleCandidate &>( rhs ).fUpstreamTracksKTAG);
   fAcceptance = (const_cast<ChParticleCandidate &>( rhs ).fAcceptance);
   fCharge = (const_cast<ChParticleCandidate &>( rhs ).fCharge);
   fTrackTime = (const_cast<ChParticleCandidate &>( rhs ).fTrackTime);
   fAssCHODTime = (const_cast<ChParticleCandidate &>( rhs ).fAssCHODTime);
   fAssRICHJurTime = (const_cast<ChParticleCandidate &>( rhs ).fAssRICHJurTime);
   fAssNewCHODTime = (const_cast<ChParticleCandidate &>( rhs ).fAssNewCHODTime);
   fWeightedTime = (const_cast<ChParticleCandidate &>( rhs ).fWeightedTime);
   fAssMUV3CHODTimeBefore = (const_cast<ChParticleCandidate &>( rhs ).fAssMUV3CHODTimeBefore);
   fAssMUV3CHODTimeAfter = (const_cast<ChParticleCandidate &>( rhs ).fAssMUV3CHODTimeAfter);
   fAssMUV3RICHTimeBefore = (const_cast<ChParticleCandidate &>( rhs ).fAssMUV3RICHTimeBefore);
   fAssMUV3RICHTimeAfter = (const_cast<ChParticleCandidate &>( rhs ).fAssMUV3RICHTimeAfter);
   fTagBestUpstreamTrackAss = (const_cast<ChParticleCandidate &>( rhs ).fTagBestUpstreamTrackAss);
   fTagBestUpstreamTrackAssG = (const_cast<ChParticleCandidate &>( rhs ).fTagBestUpstreamTrackAssG);
   fTagBestUpstreamTrackAssRICH = (const_cast<ChParticleCandidate &>( rhs ).fTagBestUpstreamTrackAssRICH);
   fTagBestUpstreamTrackAssKTAG = (const_cast<ChParticleCandidate &>( rhs ).fTagBestUpstreamTrackAssKTAG);
   fKTAGAssBestGTKTime = (const_cast<ChParticleCandidate &>( rhs ).fKTAGAssBestGTKTime);
   fKTAGAssCHODTime = (const_cast<ChParticleCandidate &>( rhs ).fKTAGAssCHODTime);
   fKTAGAssCHOD5SectorTime = (const_cast<ChParticleCandidate &>( rhs ).fKTAGAssCHOD5SectorTime);
   fKTAGAssRICHTime = (const_cast<ChParticleCandidate &>( rhs ).fKTAGAssRICHTime);
   fKTAGAssRICH5SectorTime = (const_cast<ChParticleCandidate &>( rhs ).fKTAGAssRICH5SectorTime);
   fKTAGAssBestGTKNSectors = (const_cast<ChParticleCandidate &>( rhs ).fKTAGAssBestGTKNSectors);
   fKTAGAssCHODNSectors = (const_cast<ChParticleCandidate &>( rhs ).fKTAGAssCHODNSectors);
   fKTAGAssRICHNSectors = (const_cast<ChParticleCandidate &>( rhs ).fKTAGAssRICHNSectors);
   fMomentum = (const_cast<ChParticleCandidate &>( rhs ).fMomentum);
   fMomentumBT = (const_cast<ChParticleCandidate &>( rhs ).fMomentumBT);
   fVertexBTChi2 = (const_cast<ChParticleCandidate &>( rhs ).fVertexBTChi2);
   fVertexBT = (const_cast<ChParticleCandidate &>( rhs ).fVertexBT);
   fDiscriminant1 = (const_cast<ChParticleCandidate &>( rhs ).fDiscriminant1);
   fDiscriminant2 = (const_cast<ChParticleCandidate &>( rhs ).fDiscriminant2);
   fGTKAssTime = (const_cast<ChParticleCandidate &>( rhs ).fGTKAssTime);
   fNGTKTrackAss = (const_cast<ChParticleCandidate &>( rhs ).fNGTKTrackAss);
   fMomentumGTK = (const_cast<ChParticleCandidate &>( rhs ).fMomentumGTK);
   fCDA = (const_cast<ChParticleCandidate &>( rhs ).fCDA);
   fVertex = (const_cast<ChParticleCandidate &>( rhs ).fVertex);
   fNGTKTrackAssG = (const_cast<ChParticleCandidate &>( rhs ).fNGTKTrackAssG);
   fNGTKInTimeG = (const_cast<ChParticleCandidate &>( rhs ).fNGTKInTimeG);
   fGTKAssTimeG = (const_cast<ChParticleCandidate &>( rhs ).fGTKAssTimeG);
   fMomentumGTKG = (const_cast<ChParticleCandidate &>( rhs ).fMomentumGTKG);
   fCDAG = (const_cast<ChParticleCandidate &>( rhs ).fCDAG);
   fVertexG = (const_cast<ChParticleCandidate &>( rhs ).fVertexG);
   fDiscriminant1G = (const_cast<ChParticleCandidate &>( rhs ).fDiscriminant1G);
   fDiscriminant2G = (const_cast<ChParticleCandidate &>( rhs ).fDiscriminant2G);
   fNGTKTrackAssRICH = (const_cast<ChParticleCandidate &>( rhs ).fNGTKTrackAssRICH);
   fNGTKInTimeRICH = (const_cast<ChParticleCandidate &>( rhs ).fNGTKInTimeRICH);
   fGTKAssTimeRICH = (const_cast<ChParticleCandidate &>( rhs ).fGTKAssTimeRICH);
   fMomentumGTKRICH = (const_cast<ChParticleCandidate &>( rhs ).fMomentumGTKRICH);
   fCDARICH = (const_cast<ChParticleCandidate &>( rhs ).fCDARICH);
   fVertexRICH = (const_cast<ChParticleCandidate &>( rhs ).fVertexRICH);
   fDiscriminant1RICH = (const_cast<ChParticleCandidate &>( rhs ).fDiscriminant1RICH);
   fDiscriminant2RICH = (const_cast<ChParticleCandidate &>( rhs ).fDiscriminant2RICH);
   fNGTKTrackAssKTAG = (const_cast<ChParticleCandidate &>( rhs ).fNGTKTrackAssKTAG);
   fNGTKInTimeKTAG = (const_cast<ChParticleCandidate &>( rhs ).fNGTKInTimeKTAG);
   fGTKAssTimeKTAG = (const_cast<ChParticleCandidate &>( rhs ).fGTKAssTimeKTAG);
   fMomentumGTKKTAG = (const_cast<ChParticleCandidate &>( rhs ).fMomentumGTKKTAG);
   fCDAKTAG = (const_cast<ChParticleCandidate &>( rhs ).fCDAKTAG);
   fVertexKTAG = (const_cast<ChParticleCandidate &>( rhs ).fVertexKTAG);
   fDiscriminant1KTAG = (const_cast<ChParticleCandidate &>( rhs ).fDiscriminant1KTAG);
   fDiscriminant2KTAG = (const_cast<ChParticleCandidate &>( rhs ).fDiscriminant2KTAG);
   fMomentumAfterMagnet = (const_cast<ChParticleCandidate &>( rhs ).fMomentumAfterMagnet);
   fPositionBeforeMagnet = (const_cast<ChParticleCandidate &>( rhs ).fPositionBeforeMagnet);
   fPositionAfterMagnet = (const_cast<ChParticleCandidate &>( rhs ).fPositionAfterMagnet);
   fNChamber = (const_cast<ChParticleCandidate &>( rhs ).fNChamber);
   fCaloClusterAss = (const_cast<ChParticleCandidate &>( rhs ).fCaloClusterAss);
   fClusterMeanTime = (const_cast<ChParticleCandidate &>( rhs ).fClusterMeanTime);
   fClusterLKrTime = (const_cast<ChParticleCandidate &>( rhs ).fClusterLKrTime);
   fClusterMuv1Time = (const_cast<ChParticleCandidate &>( rhs ).fClusterMuv1Time);
   fClusterMuv2Time = (const_cast<ChParticleCandidate &>( rhs ).fClusterMuv2Time);
   fClusterTotalEnergy = (const_cast<ChParticleCandidate &>( rhs ).fClusterTotalEnergy);
   fClusterLKrEnergy = (const_cast<ChParticleCandidate &>( rhs ).fClusterLKrEnergy);
   fClusterLKrSeedEnergy = (const_cast<ChParticleCandidate &>( rhs ).fClusterLKrSeedEnergy);
   fClusterLKrNcells = (const_cast<ChParticleCandidate &>( rhs ).fClusterLKrNcells);
   fClusterMuv1Energy = (const_cast<ChParticleCandidate &>( rhs ).fClusterMuv1Energy);
   fClusterMuv2Energy = (const_cast<ChParticleCandidate &>( rhs ).fClusterMuv2Energy);
   fClusterMUV1OuterEnergy = (const_cast<ChParticleCandidate &>( rhs ).fClusterMUV1OuterEnergy);
   fClusterMUV2OuterEnergy = (const_cast<ChParticleCandidate &>( rhs ).fClusterMUV2OuterEnergy);
   fLKrClusterX = (const_cast<ChParticleCandidate &>( rhs ).fLKrClusterX);
   fLKrClusterY = (const_cast<ChParticleCandidate &>( rhs ).fLKrClusterY);
   fTimeLKr = (const_cast<ChParticleCandidate &>( rhs ).fTimeLKr);
   fTimeMUV1 = (const_cast<ChParticleCandidate &>( rhs ).fTimeMUV1);
   fTimeMUV2 = (const_cast<ChParticleCandidate &>( rhs ).fTimeMUV2);
   fEnergyLKr = (const_cast<ChParticleCandidate &>( rhs ).fEnergyLKr);
   fEnergyMUV1 = (const_cast<ChParticleCandidate &>( rhs ).fEnergyMUV1);
   fEnergyMUV2 = (const_cast<ChParticleCandidate &>( rhs ).fEnergyMUV2);
   fEnergyCAL = (const_cast<ChParticleCandidate &>( rhs ).fEnergyCAL);
   fEop = (const_cast<ChParticleCandidate &>( rhs ).fEop);
   fElectronRingRadius = (const_cast<ChParticleCandidate &>( rhs ).fElectronRingRadius);
   fRICHJurRingRadius = (const_cast<ChParticleCandidate &>( rhs ).fRICHJurRingRadius);
   fRICHJurRingCentrePosX = (const_cast<ChParticleCandidate &>( rhs ).fRICHJurRingCentrePosX);
   fRICHJurRingCentrePosY = (const_cast<ChParticleCandidate &>( rhs ).fRICHJurRingCentrePosY);
   fRICHTrkSeededNHits = (const_cast<ChParticleCandidate &>( rhs ).fRICHTrkSeededNHits);
   fRICHTrkSeededRadius = (const_cast<ChParticleCandidate &>( rhs ).fRICHTrkSeededRadius);
   fRICHTrkSeededCentrePosX = (const_cast<ChParticleCandidate &>( rhs ).fRICHTrkSeededCentrePosX);
   fRICHTrkSeededCentrePosY = (const_cast<ChParticleCandidate &>( rhs ).fRICHTrkSeededCentrePosY);
   fRICHTrkSeededTime = (const_cast<ChParticleCandidate &>( rhs ).fRICHTrkSeededTime);
   fRICHTrkSeededMass = (const_cast<ChParticleCandidate &>( rhs ).fRICHTrkSeededMass);
   fRICHTrkCentredNHits = (const_cast<ChParticleCandidate &>( rhs ).fRICHTrkCentredNHits);
   fRICHTrkCentredRadius = (const_cast<ChParticleCandidate &>( rhs ).fRICHTrkCentredRadius);
   fRICHTrkCentredCentrePosX = (const_cast<ChParticleCandidate &>( rhs ).fRICHTrkCentredCentrePosX);
   fRICHTrkCentredCentrePosY = (const_cast<ChParticleCandidate &>( rhs ).fRICHTrkCentredCentrePosY);
   fRICHTrkCentredTime = (const_cast<ChParticleCandidate &>( rhs ).fRICHTrkCentredTime);
   fRICHTrkCentredMass = (const_cast<ChParticleCandidate &>( rhs ).fRICHTrkCentredMass);
   fLKrElectronProbability = (const_cast<ChParticleCandidate &>( rhs ).fLKrElectronProbability);
   fLKrMuonProbability = (const_cast<ChParticleCandidate &>( rhs ).fLKrMuonProbability);
   fLKrPionProbability = (const_cast<ChParticleCandidate &>( rhs ).fLKrPionProbability);
   fRiCHElectronProbability = (const_cast<ChParticleCandidate &>( rhs ).fRiCHElectronProbability);
   fRiCHMuonProbability = (const_cast<ChParticleCandidate &>( rhs ).fRiCHMuonProbability);
   fRiCHPionProbability = (const_cast<ChParticleCandidate &>( rhs ).fRiCHPionProbability);
   fRiCHKaonProbability = (const_cast<ChParticleCandidate &>( rhs ).fRiCHKaonProbability);
   fRiCHBackgroundProbability = (const_cast<ChParticleCandidate &>( rhs ).fRiCHBackgroundProbability);
   fElectronProbabilityCombo = (const_cast<ChParticleCandidate &>( rhs ).fElectronProbabilityCombo);
   fMuonProbabilityCombo = (const_cast<ChParticleCandidate &>( rhs ).fMuonProbabilityCombo);
   fPionProbabilityCombo = (const_cast<ChParticleCandidate &>( rhs ).fPionProbabilityCombo);
   fElectronProbabilityMax = (const_cast<ChParticleCandidate &>( rhs ).fElectronProbabilityMax);
   fMuonProbabilityMax = (const_cast<ChParticleCandidate &>( rhs ).fMuonProbabilityMax);
   fPionProbabilityMax = (const_cast<ChParticleCandidate &>( rhs ).fPionProbabilityMax);
   fTotBackgroundProbabilityMax = (const_cast<ChParticleCandidate &>( rhs ).fTotBackgroundProbabilityMax);
   fFlagKE4 = (const_cast<ChParticleCandidate &>( rhs ).fFlagKE4);
   fsegments = (const_cast<ChParticleCandidate &>( rhs ).fsegments);
   fUpstreamBackground = (const_cast<ChParticleCandidate &>( rhs ).fUpstreamBackground);
   fGlobalLKrEnergy = (const_cast<ChParticleCandidate &>( rhs ).fGlobalLKrEnergy);
   fLAVMatchingCHOD = (const_cast<ChParticleCandidate &>( rhs ).fLAVMatchingCHOD);
   fLAVMatchingCHODTh = (const_cast<ChParticleCandidate &>( rhs ).fLAVMatchingCHODTh);
   fSAVMatchingCHOD = (const_cast<ChParticleCandidate &>( rhs ).fSAVMatchingCHOD);
   fSAVCreamMatchingCHOD = (const_cast<ChParticleCandidate &>( rhs ).fSAVCreamMatchingCHOD);
   fCHANTIMatchingCHOD = (const_cast<ChParticleCandidate &>( rhs ).fCHANTIMatchingCHOD);
   fLKrAuxClusterMatchingCHOD = (const_cast<ChParticleCandidate &>( rhs ).fLKrAuxClusterMatchingCHOD);
   fLKrStdClusterMatchingCHOD = (const_cast<ChParticleCandidate &>( rhs ).fLKrStdClusterMatchingCHOD);
   fMultiplicityCHOD = (const_cast<ChParticleCandidate &>( rhs ).fMultiplicityCHOD);
   fLAVMatchingRICH = (const_cast<ChParticleCandidate &>( rhs ).fLAVMatchingRICH);
   fLAVMatchingRICHTh = (const_cast<ChParticleCandidate &>( rhs ).fLAVMatchingRICHTh);
   fSAVMatchingRICH = (const_cast<ChParticleCandidate &>( rhs ).fSAVMatchingRICH);
   fSAVCreamMatchingRICH = (const_cast<ChParticleCandidate &>( rhs ).fSAVCreamMatchingRICH);
   fCHANTIMatchingRICH = (const_cast<ChParticleCandidate &>( rhs ).fCHANTIMatchingRICH);
   fLKrAuxClusterMatchingRICH = (const_cast<ChParticleCandidate &>( rhs ).fLKrAuxClusterMatchingRICH);
   fLKrStdClusterMatchingRICH = (const_cast<ChParticleCandidate &>( rhs ).fLKrStdClusterMatchingRICH);
   fMultiplicityRICH = (const_cast<ChParticleCandidate &>( rhs ).fMultiplicityRICH);
   IRCTHLH = (const_cast<ChParticleCandidate &>( rhs ).IRCTHLH);
   IRCTLTH = (const_cast<ChParticleCandidate &>( rhs ).IRCTLTH);
   IRCTLLL = (const_cast<ChParticleCandidate &>( rhs ).IRCTLLL);
   SACTHLH = (const_cast<ChParticleCandidate &>( rhs ).SACTHLH);
   SACTLTH = (const_cast<ChParticleCandidate &>( rhs ).SACTLTH);
   SACTLLL = (const_cast<ChParticleCandidate &>( rhs ).SACTLLL);
   ChParticleCandidate &modrhs = const_cast<ChParticleCandidate &>( rhs );
   modrhs.fUpstreamTracks.clear();
   modrhs.fUpstreamTracksG.clear();
   modrhs.fUpstreamTracksRICH.clear();
   modrhs.fUpstreamTracksKTAG.clear();
   for (Int_t i=0;i<25;i++) reinterpret_cast<double *>(fCovariance)[i] = reinterpret_cast<double const *>(rhs.fCovariance)[i];
   return *this;
}
ChParticleCandidate::ChParticleCandidate(const ChParticleCandidate & rhs)
   : TObject(const_cast<ChParticleCandidate &>( rhs ))
   , fUpstreamTracks(const_cast<ChParticleCandidate &>( rhs ).fUpstreamTracks)
   , fUpstreamTracksG(const_cast<ChParticleCandidate &>( rhs ).fUpstreamTracksG)
   , fUpstreamTracksRICH(const_cast<ChParticleCandidate &>( rhs ).fUpstreamTracksRICH)
   , fUpstreamTracksKTAG(const_cast<ChParticleCandidate &>( rhs ).fUpstreamTracksKTAG)
   , fAcceptance(const_cast<ChParticleCandidate &>( rhs ).fAcceptance)
   , fCharge(const_cast<ChParticleCandidate &>( rhs ).fCharge)
   , fTrackTime(const_cast<ChParticleCandidate &>( rhs ).fTrackTime)
   , fAssCHODTime(const_cast<ChParticleCandidate &>( rhs ).fAssCHODTime)
   , fAssRICHJurTime(const_cast<ChParticleCandidate &>( rhs ).fAssRICHJurTime)
   , fAssNewCHODTime(const_cast<ChParticleCandidate &>( rhs ).fAssNewCHODTime)
   , fWeightedTime(const_cast<ChParticleCandidate &>( rhs ).fWeightedTime)
   , fAssMUV3CHODTimeBefore(const_cast<ChParticleCandidate &>( rhs ).fAssMUV3CHODTimeBefore)
   , fAssMUV3CHODTimeAfter(const_cast<ChParticleCandidate &>( rhs ).fAssMUV3CHODTimeAfter)
   , fAssMUV3RICHTimeBefore(const_cast<ChParticleCandidate &>( rhs ).fAssMUV3RICHTimeBefore)
   , fAssMUV3RICHTimeAfter(const_cast<ChParticleCandidate &>( rhs ).fAssMUV3RICHTimeAfter)
   , fTagBestUpstreamTrackAss(const_cast<ChParticleCandidate &>( rhs ).fTagBestUpstreamTrackAss)
   , fTagBestUpstreamTrackAssG(const_cast<ChParticleCandidate &>( rhs ).fTagBestUpstreamTrackAssG)
   , fTagBestUpstreamTrackAssRICH(const_cast<ChParticleCandidate &>( rhs ).fTagBestUpstreamTrackAssRICH)
   , fTagBestUpstreamTrackAssKTAG(const_cast<ChParticleCandidate &>( rhs ).fTagBestUpstreamTrackAssKTAG)
   , fKTAGAssBestGTKTime(const_cast<ChParticleCandidate &>( rhs ).fKTAGAssBestGTKTime)
   , fKTAGAssCHODTime(const_cast<ChParticleCandidate &>( rhs ).fKTAGAssCHODTime)
   , fKTAGAssCHOD5SectorTime(const_cast<ChParticleCandidate &>( rhs ).fKTAGAssCHOD5SectorTime)
   , fKTAGAssRICHTime(const_cast<ChParticleCandidate &>( rhs ).fKTAGAssRICHTime)
   , fKTAGAssRICH5SectorTime(const_cast<ChParticleCandidate &>( rhs ).fKTAGAssRICH5SectorTime)
   , fKTAGAssBestGTKNSectors(const_cast<ChParticleCandidate &>( rhs ).fKTAGAssBestGTKNSectors)
   , fKTAGAssCHODNSectors(const_cast<ChParticleCandidate &>( rhs ).fKTAGAssCHODNSectors)
   , fKTAGAssRICHNSectors(const_cast<ChParticleCandidate &>( rhs ).fKTAGAssRICHNSectors)
   , fMomentum(const_cast<ChParticleCandidate &>( rhs ).fMomentum)
   , fMomentumBT(const_cast<ChParticleCandidate &>( rhs ).fMomentumBT)
   , fVertexBTChi2(const_cast<ChParticleCandidate &>( rhs ).fVertexBTChi2)
   , fVertexBT(const_cast<ChParticleCandidate &>( rhs ).fVertexBT)
   , fDiscriminant1(const_cast<ChParticleCandidate &>( rhs ).fDiscriminant1)
   , fDiscriminant2(const_cast<ChParticleCandidate &>( rhs ).fDiscriminant2)
   , fGTKAssTime(const_cast<ChParticleCandidate &>( rhs ).fGTKAssTime)
   , fNGTKTrackAss(const_cast<ChParticleCandidate &>( rhs ).fNGTKTrackAss)
   , fMomentumGTK(const_cast<ChParticleCandidate &>( rhs ).fMomentumGTK)
   , fCDA(const_cast<ChParticleCandidate &>( rhs ).fCDA)
   , fVertex(const_cast<ChParticleCandidate &>( rhs ).fVertex)
   , fNGTKTrackAssG(const_cast<ChParticleCandidate &>( rhs ).fNGTKTrackAssG)
   , fNGTKInTimeG(const_cast<ChParticleCandidate &>( rhs ).fNGTKInTimeG)
   , fGTKAssTimeG(const_cast<ChParticleCandidate &>( rhs ).fGTKAssTimeG)
   , fMomentumGTKG(const_cast<ChParticleCandidate &>( rhs ).fMomentumGTKG)
   , fCDAG(const_cast<ChParticleCandidate &>( rhs ).fCDAG)
   , fVertexG(const_cast<ChParticleCandidate &>( rhs ).fVertexG)
   , fDiscriminant1G(const_cast<ChParticleCandidate &>( rhs ).fDiscriminant1G)
   , fDiscriminant2G(const_cast<ChParticleCandidate &>( rhs ).fDiscriminant2G)
   , fNGTKTrackAssRICH(const_cast<ChParticleCandidate &>( rhs ).fNGTKTrackAssRICH)
   , fNGTKInTimeRICH(const_cast<ChParticleCandidate &>( rhs ).fNGTKInTimeRICH)
   , fGTKAssTimeRICH(const_cast<ChParticleCandidate &>( rhs ).fGTKAssTimeRICH)
   , fMomentumGTKRICH(const_cast<ChParticleCandidate &>( rhs ).fMomentumGTKRICH)
   , fCDARICH(const_cast<ChParticleCandidate &>( rhs ).fCDARICH)
   , fVertexRICH(const_cast<ChParticleCandidate &>( rhs ).fVertexRICH)
   , fDiscriminant1RICH(const_cast<ChParticleCandidate &>( rhs ).fDiscriminant1RICH)
   , fDiscriminant2RICH(const_cast<ChParticleCandidate &>( rhs ).fDiscriminant2RICH)
   , fNGTKTrackAssKTAG(const_cast<ChParticleCandidate &>( rhs ).fNGTKTrackAssKTAG)
   , fNGTKInTimeKTAG(const_cast<ChParticleCandidate &>( rhs ).fNGTKInTimeKTAG)
   , fGTKAssTimeKTAG(const_cast<ChParticleCandidate &>( rhs ).fGTKAssTimeKTAG)
   , fMomentumGTKKTAG(const_cast<ChParticleCandidate &>( rhs ).fMomentumGTKKTAG)
   , fCDAKTAG(const_cast<ChParticleCandidate &>( rhs ).fCDAKTAG)
   , fVertexKTAG(const_cast<ChParticleCandidate &>( rhs ).fVertexKTAG)
   , fDiscriminant1KTAG(const_cast<ChParticleCandidate &>( rhs ).fDiscriminant1KTAG)
   , fDiscriminant2KTAG(const_cast<ChParticleCandidate &>( rhs ).fDiscriminant2KTAG)
   , fMomentumAfterMagnet(const_cast<ChParticleCandidate &>( rhs ).fMomentumAfterMagnet)
   , fPositionBeforeMagnet(const_cast<ChParticleCandidate &>( rhs ).fPositionBeforeMagnet)
   , fPositionAfterMagnet(const_cast<ChParticleCandidate &>( rhs ).fPositionAfterMagnet)
   , fNChamber(const_cast<ChParticleCandidate &>( rhs ).fNChamber)
   , fCaloClusterAss(const_cast<ChParticleCandidate &>( rhs ).fCaloClusterAss)
   , fClusterMeanTime(const_cast<ChParticleCandidate &>( rhs ).fClusterMeanTime)
   , fClusterLKrTime(const_cast<ChParticleCandidate &>( rhs ).fClusterLKrTime)
   , fClusterMuv1Time(const_cast<ChParticleCandidate &>( rhs ).fClusterMuv1Time)
   , fClusterMuv2Time(const_cast<ChParticleCandidate &>( rhs ).fClusterMuv2Time)
   , fClusterTotalEnergy(const_cast<ChParticleCandidate &>( rhs ).fClusterTotalEnergy)
   , fClusterLKrEnergy(const_cast<ChParticleCandidate &>( rhs ).fClusterLKrEnergy)
   , fClusterLKrSeedEnergy(const_cast<ChParticleCandidate &>( rhs ).fClusterLKrSeedEnergy)
   , fClusterLKrNcells(const_cast<ChParticleCandidate &>( rhs ).fClusterLKrNcells)
   , fClusterMuv1Energy(const_cast<ChParticleCandidate &>( rhs ).fClusterMuv1Energy)
   , fClusterMuv2Energy(const_cast<ChParticleCandidate &>( rhs ).fClusterMuv2Energy)
   , fClusterMUV1OuterEnergy(const_cast<ChParticleCandidate &>( rhs ).fClusterMUV1OuterEnergy)
   , fClusterMUV2OuterEnergy(const_cast<ChParticleCandidate &>( rhs ).fClusterMUV2OuterEnergy)
   , fLKrClusterX(const_cast<ChParticleCandidate &>( rhs ).fLKrClusterX)
   , fLKrClusterY(const_cast<ChParticleCandidate &>( rhs ).fLKrClusterY)
   , fTimeLKr(const_cast<ChParticleCandidate &>( rhs ).fTimeLKr)
   , fTimeMUV1(const_cast<ChParticleCandidate &>( rhs ).fTimeMUV1)
   , fTimeMUV2(const_cast<ChParticleCandidate &>( rhs ).fTimeMUV2)
   , fEnergyLKr(const_cast<ChParticleCandidate &>( rhs ).fEnergyLKr)
   , fEnergyMUV1(const_cast<ChParticleCandidate &>( rhs ).fEnergyMUV1)
   , fEnergyMUV2(const_cast<ChParticleCandidate &>( rhs ).fEnergyMUV2)
   , fEnergyCAL(const_cast<ChParticleCandidate &>( rhs ).fEnergyCAL)
   , fEop(const_cast<ChParticleCandidate &>( rhs ).fEop)
   , fElectronRingRadius(const_cast<ChParticleCandidate &>( rhs ).fElectronRingRadius)
   , fRICHJurRingRadius(const_cast<ChParticleCandidate &>( rhs ).fRICHJurRingRadius)
   , fRICHJurRingCentrePosX(const_cast<ChParticleCandidate &>( rhs ).fRICHJurRingCentrePosX)
   , fRICHJurRingCentrePosY(const_cast<ChParticleCandidate &>( rhs ).fRICHJurRingCentrePosY)
   , fRICHTrkSeededNHits(const_cast<ChParticleCandidate &>( rhs ).fRICHTrkSeededNHits)
   , fRICHTrkSeededRadius(const_cast<ChParticleCandidate &>( rhs ).fRICHTrkSeededRadius)
   , fRICHTrkSeededCentrePosX(const_cast<ChParticleCandidate &>( rhs ).fRICHTrkSeededCentrePosX)
   , fRICHTrkSeededCentrePosY(const_cast<ChParticleCandidate &>( rhs ).fRICHTrkSeededCentrePosY)
   , fRICHTrkSeededTime(const_cast<ChParticleCandidate &>( rhs ).fRICHTrkSeededTime)
   , fRICHTrkSeededMass(const_cast<ChParticleCandidate &>( rhs ).fRICHTrkSeededMass)
   , fRICHTrkCentredNHits(const_cast<ChParticleCandidate &>( rhs ).fRICHTrkCentredNHits)
   , fRICHTrkCentredRadius(const_cast<ChParticleCandidate &>( rhs ).fRICHTrkCentredRadius)
   , fRICHTrkCentredCentrePosX(const_cast<ChParticleCandidate &>( rhs ).fRICHTrkCentredCentrePosX)
   , fRICHTrkCentredCentrePosY(const_cast<ChParticleCandidate &>( rhs ).fRICHTrkCentredCentrePosY)
   , fRICHTrkCentredTime(const_cast<ChParticleCandidate &>( rhs ).fRICHTrkCentredTime)
   , fRICHTrkCentredMass(const_cast<ChParticleCandidate &>( rhs ).fRICHTrkCentredMass)
   , fLKrElectronProbability(const_cast<ChParticleCandidate &>( rhs ).fLKrElectronProbability)
   , fLKrMuonProbability(const_cast<ChParticleCandidate &>( rhs ).fLKrMuonProbability)
   , fLKrPionProbability(const_cast<ChParticleCandidate &>( rhs ).fLKrPionProbability)
   , fRiCHElectronProbability(const_cast<ChParticleCandidate &>( rhs ).fRiCHElectronProbability)
   , fRiCHMuonProbability(const_cast<ChParticleCandidate &>( rhs ).fRiCHMuonProbability)
   , fRiCHPionProbability(const_cast<ChParticleCandidate &>( rhs ).fRiCHPionProbability)
   , fRiCHKaonProbability(const_cast<ChParticleCandidate &>( rhs ).fRiCHKaonProbability)
   , fRiCHBackgroundProbability(const_cast<ChParticleCandidate &>( rhs ).fRiCHBackgroundProbability)
   , fElectronProbabilityCombo(const_cast<ChParticleCandidate &>( rhs ).fElectronProbabilityCombo)
   , fMuonProbabilityCombo(const_cast<ChParticleCandidate &>( rhs ).fMuonProbabilityCombo)
   , fPionProbabilityCombo(const_cast<ChParticleCandidate &>( rhs ).fPionProbabilityCombo)
   , fElectronProbabilityMax(const_cast<ChParticleCandidate &>( rhs ).fElectronProbabilityMax)
   , fMuonProbabilityMax(const_cast<ChParticleCandidate &>( rhs ).fMuonProbabilityMax)
   , fPionProbabilityMax(const_cast<ChParticleCandidate &>( rhs ).fPionProbabilityMax)
   , fTotBackgroundProbabilityMax(const_cast<ChParticleCandidate &>( rhs ).fTotBackgroundProbabilityMax)
   , fFlagKE4(const_cast<ChParticleCandidate &>( rhs ).fFlagKE4)
   , fsegments(const_cast<ChParticleCandidate &>( rhs ).fsegments)
   , fUpstreamBackground(const_cast<ChParticleCandidate &>( rhs ).fUpstreamBackground)
   , fGlobalLKrEnergy(const_cast<ChParticleCandidate &>( rhs ).fGlobalLKrEnergy)
   , fLAVMatchingCHOD(const_cast<ChParticleCandidate &>( rhs ).fLAVMatchingCHOD)
   , fLAVMatchingCHODTh(const_cast<ChParticleCandidate &>( rhs ).fLAVMatchingCHODTh)
   , fSAVMatchingCHOD(const_cast<ChParticleCandidate &>( rhs ).fSAVMatchingCHOD)
   , fSAVCreamMatchingCHOD(const_cast<ChParticleCandidate &>( rhs ).fSAVCreamMatchingCHOD)
   , fCHANTIMatchingCHOD(const_cast<ChParticleCandidate &>( rhs ).fCHANTIMatchingCHOD)
   , fLKrAuxClusterMatchingCHOD(const_cast<ChParticleCandidate &>( rhs ).fLKrAuxClusterMatchingCHOD)
   , fLKrStdClusterMatchingCHOD(const_cast<ChParticleCandidate &>( rhs ).fLKrStdClusterMatchingCHOD)
   , fMultiplicityCHOD(const_cast<ChParticleCandidate &>( rhs ).fMultiplicityCHOD)
   , fLAVMatchingRICH(const_cast<ChParticleCandidate &>( rhs ).fLAVMatchingRICH)
   , fLAVMatchingRICHTh(const_cast<ChParticleCandidate &>( rhs ).fLAVMatchingRICHTh)
   , fSAVMatchingRICH(const_cast<ChParticleCandidate &>( rhs ).fSAVMatchingRICH)
   , fSAVCreamMatchingRICH(const_cast<ChParticleCandidate &>( rhs ).fSAVCreamMatchingRICH)
   , fCHANTIMatchingRICH(const_cast<ChParticleCandidate &>( rhs ).fCHANTIMatchingRICH)
   , fLKrAuxClusterMatchingRICH(const_cast<ChParticleCandidate &>( rhs ).fLKrAuxClusterMatchingRICH)
   , fLKrStdClusterMatchingRICH(const_cast<ChParticleCandidate &>( rhs ).fLKrStdClusterMatchingRICH)
   , fMultiplicityRICH(const_cast<ChParticleCandidate &>( rhs ).fMultiplicityRICH)
   , IRCTHLH(const_cast<ChParticleCandidate &>( rhs ).IRCTHLH)
   , IRCTLTH(const_cast<ChParticleCandidate &>( rhs ).IRCTLTH)
   , IRCTLLL(const_cast<ChParticleCandidate &>( rhs ).IRCTLLL)
   , SACTHLH(const_cast<ChParticleCandidate &>( rhs ).SACTHLH)
   , SACTLTH(const_cast<ChParticleCandidate &>( rhs ).SACTLTH)
   , SACTLLL(const_cast<ChParticleCandidate &>( rhs ).SACTLLL)
{
   // This is NOT a copy constructor. This is actually a move constructor (for stl container's sake).
   // Use at your own risk!
   (void)rhs; // avoid warning about unused parameter
   ChParticleCandidate &modrhs = const_cast<ChParticleCandidate &>( rhs );
   modrhs.fUpstreamTracks.clear();
   modrhs.fUpstreamTracksG.clear();
   modrhs.fUpstreamTracksRICH.clear();
   modrhs.fUpstreamTracksKTAG.clear();
   for (Int_t i=0;i<25;i++) reinterpret_cast<double *>(fCovariance)[i] = reinterpret_cast<double const *>(rhs.fCovariance)[i];
}
ChParticleCandidate::~ChParticleCandidate() {
   std::for_each( ( fUpstreamTracks).rbegin(), ( fUpstreamTracks).rend(), DeleteObjectFunctor() );
   std::for_each( ( fUpstreamTracksG).rbegin(), ( fUpstreamTracksG).rend(), DeleteObjectFunctor() );
   std::for_each( ( fUpstreamTracksRICH).rbegin(), ( fUpstreamTracksRICH).rend(), DeleteObjectFunctor() );
   std::for_each( ( fUpstreamTracksKTAG).rbegin(), ( fUpstreamTracksKTAG).rend(), DeleteObjectFunctor() );
}
#endif // ChParticleCandidate_cxx

#ifndef UpstreamTrack_cxx
#define UpstreamTrack_cxx
UpstreamTrack::UpstreamTrack() {
}
UpstreamTrack &UpstreamTrack::operator=(const UpstreamTrack & rhs)
{
   // This is NOT a copy operator=. This is actually a move operator= (for stl container's sake).
   // Use at your own risk!
   (void)rhs; // avoid warning about unused parameter
   TObject::operator=(const_cast<UpstreamTrack &>( rhs ));
   fMomentum = (const_cast<UpstreamTrack &>( rhs ).fMomentum);
   fTimeGTK1 = (const_cast<UpstreamTrack &>( rhs ).fTimeGTK1);
   fTimeGTK2 = (const_cast<UpstreamTrack &>( rhs ).fTimeGTK2);
   fTimeGTK3 = (const_cast<UpstreamTrack &>( rhs ).fTimeGTK3);
   fPosGTK1 = (const_cast<UpstreamTrack &>( rhs ).fPosGTK1);
   fPosGTK2 = (const_cast<UpstreamTrack &>( rhs ).fPosGTK2);
   fPosGTK3 = (const_cast<UpstreamTrack &>( rhs ).fPosGTK3);
   fGTKChi2x = (const_cast<UpstreamTrack &>( rhs ).fGTKChi2x);
   fTimeGTKTrack = (const_cast<UpstreamTrack &>( rhs ).fTimeGTKTrack);
   fTimeKTAG = (const_cast<UpstreamTrack &>( rhs ).fTimeKTAG);
   fNKTAGSector = (const_cast<UpstreamTrack &>( rhs ).fNKTAGSector);
   fVertex = (const_cast<UpstreamTrack &>( rhs ).fVertex);
   fCDA = (const_cast<UpstreamTrack &>( rhs ).fCDA);
   fVertexBT = (const_cast<UpstreamTrack &>( rhs ).fVertexBT);
   fVertexBTChi2 = (const_cast<UpstreamTrack &>( rhs ).fVertexBTChi2);
   fDiscriminant1 = (const_cast<UpstreamTrack &>( rhs ).fDiscriminant1);
   fDiscriminant2 = (const_cast<UpstreamTrack &>( rhs ).fDiscriminant2);
   fDiscriminantP = (const_cast<UpstreamTrack &>( rhs ).fDiscriminantP);
   fBTDownstreamMomentum = (const_cast<UpstreamTrack &>( rhs ).fBTDownstreamMomentum);
   fUpstreamBackground = (const_cast<UpstreamTrack &>( rhs ).fUpstreamBackground);
   return *this;
}
UpstreamTrack::UpstreamTrack(const UpstreamTrack & rhs)
   : TObject(const_cast<UpstreamTrack &>( rhs ))
   , fMomentum(const_cast<UpstreamTrack &>( rhs ).fMomentum)
   , fTimeGTK1(const_cast<UpstreamTrack &>( rhs ).fTimeGTK1)
   , fTimeGTK2(const_cast<UpstreamTrack &>( rhs ).fTimeGTK2)
   , fTimeGTK3(const_cast<UpstreamTrack &>( rhs ).fTimeGTK3)
   , fPosGTK1(const_cast<UpstreamTrack &>( rhs ).fPosGTK1)
   , fPosGTK2(const_cast<UpstreamTrack &>( rhs ).fPosGTK2)
   , fPosGTK3(const_cast<UpstreamTrack &>( rhs ).fPosGTK3)
   , fGTKChi2x(const_cast<UpstreamTrack &>( rhs ).fGTKChi2x)
   , fTimeGTKTrack(const_cast<UpstreamTrack &>( rhs ).fTimeGTKTrack)
   , fTimeKTAG(const_cast<UpstreamTrack &>( rhs ).fTimeKTAG)
   , fNKTAGSector(const_cast<UpstreamTrack &>( rhs ).fNKTAGSector)
   , fVertex(const_cast<UpstreamTrack &>( rhs ).fVertex)
   , fCDA(const_cast<UpstreamTrack &>( rhs ).fCDA)
   , fVertexBT(const_cast<UpstreamTrack &>( rhs ).fVertexBT)
   , fVertexBTChi2(const_cast<UpstreamTrack &>( rhs ).fVertexBTChi2)
   , fDiscriminant1(const_cast<UpstreamTrack &>( rhs ).fDiscriminant1)
   , fDiscriminant2(const_cast<UpstreamTrack &>( rhs ).fDiscriminant2)
   , fDiscriminantP(const_cast<UpstreamTrack &>( rhs ).fDiscriminantP)
   , fBTDownstreamMomentum(const_cast<UpstreamTrack &>( rhs ).fBTDownstreamMomentum)
   , fUpstreamBackground(const_cast<UpstreamTrack &>( rhs ).fUpstreamBackground)
{
   // This is NOT a copy constructor. This is actually a move constructor (for stl container's sake).
   // Use at your own risk!
   (void)rhs; // avoid warning about unused parameter
}
UpstreamTrack::~UpstreamTrack() {
}
#endif // UpstreamTrack_cxx

#ifndef NeParticleCandidate_cxx
#define NeParticleCandidate_cxx
NeParticleCandidate::NeParticleCandidate() {
}
NeParticleCandidate &NeParticleCandidate::operator=(const NeParticleCandidate & rhs)
{
   // This is NOT a copy operator=. This is actually a move operator= (for stl container's sake).
   // Use at your own risk!
   (void)rhs; // avoid warning about unused parameter
   TObject::operator=(const_cast<NeParticleCandidate &>( rhs ));
   fEnergyLKr = (const_cast<NeParticleCandidate &>( rhs ).fEnergyLKr);
   fTime = (const_cast<NeParticleCandidate &>( rhs ).fTime);
   fPosition = (const_cast<NeParticleCandidate &>( rhs ).fPosition);
   fSeedEnergyLKr = (const_cast<NeParticleCandidate &>( rhs ).fSeedEnergyLKr);
   fNCellsLKr = (const_cast<NeParticleCandidate &>( rhs ).fNCellsLKr);
   fDDeadCellLKr = (const_cast<NeParticleCandidate &>( rhs ).fDDeadCellLKr);
   return *this;
}
NeParticleCandidate::NeParticleCandidate(const NeParticleCandidate & rhs)
   : TObject(const_cast<NeParticleCandidate &>( rhs ))
   , fEnergyLKr(const_cast<NeParticleCandidate &>( rhs ).fEnergyLKr)
   , fTime(const_cast<NeParticleCandidate &>( rhs ).fTime)
   , fPosition(const_cast<NeParticleCandidate &>( rhs ).fPosition)
   , fSeedEnergyLKr(const_cast<NeParticleCandidate &>( rhs ).fSeedEnergyLKr)
   , fNCellsLKr(const_cast<NeParticleCandidate &>( rhs ).fNCellsLKr)
   , fDDeadCellLKr(const_cast<NeParticleCandidate &>( rhs ).fDDeadCellLKr)
{
   // This is NOT a copy constructor. This is actually a move constructor (for stl container's sake).
   // Use at your own risk!
   (void)rhs; // avoid warning about unused parameter
}
NeParticleCandidate::~NeParticleCandidate() {
}
#endif // NeParticleCandidate_cxx

