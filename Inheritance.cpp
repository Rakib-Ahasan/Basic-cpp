#include<iostream>
#include<conio.h>
using namespace std;
class Persion
{
public:
    string name;
    int age;
    void display()
    {
        cout<<"Name :"<<name<<endl<<"Age "<<age<<endl;
    }
};
class Student : public Persion
{
public:
    int id;
    void display1()
    {
        cout<<"Id :"<<id<<endl;
        display();
    }
};
int main()
{
    Student s;
    s.id = 101;
    s.name = "Sagor Ahmed";
    s.age = 26;
    s.display1();
    getch();
}
