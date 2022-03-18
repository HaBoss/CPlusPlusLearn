#include<iostream>
#include<string>
using namespace std;

/*类模板与函数模板的区别*/

template <class nametype ,class agetype=int>
class Person
{
    public:
        nametype m_name;
        agetype m_age;
        Person(nametype name,agetype age)
        {
            this->m_name=name;
            this->m_age=age;
        }
        void ShowPerson()
        {
            cout<<"m_name:"<<this->m_name<<"\nm_age="<<this->m_age<<endl;
        }
};
//1、类模板没有自动类型推导
void test01()
{
    //Person p1("张三",19);   //false，无法使用自动类型推导
    //p1.ShowPerson();

    Person<string ,int> p2("李四",20);  //true ,只能用显示指定类型
    p2.ShowPerson();
}

//2、类模板在模板参数列表中可以有默认参数
void test02()
{
    Person<string> p3("王五",26);  //true  因为agetype 的默认类型是 int 所以可以省略
    p3.ShowPerson();
}
int main()
{
    //test01();
    test02();
}