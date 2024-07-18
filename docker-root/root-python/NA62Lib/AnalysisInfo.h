//////////////////////////////////////////////////////////
//   This class has been generated by TFile::MakeProject
//     (Thu Jul 18 20:06:36 2024 by ROOT version 6.32.02)
//      from the StreamerInfo in file outFile.root
//////////////////////////////////////////////////////////


#ifndef AnalysisInfo_h
#define AnalysisInfo_h
class AnalysisInfo;

#include "Rtypes.h"
#include "TObject.h"
#include "Riostream.h"
#include <vector>
#include "NA62Analysis__Core__AnalyzerIdentifier.h"
#include "TString.h"

class AnalysisInfo : public TObject {

public:
// Nested classes declaration.

public:
// Data Members.
   vector<NA62Analysis::Core::AnalyzerIdentifier> fAnalyzerList;    //List of analyzer than ran on these data (NA62Analysis::Core::AnalyzerIdentifier)
   vector<TString>                                fStreamList;      //List of output stream that created these data
   vector<TString>                                fRevisionList;    //List of software revision
   vector<TString>                                fInputFileList;    //List of input files

   AnalysisInfo();
   AnalysisInfo(AnalysisInfo && ) = default;
   AnalysisInfo &operator=(const AnalysisInfo & );
   AnalysisInfo(const AnalysisInfo & );
   virtual ~AnalysisInfo();

   ClassDef(AnalysisInfo,3); // Generated by MakeProject.
};
#endif
