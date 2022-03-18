#include<iostream>
#include<string>
using namespace std;

class Person
{
    public:
    Person(string name)
    {
        this->name=name;    //this指针指向被调用的成员函数 所属的属性
    }
    Person(int age)
    {
        this->age=age;
    }
    Person & PersonAddAge(Person &p)
    {
        this->age+=p.age;
        return *this;   //this是指向p2的指针，而*this是指向p2这个对象的本体
    }
    string name;
    int age;
};

int main()
{
    Person p("张三");
    cout<<p.name<<endl;
    Person p1(10);
    Person p2(p1);
    cout<<p2.age<<endl;
    //链式编程思想
    p2.PersonAddAge(p1).PersonAddAge(p1).PersonAddAge(p1);
    cout<<p2.age<<endl;
}