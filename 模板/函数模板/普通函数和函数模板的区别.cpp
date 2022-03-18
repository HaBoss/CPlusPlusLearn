#include<iostream>
using namespace std;

//普通函数
int myAdd01(int a,int b)
{
    return a+b;
}

//函数模板
template<typename T>
T myAdd02(T a, T b)
{
    return a+b;
}

int main()
{
    int a=10;
    int b=20;
    char c='c';
    cout<< myAdd01(a,c)<<endl;
    /*1、使用函数模板时，如果使用自动类型推导，不会发生自动类型转换，即隐式类型转换*/
    //cout<<myAdd02(a,c)<<endl;

    /*2、使用显示指定类型，可以发生隐式类型转换*/
    cout<<myAdd02<int>(a,c)<<endl;
}