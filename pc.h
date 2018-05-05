#include <iostream>
using namespace std;

class pc{

public:
pc()
{
  cout<<"pc::pc()\n";
}
~pc()
{
  cout<<"pc::~pc()\n";
}
void turn_on(void)
{
  cout<<"turn on";
}
void turn_off(void)
{
  cout<<"turn off";
}
private:
};