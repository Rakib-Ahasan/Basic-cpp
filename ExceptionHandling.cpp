#include<iostream>
using namespace std;
int main()
{
    while(1)
    {
        try
        {
            int n1,n2;
            cout<<"Enter first number : ";
            cin>>n1;
            cout<<"Enter second number : ";
            cin>>n2;
            if(n2 == 0)
                throw -1;
            int result = n1/n2;
            cout<<"Your result is : "<<result<<endl;
        }
        catch(...)
        {
            cout<<"You don't divided any number with zero."<<endl<<"Please try again..."<<endl;
        }
    }
}
