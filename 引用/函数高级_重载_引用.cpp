#include<iostream>
using namespace std;
/*函数重载注意事项：*/
//1、引用作为重载条件时
void show(int &a)  //int &a=10,不合法
{
    cout<<"打印show(int &a)"<<endl;
}

void show(const int &a) //const int &a=10 --> int temp=10;const int &a=temp;合法
{
    cout<<"打印show(const int &a)"<<endl;
}
//2、函数重载碰到默认参数时
void show2(int a,int b=10)
{
    cout<<"调用show2(int a,int b=10)"<<endl;
}

void show2(int a)
{
    cout<<"调用show2(int a)"<<endl;
}
   
int main()
{
    int a=10;
    show(a);
    cout<<"======================="<<endl;
    show(10);
    cout<<"======================="<<endl;
    show2(10,20);
    cout<<"======================="<<endl;
    //show2(10);  //会产生二义性，报错，尽量避免出现这种情况
    return 0;
}