#include<iostream>
#include<string>
using namespace std;

template<class nametype,class agetype>
class Person
{
    public:
        nametype m_name;
        agetype m_age;
        Person(nametype name,agetype age)
        {
            m_age=age;
            m_name=name;
        }

};
int main()
{
    //指定nametype 的类型为 string ,agetype 的类型为 int 
    Person<string,int> p1("张三",18);
    cout<<"p1.m_name="<<p1.m_name<<"\np1.m_age="<<p1.m_age<<endl;
}