#include<iostream>
using namespace std;
int main()
{
    int a=10;
    int &b=a;//引用一定要初始化，并且初始化后，不能在更改引用
    b=20;
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
    return 0;
}