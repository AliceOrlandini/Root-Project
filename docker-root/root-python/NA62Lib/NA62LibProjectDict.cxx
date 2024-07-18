// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME NA62LibProjectDict
#define R__NO_DEPRECATION

/*******************************************************************/
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#define G__DICTIONARY
#include "ROOT/RConfig.hxx"
#include "TClass.h"
#include "TDictAttributeMap.h"
#include "TInterpreter.h"
#include "TROOT.h"
#include "TBuffer.h"
#include "TMemberInspector.h"
#include "TInterpreter.h"
#include "TVirtualMutex.h"
#include "TError.h"

#ifndef G__ROOT
#define G__ROOT
#endif

#include "RtypesImp.h"
#include "TIsAProxy.h"
#include "TFileMergeInfo.h"
#include <algorithm>
#include "TCollectionProxyInfo.h"
/*******************************************************************/

#include "TDataMember.h"

// Header files passed as explicit arguments
#include "NA62LibProjectHeaders.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace NA62Analysis {
   namespace ROOTDict {
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance();
      static TClass *NA62Analysis_Dictionary();

      // Function generating the singleton type initializer
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance()
      {
         static ::ROOT::TGenericClassInfo 
            instance("NA62Analysis", 0 /*version*/, "NA62Analysis__Core__AnalyzerIdentifier.h", 10,
                     ::ROOT::Internal::DefineBehavior((void*)nullptr,(void*)nullptr),
                     &NA62Analysis_Dictionary, 0);
         return &instance;
      }
      // Insure that the inline function is _not_ optimized away by the compiler
      ::ROOT::TGenericClassInfo *(*_R__UNIQUE_DICT_(InitFunctionKeeper))() = &GenerateInitInstance;  
      // Static variable to force the class initialization
      static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstance(); R__UseDummy(_R__UNIQUE_DICT_(Init));

      // Dictionary for non-ClassDef classes
      static TClass *NA62Analysis_Dictionary() {
         return GenerateInitInstance()->GetClass();
      }

   }
}

namespace NA62Analysis {
   namespace Core {
   namespace ROOTDict {
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance();
      static TClass *NA62AnalysiscLcLCore_Dictionary();

      // Function generating the singleton type initializer
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance()
      {
         static ::ROOT::TGenericClassInfo 
            instance("NA62Analysis::Core", 0 /*version*/, "NA62Analysis__Core__AnalyzerIdentifier.h", 11,
                     ::ROOT::Internal::DefineBehavior((void*)nullptr,(void*)nullptr),
                     &NA62AnalysiscLcLCore_Dictionary, 0);
         return &instance;
      }
      // Insure that the inline function is _not_ optimized away by the compiler
      ::ROOT::TGenericClassInfo *(*_R__UNIQUE_DICT_(InitFunctionKeeper))() = &GenerateInitInstance;  
      // Static variable to force the class initialization
      static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstance(); R__UseDummy(_R__UNIQUE_DICT_(Init));

      // Dictionary for non-ClassDef classes
      static TClass *NA62AnalysiscLcLCore_Dictionary() {
         return GenerateInitInstance()->GetClass();
      }

   }
}
}

