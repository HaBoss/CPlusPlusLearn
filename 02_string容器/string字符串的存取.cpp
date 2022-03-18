#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str1="hello";
    //通过[]号的方式访问
    for(int i=0;i<str1.size();i++)
    {
        cout<<str1[i]<<" ";
        
    }
    cout<<endl;
    //通过at的方式访问
    for(int i=0;i<str1.size();i++)
    {
        cout<<str1.at(i)<<" ";
    }
    cout<<endl;

    str1[0]='x';
    cout<<str1<<endl;
    str1.at(1)='p';
    cout<<str1<<endl;
}