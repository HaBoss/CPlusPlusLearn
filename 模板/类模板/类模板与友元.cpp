#include<iostream>
#include<string>
using namespace std;

//全局函数类外实现，方法一
//提前让编译器知道这个类模板的存在
template<class T1,class T2>
class Person;

//类外实现
template<class T1,class T2>
void showPerson2(Person<T1,T2> p)
{
    cout<<"类外实现----\n"<<"m_name:"<<p.m_name<<"\nm_age="<<p.m_age<<endl;
}

template<class T1,class T2>
class Person
{
    //全局函数类内实现
    friend void showPerson(Person<T1,T2> p)
    {
        cout<<"类内实现----\n"<<"m_name:"<<p.m_name<<"\nm_age="<<p.m_age<<endl;
    }

    //全局函数类外实现
    //全局函数要先 加空模板参数列表 ，并且需要让编译器提前知道这个函数的存在
                                    //方法：
                                    //在这个类模板之前写这个函数的实现

    friend void showPerson2<>(Person<T1,T2> p);

    private:
        T1 m_name;
        T2 m_age;
    public:
        Person(T1 name,T2 age)
        {
            this->m_name=name;
            this->m_age=age;
        }
    
};

//全局函数在类内实现
void test01()
{
    Person<string,int> p("张三",20);
    showPerson(p);
}

//全局函数在类内实现
void test02()
{
    Person<string ,int> p2("悟空",666);
    showPerson2(p2);
}
int main()
{
    //test01();
    test02();
}
