#include<iostream>
#include<string>
using namespace std;

/*类模板对象做函数参数的几种方法*/

template<class T1,class T2>
class Person
{
    public:
        T1 m_name;
        T2 m_age;
        Person(T1 name,T2 age)
        {
            this->m_age=age;
            this->m_name=name;
        }
        void printPerson()
        {
            cout<<"m_name:"<<this->m_name<<"\nm_age="<<this->m_age<<endl;
        }
};
//1、指定传入类型   使用比较广泛
void showPerson1(Person<string,int>&p)
{
    p.printPerson();
}
void test01()
{
    Person<string,int> p1("孙悟空",666);
    showPerson1(p1);
}

//2、参数模板化
template<class T1,class T2>
void showPerson2(Person<T1,T2> &p)
{
    p.printPerson();
    // cout<<"T1的类型为:"<<typeid(T1).name()<<endl;
    // cout<<"T2的类型为:"<<typeid(T2).name()<<endl;
}
void test02()
{
    Person<string,int> p2("猪八戒",250);
    showPerson2(p2);
}

//3、整个类模板化
template<class T>
void showPerson3(T &p)
{
    p.printPerson();
    cout<<"T 的类型为："<<typeid(T).name()<<endl;
}
void test03()
{
    Person<string,int> p3("唐僧",20);
    showPerson3(p3);
}

int main()
{
    //test01();
    //test02();
    test03();
}