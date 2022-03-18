#include<iostream>
using namespace std;

class Person
{
    public:
    int age;
    Person()
    {
        cout<<"---无参构造函数---"<<endl;
    }
    Person(const Person &p)
    {
        age=p.age;
        cout<<"---拷贝构造函数---"<<age<<endl;
    }
    ~Person()
    {
        cout<<"---析构函数---"<<endl;
    }
};

//值传递的方式给函数参数传值
void toWork(Person p)
{

}

void test02()
{
    Person p1;
    toWork(p1);
}

//值方式返回局部对象

Person toWork2()
{
    Person p2;
    return p2;
}
void test03()
{
    Person p3=toWork2();
}

int main()
{
    //test02();
    test03();
}