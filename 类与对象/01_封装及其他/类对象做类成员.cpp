#include<iostream>
#include<string>
using namespace std;

class Phone
{
    public:
    string PName;
    Phone(string name):PName(name)
    {
        cout<<"我是手机构造"<<endl;
    }
    ~Phone()
    {
        cout<<"我是手机析构"<<endl;
    }

};
class Person
{
    public:
    string m_name;
    Phone m_Phone;
    Person(string name,string pname):m_name(name),m_Phone(pname)    //Phone m_Phone=pname;  隐式转换法
    {
        cout<<"我是人构造"<<endl;
    }
    ~Person()
    {
        cout<<"我是人析构"<<endl;
    }
};
//当其他类作为本类的成员时，先构造类对象，在构造自身,析构的顺序与构造相反
int main()
{
    Person p("张三","华为P50");
    cout<<p.m_name<<"拥有"<<p.m_Phone.PName<<endl;
}