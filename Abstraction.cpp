#include<iostream>
#include<conio.h>
using namespace std;
class MobileUser
{
public:
    void call()
    {
        cout<<"Hello!"<<endl;
    }
    virtual void sendMessage() = 0;
};
class Fatima : public MobileUser
{
public:
    void sendMessage()
    {
        cout<<"Hi this Fatima!"<<endl;
    }
};
class Rakib : public MobileUser
{
public:
    void sendMessage()
    {
        cout<<"Hi this Rakib!"<<endl;
    }
};
int main()
{
    MobileUser *m;

    Fatima f;
    Rakib r;

    m = &f;
    m->sendMessage();
    m->call();

    m = &r;
    m->sendMessage();
    getch();
}
