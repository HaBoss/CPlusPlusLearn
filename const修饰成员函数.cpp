#include<iostream>
#include<string>
using namespace std;
class Person
{
    public:
    int m_A;
    mutable int m_B;    //在定义的变量前加 mutable 后，就变成了特殊变量，即使在常函数中也可以修改这个值
    Person()
    {
        m_A=200;
    }

    //this指针的本质是指针常量 Person * const this  指针的指向是不可以修改的
    //在成员函数后面加 const 就相当于 const Person * const this  指针指向的值也不可以修改了
    void showPersonClass() const
    {
        //this->age=100;
        //this=NULL; //this指针的指向不能改变
        //cout<<"age="<<age<<endl; 
        m_B=100;
        cout<<"m_B="<<m_B<<endl;
    }
};

int main()
{
    Person p;
    p.showPersonClass();

    //常对象
    const Person p1;
    //p1.m_A=200;   //常函数里面的属性不可修改
    p1.showPersonClass();
}