#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
    string text;
    ofstream file;
    file.open("Student.txt", ios::out|ios::app);
    cout<<"Type any thing what you want.. :"<<endl;
    getline(cin,text);
    file<<text<<endl;
    file.close();
    cout<<"Your data stored successfully..!"<<endl;
}
