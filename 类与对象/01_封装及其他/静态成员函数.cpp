#include<iostream>
#include<string>
using namespace std;

/*静态成员函数注意事项
1、所有对象公用同一个函数
2、静态成员函数只能访问静态成员变量*/
class Person
{
    public:
    //静态成员函数，且静态成员函数也是有访问权限的
    static void func()
    {
        m_a=100;
        //m_b=300;  静态成员函数只能访问静态成员变量
        //因为编译器无法区分m_b是那个对象的属性
        cout<<"static void func调用"<<endl;
    }
    static int m_a;     //静态成员变量
    int m_b;
    private:
    static void func2()
    {
        cout<<"私有静态成员函数"<<endl;
    }
};
int main()
{
    Person p;   //通过对象访问
    p.func();
    cout<<"========================="<<endl;
    Person::func(); //通过对象访问

    //Person::func2();  私有成员，不能被外部访问
}