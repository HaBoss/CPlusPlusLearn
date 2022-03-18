#include<iostream>
using namespace std;
int *func()
{
    int *p=new int(10);//new返回的是该类型的指针
    return p;
}

int main()
{
    int *p=func();
    cout<<*p<<endl;
    cout<<*p<<endl;
    delete p;//用delete关键字清楚堆区的数据
    cout<<*p<<endl;
    return 0;
}