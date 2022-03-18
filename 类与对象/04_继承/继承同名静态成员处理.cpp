#include<iostream>
using namespace std;

class Base
{
    public:
        static int m_A; //类内申明，类外初始化
        static void func()
        {
            cout<<"Base - static func()被调用"<<endl;
        }
         static void func(int a)
        {
            cout<<"Base - static func(int a)被调用"<<endl;
        }
};
int Base::m_A=100;

class Son:public Base
{
    public:
        static int m_A;
        static void func()
        {
            cout<<"Son - static func()被调用"<<endl;
        } 
};
int Son::m_A=200;
//静态同名成员属性
void test01()
{
    Son s;
    //通过对象访问
    cout<<"通过对象访问"<<endl;
    cout<<"Son 下的 m_A="<<s.m_A<<endl;
    cout<<"Base 下的 m_A="<<s.Base::m_A<<endl;
    //通过类名访问
    cout<<"通过类名访问"<<endl;
    cout<<"Son 下的 m_A="<<Son::m_A<<endl;
    cout<<"Base 下的 m_A="<<Son::Base::m_A<<endl;//通过子类访问父类中的静态成员，也可以直接通过父类的访问
}
//静态同名成员函数
void test02()
{
    Son s;
    s.func();
    s.Base::func();
    s.Base::func(10);
    cout<<"======================"<<endl;
    Son::func();
    Son::Base::func();
    Son::Base::func(10);
}
int main()
{
    //test01();
    test02();
}