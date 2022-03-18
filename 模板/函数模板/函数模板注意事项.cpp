#include<iostream>
using namespace std;

/*函数模板注意事项*/

// 1、自动类型推导，一定要推导出相同得数据类型才有效
template<typename T>
void Myswap(T &a,T &b)
{
    T temp=a;
    a=b;
    b=temp;
}
void test01()
{
    int a=10;
    int b=20;
    double c=3.12;
    Myswap(a,b);//true
    //Myswap(a,c);//false,推导不出相同的数据类型
    cout<<"a="<<a<<"\nb="<<b<<endl;
}
// 2、模板必须要确定出数据类型才能使用
template<typename T>
void func()
{
    cout<<"func()被调用"<<endl;
}
void test02()
{
    //func();   //false,没有给出确定的数据类型
    func<int>();    //true
}
int main()
{
    
    test01();
    test02();
}