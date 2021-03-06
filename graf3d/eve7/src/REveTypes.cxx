#include <ROOT/REveTypes.hxx>

using namespace ROOT::Experimental;
namespace REX = ROOT::Experimental;

/** \class REveException
\ingroup REve
Exception class thrown by Eve classes and macros.
*/

////////////////////////////////////////////////////////////////////////////////

bool REX::operator==(const TString& t, const std::string& s)
{ return (s == t.Data()); }

bool REX::operator==(const std::string&  s, const TString& t)
{ return (s == t.Data()); }

// Exc + ops

REveException REX::operator+(const REveException &s1, const std::string &s2)
{ REveException r(s1); r.append(s2); return r; }

REveException REX::operator+(const REveException &s1, const TString &s2)
{ REveException r(s1); r.append(s2.Data()); return r; }

REveException REX::operator+(const REveException &s1,  const char *s2)
{ REveException r(s1); r.append(s2); return r; }

REveException REX::operator+(const REveException &s1, ElementId_t x)
{ REveException r(s1); r.append(std::to_string(x)); return r; }
