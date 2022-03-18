#include<iostream>
using namespace std;
void Swap(int &a,int &b)//引用实参做形参
{
    int temp=a;
    a=b;
    b=temp;
}
void Swap2(int *a,int *b)//指针
{
    int temp=*a;
    *a=*b;
    *b=temp;
}

int main()
{
    int a=10,b=20;
    Swap(a,b);
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
    cout<<"=================="<<endl;
    Swap2(&a,&b);
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
    return 0;
}