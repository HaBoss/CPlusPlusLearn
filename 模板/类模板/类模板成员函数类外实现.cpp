#include<iostream>
#include<string>
using namespace std;

template<class T1,class T2>
class Person
{
    public:
        T1 m_name;
        T2 m_age;
        Person(T1 name,T2 age);
        void showPerson();
};
//构造函数类外实现
template<class T1,class T2>
Person<T1,T2>::Person(T1 name,T2 age)
{
    this->m_age=age;
    this->m_name=name;
}
//成员函数类外实现
template<class T1,class T2>
void Person<T1,T2>::showPerson()
{
    cout<<"m_name:"<<this->m_name<<"\nm_age="<<this->m_age<<endl;
}
int main()
{
    Person<string,int> p("张三",20);
    p.showPerson();
}