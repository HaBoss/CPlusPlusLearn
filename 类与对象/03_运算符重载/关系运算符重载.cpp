#include<iostream>
#include<string>
using namespace std;

class Person
{
    public:
        string m_name;
        int m_age;

        Person(string name ,int age)
        {
            this->m_age=age;
            this->m_name=name;
        }
        //等于  重载
        bool operator==(Person &p)
        {
            if(this->m_name==p.m_name && this->m_age==p.m_age)
                return true;
            return false;
        }
        //不等于  重载
        bool operator!=(Person &p)
        {
            if(this->m_name==p.m_name && this->m_age==p.m_age)
                return false;
            return true;
        }
};

int main()
{
    Person p1("张三",19);
    Person p2("张三",19);
    if(p1==p2)
        cout<<"p1=p2"<<endl;
    else
        cout<<"p1!=p2"<<endl;

    if(p1!=p2)
        cout<<"p1!=p2"<<endl;
    else
        cout<<"p1=p2"<<endl;
    return 0;
}