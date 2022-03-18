#include<iostream>
using namespace std;

class Base1
{
    public:
        int m_A;
        Base1()
        {
            m_A=100;
        }
};
class Base2
{
    public:
        int m_A;
        Base2()
        {
            m_A=200;
        }
};
class Son:public Base1,public Base2
{
    public:
        int m_B,m_C;
        Son()
        {
            m_B=101;
            m_C=102;
        }
};
int main()
{
    //如果被继承的父类中拥有同名的成员，则子类在调用的时候需要添加作用域
    Son s;
    cout<<"sizeof(son)="<<sizeof(Son)<<endl;
    cout<<"================================="<<endl;
    cout<<"Base1 m_A="<<s.Base1::m_A<<endl;
    cout<<"Base2 m_A="<<s.Base2::m_A<<endl;
}