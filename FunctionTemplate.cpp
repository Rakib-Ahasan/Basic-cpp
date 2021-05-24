
#include<iostream>
using namespace std;
///If I want single type parameter like int or double
//template <class myTemplate>
///If I use multiple type parameter like int and double both.
template <class myTemplate1,class myTemplete2>
myTemplate1 add(myTemplate1 a,myTemplete2 b)
{
    return a+b;
}
int main()
{
    cout<<add(10.5,10);
}
