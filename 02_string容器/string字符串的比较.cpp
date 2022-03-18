#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str1="hello";
    string str2="xello";
    if(str1.compare(str2)>0)
        cout<<"str1>str2"<<endl;
    else if(str1.compare(str2)==0)
        cout<<"str1==str2"<<endl;
    else
        cout<<"str1<str2"<<endl;
}