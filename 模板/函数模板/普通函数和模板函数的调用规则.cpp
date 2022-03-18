/*1、如果普通函数和模板函数都能调用，优先调用普通函数
2、通过空模板参数列表来强制调用模板函数
3、模板函数可以发生重载
4、如果模板函数也参数类型更加匹配，则优先调用模板函数*/

#include<iostream>
using namespace std;

void func(int a,int b)
{
    cout<<"普通函数被调用"<<endl;
}

template<typename T>
void func(T a,T b)
{
    cout<<"模板函数被调用"<<endl;
}

template<typename T>
void func(T a,T b,T c)
{
    cout<<"重载模板函数被调用"<<endl;
}

int main()
{
    int a=10;
    int b=20;

    func(a,b);  //如果普通函数和模板函数都能调用，优先调用普通函数

    func<>(a,b);    //通过空模板参数列表来强制调用模板函数

    func(a,b,100);  //模板函数可以发生重载

    //虽然普通函数因为能发生隐式转换，也能调用，但是，模板函数可以不发生转换，直接使用，更加匹配，所有调用模板函数
    char c='c';
    char d='d';
    func(c,d);  //如果模板函数也参数类型更加匹配，则优先调用模板函数
}