namespace ROOT {
   static void *new_CheckPointInfo(void *p = nullptr);
   static void *newArray_CheckPointInfo(Long_t size, void *p);
   static void delete_CheckPointInfo(void *p);
   static void deleteArray_CheckPointInfo(void *p);
   static void destruct_CheckPointInfo(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CheckPointInfo*)
   {
      ::CheckPointInfo *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CheckPointInfo >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("CheckPointInfo", ::CheckPointInfo::Class_Version(), "CheckPointInfo.h", 16,
                  typeid(::CheckPointInfo), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CheckPointInfo::Dictionary, isa_proxy, 4,
                  sizeof(::CheckPointInfo) );
      instance.SetNew(&new_CheckPointInfo);
      instance.SetNewArray(&newArray_CheckPointInfo);
      instance.SetDelete(&delete_CheckPointInfo);
      instance.SetDeleteArray(&deleteArray_CheckPointInfo);
      instance.SetDestructor(&destruct_CheckPointInfo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CheckPointInfo*)
   {
      return GenerateInitInstanceLocal(static_cast<::CheckPointInfo*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::CheckPointInfo*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BeamLineInfo(void *p = nullptr);
   static void *newArray_BeamLineInfo(Long_t size, void *p);
   static void delete_BeamLineInfo(void *p);
   static void deleteArray_BeamLineInfo(void *p);
   static void destruct_BeamLineInfo(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BeamLineInfo*)
   {
      ::BeamLineInfo *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BeamLineInfo >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BeamLineInfo", ::BeamLineInfo::Class_Version(), "BeamLineInfo.h", 18,
                  typeid(::BeamLineInfo), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BeamLineInfo::Dictionary, isa_proxy, 4,
                  sizeof(::BeamLineInfo) );
      instance.SetNew(&new_BeamLineInfo);
      instance.SetNewArray(&newArray_BeamLineInfo);
      instance.SetDelete(&delete_BeamLineInfo);
      instance.SetDeleteArray(&deleteArray_BeamLineInfo);
      instance.SetDestructor(&destruct_BeamLineInfo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BeamLineInfo*)
   {
      return GenerateInitInstanceLocal(static_cast<::BeamLineInfo*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::BeamLineInfo*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_MCInfo(void *p = nullptr);
   static void *newArray_MCInfo(Long_t size, void *p);
   static void delete_MCInfo(void *p);
   static void deleteArray_MCInfo(void *p);
   static void destruct_MCInfo(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::MCInfo*)
   {
      ::MCInfo *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::MCInfo >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("MCInfo", ::MCInfo::Class_Version(), "MCInfo.h", 21,
                  typeid(::MCInfo), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::MCInfo::Dictionary, isa_proxy, 4,
                  sizeof(::MCInfo) );
      instance.SetNew(&new_MCInfo);
      instance.SetNewArray(&newArray_MCInfo);
      instance.SetDelete(&delete_MCInfo);
      instance.SetDeleteArray(&deleteArray_MCInfo);
      instance.SetDestructor(&destruct_MCInfo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::MCInfo*)
   {
      return GenerateInitInstanceLocal(static_cast<::MCInfo*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::MCInfo*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RecoInfo(void *p = nullptr);
   static void *newArray_RecoInfo(Long_t size, void *p);
   static void delete_RecoInfo(void *p);
   static void deleteArray_RecoInfo(void *p);
   static void destruct_RecoInfo(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RecoInfo*)
   {
      ::RecoInfo *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RecoInfo >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RecoInfo", ::RecoInfo::Class_Version(), "RecoInfo.h", 18,
                  typeid(::RecoInfo), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RecoInfo::Dictionary, isa_proxy, 4,
                  sizeof(::RecoInfo) );
      instance.SetNew(&new_RecoInfo);
      instance.SetNewArray(&newArray_RecoInfo);
      instance.SetDelete(&delete_RecoInfo);
      instance.SetDeleteArray(&deleteArray_RecoInfo);
      instance.SetDestructor(&destruct_RecoInfo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RecoInfo*)
   {
      return GenerateInitInstanceLocal(static_cast<::RecoInfo*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RecoInfo*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_NA62AnalysiscLcLCorecLcLAnalyzerIdentifier(void *p = nullptr);
   static void *newArray_NA62AnalysiscLcLCorecLcLAnalyzerIdentifier(Long_t size, void *p);
   static void delete_NA62AnalysiscLcLCorecLcLAnalyzerIdentifier(void *p);
   static void deleteArray_NA62AnalysiscLcLCorecLcLAnalyzerIdentifier(void *p);
   static void destruct_NA62AnalysiscLcLCorecLcLAnalyzerIdentifier(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::NA62Analysis::Core::AnalyzerIdentifier*)
   {
      ::NA62Analysis::Core::AnalyzerIdentifier *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::NA62Analysis::Core::AnalyzerIdentifier >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("NA62Analysis::Core::AnalyzerIdentifier", ::NA62Analysis::Core::AnalyzerIdentifier::Class_Version(), "NA62Analysis__Core__AnalyzerIdentifier.h", 22,
                  typeid(::NA62Analysis::Core::AnalyzerIdentifier), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::NA62Analysis::Core::AnalyzerIdentifier::Dictionary, isa_proxy, 4,
                  sizeof(::NA62Analysis::Core::AnalyzerIdentifier) );
      instance.SetNew(&new_NA62AnalysiscLcLCorecLcLAnalyzerIdentifier);
      instance.SetNewArray(&newArray_NA62AnalysiscLcLCorecLcLAnalyzerIdentifier);
      instance.SetDelete(&delete_NA62AnalysiscLcLCorecLcLAnalyzerIdentifier);
      instance.SetDeleteArray(&deleteArray_NA62AnalysiscLcLCorecLcLAnalyzerIdentifier);
      instance.SetDestructor(&destruct_NA62AnalysiscLcLCorecLcLAnalyzerIdentifier);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::NA62Analysis::Core::AnalyzerIdentifier*)
   {
      return GenerateInitInstanceLocal(static_cast<::NA62Analysis::Core::AnalyzerIdentifier*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::NA62Analysis::Core::AnalyzerIdentifier*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_AnalysisInfo(void *p = nullptr);
   static void *newArray_AnalysisInfo(Long_t size, void *p);
   static void delete_AnalysisInfo(void *p);
   static void deleteArray_AnalysisInfo(void *p);
   static void destruct_AnalysisInfo(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::AnalysisInfo*)
   {
      ::AnalysisInfo *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::AnalysisInfo >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("AnalysisInfo", ::AnalysisInfo::Class_Version(), "AnalysisInfo.h", 19,
                  typeid(::AnalysisInfo), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::AnalysisInfo::Dictionary, isa_proxy, 4,
                  sizeof(::AnalysisInfo) );
      instance.SetNew(&new_AnalysisInfo);
      instance.SetNewArray(&newArray_AnalysisInfo);
      instance.SetDelete(&delete_AnalysisInfo);
      instance.SetDeleteArray(&deleteArray_AnalysisInfo);
      instance.SetDestructor(&destruct_AnalysisInfo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::AnalysisInfo*)
   {
      return GenerateInitInstanceLocal(static_cast<::AnalysisInfo*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::AnalysisInfo*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_Stream(void *p = nullptr);
   static void *newArray_Stream(Long_t size, void *p);
   static void delete_Stream(void *p);
   static void deleteArray_Stream(void *p);
   static void destruct_Stream(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::Stream*)
   {
      ::Stream *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::Stream >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("Stream", ::Stream::Class_Version(), "Stream.h", 18,
                  typeid(::Stream), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::Stream::Dictionary, isa_proxy, 4,
                  sizeof(::Stream) );
      instance.SetNew(&new_Stream);
      instance.SetNewArray(&newArray_Stream);
      instance.SetDelete(&delete_Stream);
      instance.SetDeleteArray(&deleteArray_Stream);
      instance.SetDestructor(&destruct_Stream);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::Stream*)
   {
      return GenerateInitInstanceLocal(static_cast<::Stream*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::Stream*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_EventInfo(void *p = nullptr);
   static void *newArray_EventInfo(Long_t size, void *p);
   static void delete_EventInfo(void *p);
   static void deleteArray_EventInfo(void *p);
   static void destruct_EventInfo(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EventInfo*)
   {
      ::EventInfo *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EventInfo >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EventInfo", ::EventInfo::Class_Version(), "EventInfo.h", 15,
                  typeid(::EventInfo), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EventInfo::Dictionary, isa_proxy, 4,
                  sizeof(::EventInfo) );
      instance.SetNew(&new_EventInfo);
      instance.SetNewArray(&newArray_EventInfo);
      instance.SetDelete(&delete_EventInfo);
      instance.SetDeleteArray(&deleteArray_EventInfo);
      instance.SetDestructor(&destruct_EventInfo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EventInfo*)
   {
      return GenerateInitInstanceLocal(static_cast<::EventInfo*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EventInfo*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_UpstreamTrack(void *p = nullptr);
   static void *newArray_UpstreamTrack(Long_t size, void *p);
   static void delete_UpstreamTrack(void *p);
   static void deleteArray_UpstreamTrack(void *p);
   static void destruct_UpstreamTrack(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::UpstreamTrack*)
   {
      ::UpstreamTrack *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::UpstreamTrack >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("UpstreamTrack", ::UpstreamTrack::Class_Version(), "UpstreamTrack.h", 16,
                  typeid(::UpstreamTrack), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::UpstreamTrack::Dictionary, isa_proxy, 4,
                  sizeof(::UpstreamTrack) );
      instance.SetNew(&new_UpstreamTrack);
      instance.SetNewArray(&newArray_UpstreamTrack);
      instance.SetDelete(&delete_UpstreamTrack);
      instance.SetDeleteArray(&deleteArray_UpstreamTrack);
      instance.SetDestructor(&destruct_UpstreamTrack);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::UpstreamTrack*)
   {
      return GenerateInitInstanceLocal(static_cast<::UpstreamTrack*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::UpstreamTrack*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_ChParticleCandidate(void *p = nullptr);
   static void *newArray_ChParticleCandidate(Long_t size, void *p);
   static void delete_ChParticleCandidate(void *p);
   static void deleteArray_ChParticleCandidate(void *p);
   static void destruct_ChParticleCandidate(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ChParticleCandidate*)
   {
      ::ChParticleCandidate *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ChParticleCandidate >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("ChParticleCandidate", ::ChParticleCandidate::Class_Version(), "ChParticleCandidate.h", 19,
                  typeid(::ChParticleCandidate), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::ChParticleCandidate::Dictionary, isa_proxy, 4,
                  sizeof(::ChParticleCandidate) );
      instance.SetNew(&new_ChParticleCandidate);
      instance.SetNewArray(&newArray_ChParticleCandidate);
      instance.SetDelete(&delete_ChParticleCandidate);
      instance.SetDeleteArray(&deleteArray_ChParticleCandidate);
      instance.SetDestructor(&destruct_ChParticleCandidate);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ChParticleCandidate*)
   {
      return GenerateInitInstanceLocal(static_cast<::ChParticleCandidate*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ChParticleCandidate*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_NeParticleCandidate(void *p = nullptr);
   static void *newArray_NeParticleCandidate(Long_t size, void *p);
   static void delete_NeParticleCandidate(void *p);
   static void deleteArray_NeParticleCandidate(void *p);
   static void destruct_NeParticleCandidate(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::NeParticleCandidate*)
   {
      ::NeParticleCandidate *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::NeParticleCandidate >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("NeParticleCandidate", ::NeParticleCandidate::Class_Version(), "NeParticleCandidate.h", 16,
                  typeid(::NeParticleCandidate), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::NeParticleCandidate::Dictionary, isa_proxy, 4,
                  sizeof(::NeParticleCandidate) );
      instance.SetNew(&new_NeParticleCandidate);
      instance.SetNewArray(&newArray_NeParticleCandidate);
      instance.SetDelete(&delete_NeParticleCandidate);
      instance.SetDeleteArray(&deleteArray_NeParticleCandidate);
      instance.SetDestructor(&destruct_NeParticleCandidate);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::NeParticleCandidate*)
   {
      return GenerateInitInstanceLocal(static_cast<::NeParticleCandidate*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::NeParticleCandidate*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_EventCandidate(void *p = nullptr);
   static void *newArray_EventCandidate(Long_t size, void *p);
   static void delete_EventCandidate(void *p);
   static void deleteArray_EventCandidate(void *p);
   static void destruct_EventCandidate(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EventCandidate*)
   {
      ::EventCandidate *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EventCandidate >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EventCandidate", ::EventCandidate::Class_Version(), "EventCandidate.h", 20,
                  typeid(::EventCandidate), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EventCandidate::Dictionary, isa_proxy, 4,
                  sizeof(::EventCandidate) );
      instance.SetNew(&new_EventCandidate);
      instance.SetNewArray(&newArray_EventCandidate);
      instance.SetDelete(&delete_EventCandidate);
      instance.SetDeleteArray(&deleteArray_EventCandidate);
      instance.SetDestructor(&destruct_EventCandidate);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EventCandidate*)
   {
      return GenerateInitInstanceLocal(static_cast<::EventCandidate*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EventCandidate*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr CheckPointInfo::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *CheckPointInfo::Class_Name()
{
   return "CheckPointInfo";
}

//______________________________________________________________________________
const char *CheckPointInfo::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CheckPointInfo*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int CheckPointInfo::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CheckPointInfo*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CheckPointInfo::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CheckPointInfo*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CheckPointInfo::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CheckPointInfo*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BeamLineInfo::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BeamLineInfo::Class_Name()
{
   return "BeamLineInfo";
}

//______________________________________________________________________________
const char *BeamLineInfo::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BeamLineInfo*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BeamLineInfo::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BeamLineInfo*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BeamLineInfo::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BeamLineInfo*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BeamLineInfo::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BeamLineInfo*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr MCInfo::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *MCInfo::Class_Name()
{
   return "MCInfo";
}

//______________________________________________________________________________
const char *MCInfo::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MCInfo*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int MCInfo::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MCInfo*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MCInfo::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MCInfo*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MCInfo::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MCInfo*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RecoInfo::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RecoInfo::Class_Name()
{
   return "RecoInfo";
}

//______________________________________________________________________________
const char *RecoInfo::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RecoInfo*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RecoInfo::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RecoInfo*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RecoInfo::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RecoInfo*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RecoInfo::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RecoInfo*)nullptr)->GetClass(); }
   return fgIsA;
}

namespace NA62Analysis {
   namespace Core {
//______________________________________________________________________________
atomic_TClass_ptr AnalyzerIdentifier::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *AnalyzerIdentifier::Class_Name()
{
   return "NA62Analysis::Core::AnalyzerIdentifier";
}

//______________________________________________________________________________
const char *AnalyzerIdentifier::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::NA62Analysis::Core::AnalyzerIdentifier*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int AnalyzerIdentifier::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::NA62Analysis::Core::AnalyzerIdentifier*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *AnalyzerIdentifier::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::NA62Analysis::Core::AnalyzerIdentifier*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *AnalyzerIdentifier::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::NA62Analysis::Core::AnalyzerIdentifier*)nullptr)->GetClass(); }
   return fgIsA;
}

} // namespace NA62Analysis::Core
} // namespace NA62Analysis::Core
//______________________________________________________________________________
atomic_TClass_ptr AnalysisInfo::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *AnalysisInfo::Class_Name()
{
   return "AnalysisInfo";
}

//______________________________________________________________________________
const char *AnalysisInfo::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::AnalysisInfo*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int AnalysisInfo::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::AnalysisInfo*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *AnalysisInfo::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::AnalysisInfo*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *AnalysisInfo::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::AnalysisInfo*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr Stream::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *Stream::Class_Name()
{
   return "Stream";
}

//______________________________________________________________________________
const char *Stream::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Stream*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int Stream::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Stream*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *Stream::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Stream*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *Stream::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Stream*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr EventInfo::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EventInfo::Class_Name()
{
   return "EventInfo";
}

//______________________________________________________________________________
const char *EventInfo::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EventInfo*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EventInfo::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EventInfo*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EventInfo::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EventInfo*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EventInfo::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EventInfo*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr UpstreamTrack::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *UpstreamTrack::Class_Name()
{
   return "UpstreamTrack";
}

//______________________________________________________________________________
const char *UpstreamTrack::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::UpstreamTrack*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int UpstreamTrack::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::UpstreamTrack*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *UpstreamTrack::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::UpstreamTrack*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *UpstreamTrack::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::UpstreamTrack*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr ChParticleCandidate::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *ChParticleCandidate::Class_Name()
{
   return "ChParticleCandidate";
}

//______________________________________________________________________________
const char *ChParticleCandidate::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ChParticleCandidate*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int ChParticleCandidate::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ChParticleCandidate*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *ChParticleCandidate::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ChParticleCandidate*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *ChParticleCandidate::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ChParticleCandidate*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr NeParticleCandidate::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *NeParticleCandidate::Class_Name()
{
   return "NeParticleCandidate";
}

//______________________________________________________________________________
const char *NeParticleCandidate::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::NeParticleCandidate*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int NeParticleCandidate::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::NeParticleCandidate*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *NeParticleCandidate::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::NeParticleCandidate*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *NeParticleCandidate::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::NeParticleCandidate*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr EventCandidate::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EventCandidate::Class_Name()
{
   return "EventCandidate";
}

//______________________________________________________________________________
const char *EventCandidate::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EventCandidate*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EventCandidate::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EventCandidate*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EventCandidate::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EventCandidate*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EventCandidate::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EventCandidate*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void CheckPointInfo::Streamer(TBuffer &R__b)
{
   // Stream an object of class CheckPointInfo.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CheckPointInfo::Class(),this);
   } else {
      R__b.WriteClassBuffer(CheckPointInfo::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CheckPointInfo(void *p) {
      return  p ? new(p) ::CheckPointInfo : new ::CheckPointInfo;
   }
   static void *newArray_CheckPointInfo(Long_t nElements, void *p) {
      return p ? new(p) ::CheckPointInfo[nElements] : new ::CheckPointInfo[nElements];
   }
   // Wrapper around operator delete
   static void delete_CheckPointInfo(void *p) {
      delete (static_cast<::CheckPointInfo*>(p));
   }
   static void deleteArray_CheckPointInfo(void *p) {
      delete [] (static_cast<::CheckPointInfo*>(p));
   }
   static void destruct_CheckPointInfo(void *p) {
      typedef ::CheckPointInfo current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::CheckPointInfo

//______________________________________________________________________________
void BeamLineInfo::Streamer(TBuffer &R__b)
{
   // Stream an object of class BeamLineInfo.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BeamLineInfo::Class(),this);
   } else {
      R__b.WriteClassBuffer(BeamLineInfo::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BeamLineInfo(void *p) {
      return  p ? new(p) ::BeamLineInfo : new ::BeamLineInfo;
   }
   static void *newArray_BeamLineInfo(Long_t nElements, void *p) {
      return p ? new(p) ::BeamLineInfo[nElements] : new ::BeamLineInfo[nElements];
   }
   // Wrapper around operator delete
   static void delete_BeamLineInfo(void *p) {
      delete (static_cast<::BeamLineInfo*>(p));
   }
   static void deleteArray_BeamLineInfo(void *p) {
      delete [] (static_cast<::BeamLineInfo*>(p));
   }
   static void destruct_BeamLineInfo(void *p) {
      typedef ::BeamLineInfo current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::BeamLineInfo

//______________________________________________________________________________
void MCInfo::Streamer(TBuffer &R__b)
{
   // Stream an object of class MCInfo.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(MCInfo::Class(),this);
   } else {
      R__b.WriteClassBuffer(MCInfo::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_MCInfo(void *p) {
      return  p ? new(p) ::MCInfo : new ::MCInfo;
   }
   static void *newArray_MCInfo(Long_t nElements, void *p) {
      return p ? new(p) ::MCInfo[nElements] : new ::MCInfo[nElements];
   }
   // Wrapper around operator delete
   static void delete_MCInfo(void *p) {
      delete (static_cast<::MCInfo*>(p));
   }
   static void deleteArray_MCInfo(void *p) {
      delete [] (static_cast<::MCInfo*>(p));
   }
   static void destruct_MCInfo(void *p) {
      typedef ::MCInfo current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::MCInfo

//______________________________________________________________________________
void RecoInfo::Streamer(TBuffer &R__b)
{
   // Stream an object of class RecoInfo.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RecoInfo::Class(),this);
   } else {
      R__b.WriteClassBuffer(RecoInfo::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RecoInfo(void *p) {
      return  p ? new(p) ::RecoInfo : new ::RecoInfo;
   }
   static void *newArray_RecoInfo(Long_t nElements, void *p) {
      return p ? new(p) ::RecoInfo[nElements] : new ::RecoInfo[nElements];
   }
   // Wrapper around operator delete
   static void delete_RecoInfo(void *p) {
      delete (static_cast<::RecoInfo*>(p));
   }
   static void deleteArray_RecoInfo(void *p) {
      delete [] (static_cast<::RecoInfo*>(p));
   }
   static void destruct_RecoInfo(void *p) {
      typedef ::RecoInfo current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RecoInfo

namespace NA62Analysis {
   namespace Core {
//______________________________________________________________________________
void AnalyzerIdentifier::Streamer(TBuffer &R__b)
{
   // Stream an object of class NA62Analysis::Core::AnalyzerIdentifier.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(NA62Analysis::Core::AnalyzerIdentifier::Class(),this);
   } else {
      R__b.WriteClassBuffer(NA62Analysis::Core::AnalyzerIdentifier::Class(),this);
   }
}

} // namespace NA62Analysis::Core
} // namespace NA62Analysis::Core
namespace ROOT {
   // Wrappers around operator new
   static void *new_NA62AnalysiscLcLCorecLcLAnalyzerIdentifier(void *p) {
      return  p ? new(p) ::NA62Analysis::Core::AnalyzerIdentifier : new ::NA62Analysis::Core::AnalyzerIdentifier;
   }
   static void *newArray_NA62AnalysiscLcLCorecLcLAnalyzerIdentifier(Long_t nElements, void *p) {
      return p ? new(p) ::NA62Analysis::Core::AnalyzerIdentifier[nElements] : new ::NA62Analysis::Core::AnalyzerIdentifier[nElements];
   }
   // Wrapper around operator delete
   static void delete_NA62AnalysiscLcLCorecLcLAnalyzerIdentifier(void *p) {
      delete (static_cast<::NA62Analysis::Core::AnalyzerIdentifier*>(p));
   }
   static void deleteArray_NA62AnalysiscLcLCorecLcLAnalyzerIdentifier(void *p) {
      delete [] (static_cast<::NA62Analysis::Core::AnalyzerIdentifier*>(p));
   }
   static void destruct_NA62AnalysiscLcLCorecLcLAnalyzerIdentifier(void *p) {
      typedef ::NA62Analysis::Core::AnalyzerIdentifier current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::NA62Analysis::Core::AnalyzerIdentifier

//______________________________________________________________________________
void AnalysisInfo::Streamer(TBuffer &R__b)
{
   // Stream an object of class AnalysisInfo.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(AnalysisInfo::Class(),this);
   } else {
      R__b.WriteClassBuffer(AnalysisInfo::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_AnalysisInfo(void *p) {
      return  p ? new(p) ::AnalysisInfo : new ::AnalysisInfo;
   }
   static void *newArray_AnalysisInfo(Long_t nElements, void *p) {
      return p ? new(p) ::AnalysisInfo[nElements] : new ::AnalysisInfo[nElements];
   }
   // Wrapper around operator delete
   static void delete_AnalysisInfo(void *p) {
      delete (static_cast<::AnalysisInfo*>(p));
   }
   static void deleteArray_AnalysisInfo(void *p) {
      delete [] (static_cast<::AnalysisInfo*>(p));
   }
   static void destruct_AnalysisInfo(void *p) {
      typedef ::AnalysisInfo current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::AnalysisInfo

//______________________________________________________________________________
void Stream::Streamer(TBuffer &R__b)
{
   // Stream an object of class Stream.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(Stream::Class(),this);
   } else {
      R__b.WriteClassBuffer(Stream::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_Stream(void *p) {
      return  p ? new(p) ::Stream : new ::Stream;
   }
   static void *newArray_Stream(Long_t nElements, void *p) {
      return p ? new(p) ::Stream[nElements] : new ::Stream[nElements];
   }
   // Wrapper around operator delete
   static void delete_Stream(void *p) {
      delete (static_cast<::Stream*>(p));
   }
   static void deleteArray_Stream(void *p) {
      delete [] (static_cast<::Stream*>(p));
   }
   static void destruct_Stream(void *p) {
      typedef ::Stream current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::Stream

//______________________________________________________________________________
void EventInfo::Streamer(TBuffer &R__b)
{
   // Stream an object of class EventInfo.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(EventInfo::Class(),this);
   } else {
      R__b.WriteClassBuffer(EventInfo::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_EventInfo(void *p) {
      return  p ? new(p) ::EventInfo : new ::EventInfo;
   }
   static void *newArray_EventInfo(Long_t nElements, void *p) {
      return p ? new(p) ::EventInfo[nElements] : new ::EventInfo[nElements];
   }
   // Wrapper around operator delete
   static void delete_EventInfo(void *p) {
      delete (static_cast<::EventInfo*>(p));
   }
   static void deleteArray_EventInfo(void *p) {
      delete [] (static_cast<::EventInfo*>(p));
   }
   static void destruct_EventInfo(void *p) {
      typedef ::EventInfo current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::EventInfo

//______________________________________________________________________________
void UpstreamTrack::Streamer(TBuffer &R__b)
{
   // Stream an object of class UpstreamTrack.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(UpstreamTrack::Class(),this);
   } else {
      R__b.WriteClassBuffer(UpstreamTrack::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_UpstreamTrack(void *p) {
      return  p ? new(p) ::UpstreamTrack : new ::UpstreamTrack;
   }
   static void *newArray_UpstreamTrack(Long_t nElements, void *p) {
      return p ? new(p) ::UpstreamTrack[nElements] : new ::UpstreamTrack[nElements];
   }
   // Wrapper around operator delete
   static void delete_UpstreamTrack(void *p) {
      delete (static_cast<::UpstreamTrack*>(p));
   }
   static void deleteArray_UpstreamTrack(void *p) {
      delete [] (static_cast<::UpstreamTrack*>(p));
   }
   static void destruct_UpstreamTrack(void *p) {
      typedef ::UpstreamTrack current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::UpstreamTrack

//______________________________________________________________________________
void ChParticleCandidate::Streamer(TBuffer &R__b)
{
   // Stream an object of class ChParticleCandidate.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(ChParticleCandidate::Class(),this);
   } else {
      R__b.WriteClassBuffer(ChParticleCandidate::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_ChParticleCandidate(void *p) {
      return  p ? new(p) ::ChParticleCandidate : new ::ChParticleCandidate;
   }
   static void *newArray_ChParticleCandidate(Long_t nElements, void *p) {
      return p ? new(p) ::ChParticleCandidate[nElements] : new ::ChParticleCandidate[nElements];
   }
   // Wrapper around operator delete
   static void delete_ChParticleCandidate(void *p) {
      delete (static_cast<::ChParticleCandidate*>(p));
   }
   static void deleteArray_ChParticleCandidate(void *p) {
      delete [] (static_cast<::ChParticleCandidate*>(p));
   }
   static void destruct_ChParticleCandidate(void *p) {
      typedef ::ChParticleCandidate current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ChParticleCandidate

//______________________________________________________________________________
void NeParticleCandidate::Streamer(TBuffer &R__b)
{
   // Stream an object of class NeParticleCandidate.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(NeParticleCandidate::Class(),this);
   } else {
      R__b.WriteClassBuffer(NeParticleCandidate::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_NeParticleCandidate(void *p) {
      return  p ? new(p) ::NeParticleCandidate : new ::NeParticleCandidate;
   }
   static void *newArray_NeParticleCandidate(Long_t nElements, void *p) {
      return p ? new(p) ::NeParticleCandidate[nElements] : new ::NeParticleCandidate[nElements];
   }
   // Wrapper around operator delete
   static void delete_NeParticleCandidate(void *p) {
      delete (static_cast<::NeParticleCandidate*>(p));
   }
   static void deleteArray_NeParticleCandidate(void *p) {
      delete [] (static_cast<::NeParticleCandidate*>(p));
   }
   static void destruct_NeParticleCandidate(void *p) {
      typedef ::NeParticleCandidate current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::NeParticleCandidate

//______________________________________________________________________________
void EventCandidate::Streamer(TBuffer &R__b)
{
   // Stream an object of class EventCandidate.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(EventCandidate::Class(),this);
   } else {
      R__b.WriteClassBuffer(EventCandidate::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_EventCandidate(void *p) {
      return  p ? new(p) ::EventCandidate : new ::EventCandidate;
   }
   static void *newArray_EventCandidate(Long_t nElements, void *p) {
      return p ? new(p) ::EventCandidate[nElements] : new ::EventCandidate[nElements];
   }
   // Wrapper around operator delete
   static void delete_EventCandidate(void *p) {
      delete (static_cast<::EventCandidate*>(p));
   }
   static void deleteArray_EventCandidate(void *p) {
      delete [] (static_cast<::EventCandidate*>(p));
   }
   static void destruct_EventCandidate(void *p) {
      typedef ::EventCandidate current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::EventCandidate

namespace ROOT {
   static TClass *vectorlEunsignedsPintgR_Dictionary();
   static void vectorlEunsignedsPintgR_TClassManip(TClass*);
   static void *new_vectorlEunsignedsPintgR(void *p = nullptr);
   static void *newArray_vectorlEunsignedsPintgR(Long_t size, void *p);
   static void delete_vectorlEunsignedsPintgR(void *p);
   static void deleteArray_vectorlEunsignedsPintgR(void *p);
   static void destruct_vectorlEunsignedsPintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<unsigned int>*)
   {
      vector<unsigned int> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<unsigned int>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<unsigned int>", -2, "vector", 428,
                  typeid(vector<unsigned int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEunsignedsPintgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<unsigned int>) );
      instance.SetNew(&new_vectorlEunsignedsPintgR);
      instance.SetNewArray(&newArray_vectorlEunsignedsPintgR);
      instance.SetDelete(&delete_vectorlEunsignedsPintgR);
      instance.SetDeleteArray(&deleteArray_vectorlEunsignedsPintgR);
      instance.SetDestructor(&destruct_vectorlEunsignedsPintgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<unsigned int> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<unsigned int>","std::vector<unsigned int, std::allocator<unsigned int> >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<unsigned int>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEunsignedsPintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<unsigned int>*>(nullptr))->GetClass();
      vectorlEunsignedsPintgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEunsignedsPintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEunsignedsPintgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<unsigned int> : new vector<unsigned int>;
   }
   static void *newArray_vectorlEunsignedsPintgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<unsigned int>[nElements] : new vector<unsigned int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEunsignedsPintgR(void *p) {
      delete (static_cast<vector<unsigned int>*>(p));
   }
   static void deleteArray_vectorlEunsignedsPintgR(void *p) {
      delete [] (static_cast<vector<unsigned int>*>(p));
   }
   static void destruct_vectorlEunsignedsPintgR(void *p) {
      typedef vector<unsigned int> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<unsigned int>

namespace ROOT {
   static TClass *vectorlEintgR_Dictionary();
   static void vectorlEintgR_TClassManip(TClass*);
   static void *new_vectorlEintgR(void *p = nullptr);
   static void *newArray_vectorlEintgR(Long_t size, void *p);
   static void delete_vectorlEintgR(void *p);
   static void deleteArray_vectorlEintgR(void *p);
   static void destruct_vectorlEintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<int>*)
   {
      vector<int> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<int>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<int>", -2, "vector", 428,
                  typeid(vector<int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEintgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<int>) );
      instance.SetNew(&new_vectorlEintgR);
      instance.SetNewArray(&newArray_vectorlEintgR);
      instance.SetDelete(&delete_vectorlEintgR);
      instance.SetDeleteArray(&deleteArray_vectorlEintgR);
      instance.SetDestructor(&destruct_vectorlEintgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<int> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<int>","std::vector<int, std::allocator<int> >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<int>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<int>*>(nullptr))->GetClass();
      vectorlEintgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEintgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<int> : new vector<int>;
   }
   static void *newArray_vectorlEintgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<int>[nElements] : new vector<int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEintgR(void *p) {
      delete (static_cast<vector<int>*>(p));
   }
   static void deleteArray_vectorlEintgR(void *p) {
      delete [] (static_cast<vector<int>*>(p));
   }
   static void destruct_vectorlEintgR(void *p) {
      typedef vector<int> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<int>

namespace ROOT {
   static TClass *vectorlEdoublegR_Dictionary();
   static void vectorlEdoublegR_TClassManip(TClass*);
   static void *new_vectorlEdoublegR(void *p = nullptr);
   static void *newArray_vectorlEdoublegR(Long_t size, void *p);
   static void delete_vectorlEdoublegR(void *p);
   static void deleteArray_vectorlEdoublegR(void *p);
   static void destruct_vectorlEdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<double>*)
   {
      vector<double> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<double>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<double>", -2, "vector", 428,
                  typeid(vector<double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEdoublegR_Dictionary, isa_proxy, 0,
                  sizeof(vector<double>) );
      instance.SetNew(&new_vectorlEdoublegR);
      instance.SetNewArray(&newArray_vectorlEdoublegR);
      instance.SetDelete(&delete_vectorlEdoublegR);
      instance.SetDeleteArray(&deleteArray_vectorlEdoublegR);
      instance.SetDestructor(&destruct_vectorlEdoublegR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<double> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<double>","std::vector<double, std::allocator<double> >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<double>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<double>*>(nullptr))->GetClass();
      vectorlEdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEdoublegR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<double> : new vector<double>;
   }
   static void *newArray_vectorlEdoublegR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<double>[nElements] : new vector<double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEdoublegR(void *p) {
      delete (static_cast<vector<double>*>(p));
   }
   static void deleteArray_vectorlEdoublegR(void *p) {
      delete [] (static_cast<vector<double>*>(p));
   }
   static void destruct_vectorlEdoublegR(void *p) {
      typedef vector<double> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<double>

namespace ROOT {
   static TClass *vectorlEUpstreamTrackmUgR_Dictionary();
   static void vectorlEUpstreamTrackmUgR_TClassManip(TClass*);
   static void *new_vectorlEUpstreamTrackmUgR(void *p = nullptr);
   static void *newArray_vectorlEUpstreamTrackmUgR(Long_t size, void *p);
   static void delete_vectorlEUpstreamTrackmUgR(void *p);
   static void deleteArray_vectorlEUpstreamTrackmUgR(void *p);
   static void destruct_vectorlEUpstreamTrackmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<UpstreamTrack*>*)
   {
      vector<UpstreamTrack*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<UpstreamTrack*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<UpstreamTrack*>", -2, "vector", 428,
                  typeid(vector<UpstreamTrack*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEUpstreamTrackmUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<UpstreamTrack*>) );
      instance.SetNew(&new_vectorlEUpstreamTrackmUgR);
      instance.SetNewArray(&newArray_vectorlEUpstreamTrackmUgR);
      instance.SetDelete(&delete_vectorlEUpstreamTrackmUgR);
      instance.SetDeleteArray(&deleteArray_vectorlEUpstreamTrackmUgR);
      instance.SetDestructor(&destruct_vectorlEUpstreamTrackmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<UpstreamTrack*> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<UpstreamTrack*>","std::vector<UpstreamTrack*, std::allocator<UpstreamTrack*> >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<UpstreamTrack*>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEUpstreamTrackmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<UpstreamTrack*>*>(nullptr))->GetClass();
      vectorlEUpstreamTrackmUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEUpstreamTrackmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEUpstreamTrackmUgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<UpstreamTrack*> : new vector<UpstreamTrack*>;
   }
   static void *newArray_vectorlEUpstreamTrackmUgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<UpstreamTrack*>[nElements] : new vector<UpstreamTrack*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEUpstreamTrackmUgR(void *p) {
      delete (static_cast<vector<UpstreamTrack*>*>(p));
   }
   static void deleteArray_vectorlEUpstreamTrackmUgR(void *p) {
      delete [] (static_cast<vector<UpstreamTrack*>*>(p));
   }
   static void destruct_vectorlEUpstreamTrackmUgR(void *p) {
      typedef vector<UpstreamTrack*> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<UpstreamTrack*>

namespace ROOT {
   static TClass *vectorlETStringgR_Dictionary();
   static void vectorlETStringgR_TClassManip(TClass*);
   static void *new_vectorlETStringgR(void *p = nullptr);
   static void *newArray_vectorlETStringgR(Long_t size, void *p);
   static void delete_vectorlETStringgR(void *p);
   static void deleteArray_vectorlETStringgR(void *p);
   static void destruct_vectorlETStringgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<TString>*)
   {
      vector<TString> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<TString>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<TString>", -2, "vector", 428,
                  typeid(vector<TString>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlETStringgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<TString>) );
      instance.SetNew(&new_vectorlETStringgR);
      instance.SetNewArray(&newArray_vectorlETStringgR);
      instance.SetDelete(&delete_vectorlETStringgR);
      instance.SetDeleteArray(&deleteArray_vectorlETStringgR);
      instance.SetDestructor(&destruct_vectorlETStringgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<TString> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<TString>","std::vector<TString, std::allocator<TString> >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<TString>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlETStringgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<TString>*>(nullptr))->GetClass();
      vectorlETStringgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlETStringgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlETStringgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<TString> : new vector<TString>;
   }
   static void *newArray_vectorlETStringgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<TString>[nElements] : new vector<TString>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlETStringgR(void *p) {
      delete (static_cast<vector<TString>*>(p));
   }
   static void deleteArray_vectorlETStringgR(void *p) {
      delete [] (static_cast<vector<TString>*>(p));
   }
   static void destruct_vectorlETStringgR(void *p) {
      typedef vector<TString> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<TString>

namespace ROOT {
   static TClass *vectorlENeParticleCandidatemUgR_Dictionary();
   static void vectorlENeParticleCandidatemUgR_TClassManip(TClass*);
   static void *new_vectorlENeParticleCandidatemUgR(void *p = nullptr);
   static void *newArray_vectorlENeParticleCandidatemUgR(Long_t size, void *p);
   static void delete_vectorlENeParticleCandidatemUgR(void *p);
   static void deleteArray_vectorlENeParticleCandidatemUgR(void *p);
   static void destruct_vectorlENeParticleCandidatemUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<NeParticleCandidate*>*)
   {
      vector<NeParticleCandidate*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<NeParticleCandidate*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<NeParticleCandidate*>", -2, "vector", 428,
                  typeid(vector<NeParticleCandidate*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlENeParticleCandidatemUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<NeParticleCandidate*>) );
      instance.SetNew(&new_vectorlENeParticleCandidatemUgR);
      instance.SetNewArray(&newArray_vectorlENeParticleCandidatemUgR);
      instance.SetDelete(&delete_vectorlENeParticleCandidatemUgR);
      instance.SetDeleteArray(&deleteArray_vectorlENeParticleCandidatemUgR);
      instance.SetDestructor(&destruct_vectorlENeParticleCandidatemUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<NeParticleCandidate*> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<NeParticleCandidate*>","std::vector<NeParticleCandidate*, std::allocator<NeParticleCandidate*> >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<NeParticleCandidate*>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlENeParticleCandidatemUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<NeParticleCandidate*>*>(nullptr))->GetClass();
      vectorlENeParticleCandidatemUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlENeParticleCandidatemUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlENeParticleCandidatemUgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<NeParticleCandidate*> : new vector<NeParticleCandidate*>;
   }
   static void *newArray_vectorlENeParticleCandidatemUgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<NeParticleCandidate*>[nElements] : new vector<NeParticleCandidate*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlENeParticleCandidatemUgR(void *p) {
      delete (static_cast<vector<NeParticleCandidate*>*>(p));
   }
   static void deleteArray_vectorlENeParticleCandidatemUgR(void *p) {
      delete [] (static_cast<vector<NeParticleCandidate*>*>(p));
   }
   static void destruct_vectorlENeParticleCandidatemUgR(void *p) {
      typedef vector<NeParticleCandidate*> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<NeParticleCandidate*>

namespace ROOT {
   static TClass *vectorlENA62AnalysiscLcLCorecLcLAnalyzerIdentifiergR_Dictionary();
   static void vectorlENA62AnalysiscLcLCorecLcLAnalyzerIdentifiergR_TClassManip(TClass*);
   static void *new_vectorlENA62AnalysiscLcLCorecLcLAnalyzerIdentifiergR(void *p = nullptr);
   static void *newArray_vectorlENA62AnalysiscLcLCorecLcLAnalyzerIdentifiergR(Long_t size, void *p);
   static void delete_vectorlENA62AnalysiscLcLCorecLcLAnalyzerIdentifiergR(void *p);
   static void deleteArray_vectorlENA62AnalysiscLcLCorecLcLAnalyzerIdentifiergR(void *p);
   static void destruct_vectorlENA62AnalysiscLcLCorecLcLAnalyzerIdentifiergR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<NA62Analysis::Core::AnalyzerIdentifier>*)
   {
      vector<NA62Analysis::Core::AnalyzerIdentifier> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<NA62Analysis::Core::AnalyzerIdentifier>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<NA62Analysis::Core::AnalyzerIdentifier>", -2, "vector", 428,
                  typeid(vector<NA62Analysis::Core::AnalyzerIdentifier>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlENA62AnalysiscLcLCorecLcLAnalyzerIdentifiergR_Dictionary, isa_proxy, 0,
                  sizeof(vector<NA62Analysis::Core::AnalyzerIdentifier>) );
      instance.SetNew(&new_vectorlENA62AnalysiscLcLCorecLcLAnalyzerIdentifiergR);
      instance.SetNewArray(&newArray_vectorlENA62AnalysiscLcLCorecLcLAnalyzerIdentifiergR);
      instance.SetDelete(&delete_vectorlENA62AnalysiscLcLCorecLcLAnalyzerIdentifiergR);
      instance.SetDeleteArray(&deleteArray_vectorlENA62AnalysiscLcLCorecLcLAnalyzerIdentifiergR);
      instance.SetDestructor(&destruct_vectorlENA62AnalysiscLcLCorecLcLAnalyzerIdentifiergR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<NA62Analysis::Core::AnalyzerIdentifier> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<NA62Analysis::Core::AnalyzerIdentifier>","std::vector<NA62Analysis::Core::AnalyzerIdentifier, std::allocator<NA62Analysis::Core::AnalyzerIdentifier> >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<NA62Analysis::Core::AnalyzerIdentifier>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlENA62AnalysiscLcLCorecLcLAnalyzerIdentifiergR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<NA62Analysis::Core::AnalyzerIdentifier>*>(nullptr))->GetClass();
      vectorlENA62AnalysiscLcLCorecLcLAnalyzerIdentifiergR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlENA62AnalysiscLcLCorecLcLAnalyzerIdentifiergR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlENA62AnalysiscLcLCorecLcLAnalyzerIdentifiergR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<NA62Analysis::Core::AnalyzerIdentifier> : new vector<NA62Analysis::Core::AnalyzerIdentifier>;
   }
   static void *newArray_vectorlENA62AnalysiscLcLCorecLcLAnalyzerIdentifiergR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<NA62Analysis::Core::AnalyzerIdentifier>[nElements] : new vector<NA62Analysis::Core::AnalyzerIdentifier>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlENA62AnalysiscLcLCorecLcLAnalyzerIdentifiergR(void *p) {
      delete (static_cast<vector<NA62Analysis::Core::AnalyzerIdentifier>*>(p));
   }
   static void deleteArray_vectorlENA62AnalysiscLcLCorecLcLAnalyzerIdentifiergR(void *p) {
      delete [] (static_cast<vector<NA62Analysis::Core::AnalyzerIdentifier>*>(p));
   }
   static void destruct_vectorlENA62AnalysiscLcLCorecLcLAnalyzerIdentifiergR(void *p) {
      typedef vector<NA62Analysis::Core::AnalyzerIdentifier> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<NA62Analysis::Core::AnalyzerIdentifier>

namespace ROOT {
   static TClass *vectorlECheckPointInfogR_Dictionary();
   static void vectorlECheckPointInfogR_TClassManip(TClass*);
   static void *new_vectorlECheckPointInfogR(void *p = nullptr);
   static void *newArray_vectorlECheckPointInfogR(Long_t size, void *p);
   static void delete_vectorlECheckPointInfogR(void *p);
   static void deleteArray_vectorlECheckPointInfogR(void *p);
   static void destruct_vectorlECheckPointInfogR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<CheckPointInfo>*)
   {
      vector<CheckPointInfo> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<CheckPointInfo>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<CheckPointInfo>", -2, "vector", 428,
                  typeid(vector<CheckPointInfo>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlECheckPointInfogR_Dictionary, isa_proxy, 0,
                  sizeof(vector<CheckPointInfo>) );
      instance.SetNew(&new_vectorlECheckPointInfogR);
      instance.SetNewArray(&newArray_vectorlECheckPointInfogR);
      instance.SetDelete(&delete_vectorlECheckPointInfogR);
      instance.SetDeleteArray(&deleteArray_vectorlECheckPointInfogR);
      instance.SetDestructor(&destruct_vectorlECheckPointInfogR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<CheckPointInfo> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<CheckPointInfo>","std::vector<CheckPointInfo, std::allocator<CheckPointInfo> >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<CheckPointInfo>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlECheckPointInfogR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<CheckPointInfo>*>(nullptr))->GetClass();
      vectorlECheckPointInfogR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlECheckPointInfogR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlECheckPointInfogR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<CheckPointInfo> : new vector<CheckPointInfo>;
   }
   static void *newArray_vectorlECheckPointInfogR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<CheckPointInfo>[nElements] : new vector<CheckPointInfo>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlECheckPointInfogR(void *p) {
      delete (static_cast<vector<CheckPointInfo>*>(p));
   }
   static void deleteArray_vectorlECheckPointInfogR(void *p) {
      delete [] (static_cast<vector<CheckPointInfo>*>(p));
   }
   static void destruct_vectorlECheckPointInfogR(void *p) {
      typedef vector<CheckPointInfo> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<CheckPointInfo>

namespace ROOT {
   static TClass *vectorlEChParticleCandidatemUgR_Dictionary();
   static void vectorlEChParticleCandidatemUgR_TClassManip(TClass*);
   static void *new_vectorlEChParticleCandidatemUgR(void *p = nullptr);
   static void *newArray_vectorlEChParticleCandidatemUgR(Long_t size, void *p);
   static void delete_vectorlEChParticleCandidatemUgR(void *p);
   static void deleteArray_vectorlEChParticleCandidatemUgR(void *p);
   static void destruct_vectorlEChParticleCandidatemUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<ChParticleCandidate*>*)
   {
      vector<ChParticleCandidate*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<ChParticleCandidate*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<ChParticleCandidate*>", -2, "vector", 428,
                  typeid(vector<ChParticleCandidate*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEChParticleCandidatemUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<ChParticleCandidate*>) );
      instance.SetNew(&new_vectorlEChParticleCandidatemUgR);
      instance.SetNewArray(&newArray_vectorlEChParticleCandidatemUgR);
      instance.SetDelete(&delete_vectorlEChParticleCandidatemUgR);
      instance.SetDeleteArray(&deleteArray_vectorlEChParticleCandidatemUgR);
      instance.SetDestructor(&destruct_vectorlEChParticleCandidatemUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<ChParticleCandidate*> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<ChParticleCandidate*>","std::vector<ChParticleCandidate*, std::allocator<ChParticleCandidate*> >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<ChParticleCandidate*>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEChParticleCandidatemUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<ChParticleCandidate*>*>(nullptr))->GetClass();
      vectorlEChParticleCandidatemUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEChParticleCandidatemUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEChParticleCandidatemUgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<ChParticleCandidate*> : new vector<ChParticleCandidate*>;
   }
   static void *newArray_vectorlEChParticleCandidatemUgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<ChParticleCandidate*>[nElements] : new vector<ChParticleCandidate*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEChParticleCandidatemUgR(void *p) {
      delete (static_cast<vector<ChParticleCandidate*>*>(p));
   }
   static void deleteArray_vectorlEChParticleCandidatemUgR(void *p) {
      delete [] (static_cast<vector<ChParticleCandidate*>*>(p));
   }
   static void destruct_vectorlEChParticleCandidatemUgR(void *p) {
      typedef vector<ChParticleCandidate*> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<ChParticleCandidate*>

namespace ROOT {
   static TClass *vectorlEBeamLineInfogR_Dictionary();
   static void vectorlEBeamLineInfogR_TClassManip(TClass*);
   static void *new_vectorlEBeamLineInfogR(void *p = nullptr);
   static void *newArray_vectorlEBeamLineInfogR(Long_t size, void *p);
   static void delete_vectorlEBeamLineInfogR(void *p);
   static void deleteArray_vectorlEBeamLineInfogR(void *p);
   static void destruct_vectorlEBeamLineInfogR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<BeamLineInfo>*)
   {
      vector<BeamLineInfo> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<BeamLineInfo>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<BeamLineInfo>", -2, "vector", 428,
                  typeid(vector<BeamLineInfo>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEBeamLineInfogR_Dictionary, isa_proxy, 0,
                  sizeof(vector<BeamLineInfo>) );
      instance.SetNew(&new_vectorlEBeamLineInfogR);
      instance.SetNewArray(&newArray_vectorlEBeamLineInfogR);
      instance.SetDelete(&delete_vectorlEBeamLineInfogR);
      instance.SetDeleteArray(&deleteArray_vectorlEBeamLineInfogR);
      instance.SetDestructor(&destruct_vectorlEBeamLineInfogR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<BeamLineInfo> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<BeamLineInfo>","std::vector<BeamLineInfo, std::allocator<BeamLineInfo> >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<BeamLineInfo>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEBeamLineInfogR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<BeamLineInfo>*>(nullptr))->GetClass();
      vectorlEBeamLineInfogR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEBeamLineInfogR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEBeamLineInfogR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<BeamLineInfo> : new vector<BeamLineInfo>;
   }
   static void *newArray_vectorlEBeamLineInfogR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<BeamLineInfo>[nElements] : new vector<BeamLineInfo>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEBeamLineInfogR(void *p) {
      delete (static_cast<vector<BeamLineInfo>*>(p));
   }
   static void deleteArray_vectorlEBeamLineInfogR(void *p) {
      delete [] (static_cast<vector<BeamLineInfo>*>(p));
   }
   static void destruct_vectorlEBeamLineInfogR(void *p) {
      typedef vector<BeamLineInfo> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<BeamLineInfo>

namespace {
  void TriggerDictionaryInitialization_NA62LibProjectDict_Impl() {
    static const char* headers[] = {
"NA62LibProjectHeaders.h",
nullptr
    };
    static const char* includePaths[] = {
"/opt/root/include",
"/opt/root/etc/",
"/opt/root/etc//cling",
"/opt/root/etc//cling/plugins/include",
"/opt/root/include/",
"/opt/root/include",
"/opt/root/include/",
"/usr/src/app/NA62Lib/",
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "NA62LibProjectDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class __attribute__((annotate("$clingAutoload$CheckPointInfo.h")))  __attribute__((annotate("$clingAutoload$NA62LibProjectHeaders.h")))  CheckPointInfo;
class __attribute__((annotate("$clingAutoload$BeamLineInfo.h")))  __attribute__((annotate("$clingAutoload$NA62LibProjectHeaders.h")))  BeamLineInfo;
class __attribute__((annotate("$clingAutoload$MCInfo.h")))  __attribute__((annotate("$clingAutoload$NA62LibProjectHeaders.h")))  MCInfo;
class __attribute__((annotate("$clingAutoload$RecoInfo.h")))  __attribute__((annotate("$clingAutoload$NA62LibProjectHeaders.h")))  RecoInfo;
namespace NA62Analysis{namespace Core{class __attribute__((annotate("$clingAutoload$NA62Analysis__Core__AnalyzerIdentifier.h")))  __attribute__((annotate("$clingAutoload$NA62LibProjectHeaders.h")))  AnalyzerIdentifier;}}
class __attribute__((annotate("$clingAutoload$AnalysisInfo.h")))  __attribute__((annotate("$clingAutoload$NA62LibProjectHeaders.h")))  AnalysisInfo;
class __attribute__((annotate("$clingAutoload$Stream.h")))  __attribute__((annotate("$clingAutoload$NA62LibProjectHeaders.h")))  Stream;
class __attribute__((annotate("$clingAutoload$EventInfo.h")))  __attribute__((annotate("$clingAutoload$NA62LibProjectHeaders.h")))  EventInfo;
class __attribute__((annotate("$clingAutoload$UpstreamTrack.h")))  __attribute__((annotate("$clingAutoload$NA62LibProjectHeaders.h")))  UpstreamTrack;
class __attribute__((annotate("$clingAutoload$ChParticleCandidate.h")))  __attribute__((annotate("$clingAutoload$NA62LibProjectHeaders.h")))  ChParticleCandidate;
class __attribute__((annotate("$clingAutoload$NeParticleCandidate.h")))  __attribute__((annotate("$clingAutoload$NA62LibProjectHeaders.h")))  NeParticleCandidate;
class __attribute__((annotate("$clingAutoload$EventCandidate.h")))  __attribute__((annotate("$clingAutoload$NA62LibProjectHeaders.h")))  EventCandidate;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "NA62LibProjectDict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "NA62LibProjectHeaders.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"AnalysisInfo", payloadCode, "@",
"BeamLineInfo", payloadCode, "@",
"ChParticleCandidate", payloadCode, "@",
"CheckPointInfo", payloadCode, "@",
"EventCandidate", payloadCode, "@",
"EventInfo", payloadCode, "@",
"MCInfo", payloadCode, "@",
"NA62Analysis::Core::AnalyzerIdentifier", payloadCode, "@",
"NeParticleCandidate", payloadCode, "@",
"RecoInfo", payloadCode, "@",
"Stream", payloadCode, "@",
"UpstreamTrack", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("NA62LibProjectDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_NA62LibProjectDict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_NA62LibProjectDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_NA62LibProjectDict() {
  TriggerDictionaryInitialization_NA62LibProjectDict_Impl();
}
