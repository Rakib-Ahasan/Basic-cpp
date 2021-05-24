#include<iostream>
#include<conio.h>
using namespace std;

class Student
{
public:
    int id;
    double gpa;
    void display()
    {
        cout<<id<<endl<<gpa;
    }
    Student(int x,double y)
    {
        id = x;
        gpa = y;
    }
};
int main()
{
    Student swarno(1,80.65);
    swarno.display();
    getch();
}
