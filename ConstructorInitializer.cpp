#include<iostream>
#include<conio.h>
using namespace std;

class Student
{
public:
    const int admissionFee;
    const int examFee;
    int id;
    Student(int x,int y,int z):admissionFee(x),examFee(y)
    {
        id= z;
        cout<<id<<endl;
        cout<<admissionFee<<endl;
        cout<<examFee<<endl;
    }
};
int main()
{
    Student s(15000,500,1);
    getch();
}
