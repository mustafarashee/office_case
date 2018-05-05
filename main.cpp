#include<iostream>
#include "boss.h"

using namespace std;

main()
{
  cout<<"constructor calling from office";
  office *poff =new office;
   cout<<"constructor calling from boss";
  boss *pboss= new boss(poff);
 cout<<"destructor calling from boss";
  delete pboss;
 cout<<" polymorphic constructor calling from boss";
  emp *pemp =new boss(poff); //polymorphism
cout<<"destructor calling from boss";
  delete pemp;
  system("pause");
}