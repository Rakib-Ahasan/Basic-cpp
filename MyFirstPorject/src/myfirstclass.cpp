#include "myfirstclass.h"
#include<iostream>
using namespace std;
MyFirstClass::MyFirstClass()
{
    //ctor
   cout<<"Constructor is called."<<endl;
}
MyFirstClass :: ~MyFirstClass()
{
    cout<<"Destructor is called."<<endl;
}
void MyFirstClass :: display()
{
    cout<<"Display function is called."<<endl;
}

