#include<iostream>
using namespace std;
class Person
{
    /*构造函数的分类*/
    //1、按照参数分类    有参构造（默认构造）  无参构造
public:
    int age;
    Person()
    {
        cout<<"调用无参构造函数"<<endl;
    }
    Person(int a)
    {
        age =a;
        cout<<"调用有参构造函数  "<<age<<endl;
    }
    //2、按照类型分类   普通构造   拷贝构造
    //拷贝构造函数
    Person(const Person &p)
    {
        age=p.age+10;
        cout<<"调用拷贝构造函数："<<age<<endl;
    }
    ~Person()
    {
        cout<<"调用析构函数"<<endl;
    }
};
//调用
void test01()
{
    //1、括号法
    /*注意事项
    1）调用默认构造时，不要加（）*/
    //Person p1();  因为这段代码，编译器会认为他是一个函数的申明,不会认为是在创建对象
    Person p1;   //调用无参构造
    cout<<"================"<<endl;
    Person p2(10);  //调用有参构造
    cout<<"================"<<endl;
    Person p3(p2);  //调用拷贝构造
}
void test02()
{
    //显示法
    /*注意事项
    1、Person(10) 匿名对象，当前行执行完后，系统会立即回收掉该对象
    2、Person (p2) 不要用拷贝构造函数初始化匿名对象  编译器会认为Person (p3) == Person p3;  对象初始化*/
    Person p1;
     cout<<"================"<<endl;
    Person p2=Person (10); //有参构造
     cout<<"================"<<endl;
    Person p3=Person (p2); //拷贝构造

}
void test03()
{
    //隐式转换法
    /**/
    Person p2=10; //有参构造，相当于写了 Person p2=Person (10)
    Person p3=p2; //拷贝构造
}
int main()
{
    //test01();
    //test02();
    test03();
}