#include<iostream>
#include<conio.h>
using namespace std;
class Student
{
private:
    string name;
public:
    Student(string name)
    {
        this->name = name;
    }
    void display()
    {
        cout<<name;
    }
};

int main()
{
    Student s("Sagor");
    s.display();
    getch();
}
