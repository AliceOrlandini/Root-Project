//////////////////////////////////////////////////////////
//   This class has been generated by TFile::MakeProject
//     (Thu Jul 18 20:06:36 2024 by ROOT version 6.32.02)
//      from the StreamerInfo in file outFile.root
//////////////////////////////////////////////////////////


#ifndef Stream_h
#define Stream_h
class Stream;

#include "Rtypes.h"
#include "TObject.h"
#include "MCInfo.h"
#include "RecoInfo.h"
#include "AnalysisInfo.h"

class Stream : public TObject {

public:
// Nested classes declaration.

public:
// Data Members.
   MCInfo      fMCInfo;     //
   RecoInfo    fRecoInfo;    //
   AnalysisInfo fAnalysisInfo;    //

   Stream();
   Stream(Stream && ) = default;
   Stream &operator=(const Stream & );
   Stream(const Stream & );
   virtual ~Stream();

   ClassDef(Stream,2); // Generated by MakeProject.
};
#endif
