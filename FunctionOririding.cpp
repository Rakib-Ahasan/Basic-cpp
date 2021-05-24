#include<iostream>
#include<conio.h>
using namespace std;
class Person
{
public:
    void display()
    {
        cout<<"call from Person class."<<endl;
    }
};
class Student : public Person
{
public:
    void display()
    {
        cout<<"call from Student class."<<endl;
    }
};
class Teacher : public Person
{
public:
    void display()
    {
        cout<<"call from Teacher class."<<endl;
    }
};
int main()
{
    Person p;
    p.display();

    Student s;
    s.display();

    Teacher t;
    t.display();
    getch();
}


