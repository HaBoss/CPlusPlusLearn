#include<iostream>
using namespace std;

class Base
{
    public:
        int m_A;
        Base()
        {
            m_A=100;
        }
        void func()
        {
            cout<<"Base - func()被调用"<<endl;
        }
        void func(int a)
        {
            cout<<"Base - func(int a)被调用"<<endl;
        }
};
//子类对象可以直接访问子类中的同名成员
class Son:public Base
{
    public:
        int m_A;
        Son()
        {
            m_A=200;
        }
        void func()
        {
            cout<<"Son - func()被调用"<<endl;
        }
};

/*同名的出现，子类会隐藏掉父类中所有同名的成员*/
int main()
{
    Son s;
    cout<<"s下的\t m_A="<<s.m_A<<endl;
    //如果通过子类对象访问父类中继承的同名对象，需要加一个作用域
    cout<<"Base下的 m_A="<<s.Base::m_A<<endl;
    cout<<"==========================="<<endl;
    s.func();
    //s.func(10); 错误
    /*只要出现同名，无论是否有重载，想通过子类对象访问父类中继承的同名对象，都需要加一个作用域*/
    s.Base::func();
    s.Base::func(10);
}