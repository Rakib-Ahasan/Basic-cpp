#include<iostream>
#include<conio.h>
using namespace std;
class A
{
private:
    int id = 101;
    string name = "Sagor";
public:
    friend class B;
};
class B
{
public:
    void display(A obj)
    {
        cout<<obj.id<<endl<<obj.name<<endl;
    }
};
int main()
{
    A obj;
    B obj2;
    obj2.display(obj);
    getch();
}
