#include<iostream>
using namespace std;
int count=0;
void check(int a[10],int b[10])
{
    for(int i = 0;i<10;i++)
    {
        if(a[i]==b[i])
            count++;
    }
    cout<<count<<endl;
}
int main()
{
    int a[10];
    int b[10];
    for(int i=0;i<10;i++)
    {
        cin>>a[i];
        cin>>b[i];
    }
    check(a,b);

}
