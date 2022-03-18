#include<iostream>
using namespace std;

class Base
{
    public:
        int m_A;
    protected:
        int m_B;
    private:
        int m_C;
};

//公共继承
class A:public Base
{
    public:
        void func()
        {
            m_A=100; //父类中的公共权限，在子类中依旧是公共权限
            m_B=200; //父类中的保护权限，在子类中依旧是保护权限
            //m_C=300; //父类中的私有权限，在子类中不可访问
        }
};

//保护继承
class B:protected Base
{
    public:
        void func()
        {
            m_A=100; //父类中的公共成员，在子类中变成了保护权限
            m_B=200; //父类中的保护权限成员，在子类中依旧是保护权限
            //m_C=300; //父类中的私有权限，在子类中不可访问
        }
};

//私有继承
class C:private Base
{
    public:
        void func()
        {
            m_A=100; //父类中的公共成员，在子类中变成了私有权限
            m_B=200; //父类中的保护权限成员，在子类中也变成了私有权限
            //m_C=300; //父类中的私有权限，在子类中不可访问
        }
};

//继承C来测试
class C_son:public C
{
    public:
        void func()
        {
            /*m_A、m_B、m_C，都是私有权限，在子类中不可访问*/
            //m_A=100; 
            //m_B=200; 
            //m_C=300; 
        }
};