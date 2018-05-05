#include <iostream>
using namespace std;
#include "office.h"
#include "desk.h"
class emp{
  public:

  emp(office *o)
  {
    myoffice=o;
    cout<<"emp::emp()\n";
  }
~emp()
  {
    cout<<"emp::~emp()\n";
  }

  private:
  desk mydesk;
  office *myoffice;

};