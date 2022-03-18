#include<iostream>
#include<string>
using namespace std;

/*利用具体化的模板，可以解决自定义类型的通用化*/
class Person
{
    public:
        int m_age;
        string m_name;
        Person(string name,int age)
        {
            m_name=name;
            m_age=age;
        }
};

template<typename T>
bool myCompare(T a,T b)
{
    if(a==b)
    {
        return true;
    }
    else
    {
        return false;
    }
}
//利用具体化Person版本的实现代码，具体化优先调用
template<> bool myCompare(Person p1,Person p2)
{
    if(p1.m_age==p2.m_age && p1.m_name==p2.m_name)
    {
        return true;
    }
    else
    {
        return false;
    }
}
void test01()
{
    int a=10;
    int b=20;
    bool ret=myCompare(a,b);
    if(ret)
    {
        cout<<"a==b"<<endl;
    }
    else
    {
        cout<<"a!=b"<<endl;
    }
}
void test02()
{
    Person p1("Tom",19);
    Person p2("Tom",19);
    bool ret=myCompare(p1,p2);
    if(ret)
    {
        cout<<"p1==p2"<<endl;
    }
    else
    {
        cout<<"p1!=p2"<<endl;
    }
}

int main()
{
    //test01();
    test02();
}