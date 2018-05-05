#include <iostream>
using namespace std;
#include "emp.h"
#include "pc.h"

class boss:public emp{

public:
boss (office *o):emp (o)
{
  mypc.turn_on();
  cout<<"boss::boss()\n";
} 
~boss()
{
  cout<<"boss::boss()\n";
}
private:
pc mypc;

};