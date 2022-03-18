#include<iostream>
using namespace std;

class Person
{
    public:
    int m_a;
    int m_b;
    int m_c;
    //传统初始化方法

    // Person(int a,int b,int c)
    // {
    //     m_a=a;
    //     m_b=b;
    //     m_c=c;
    // }

    //初始化列表初始化属性
    //Person():m_a(10),m_b(20),m_c(30)
    Person(int a,int b,int c):m_a(a),m_b(b),m_c(c)
    {

    }
};
int main()
{
    // Person p1(10,20,30);
    // cout<<"p1.m_a="<<p1.m_a<<endl;
    // cout<<"p1.m_b="<<p1.m_b<<endl;
    // cout<<"p1.m_c="<<p1.m_c<<endl;
    // cout<<"=========================="<<endl;
    Person p2(30,20,10);
    cout<<"p2.m_a="<<p2.m_a<<endl;
    cout<<"p2.m_b="<<p2.m_b<<endl;
    cout<<"p2.m_c="<<p2.m_c<<endl;
}