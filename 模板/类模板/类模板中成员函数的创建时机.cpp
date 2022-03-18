#include<iostream>
using namespace std;

class Person1
{
    public:
        void showPerson1()
        {
            cout<<"showPerson1被创建"<<endl;
        }
};
class Person2
{
    public:
        void showPerson2()
        {
            cout<<"showPerson2被创建"<<endl;
        }
};

//类模板中的成员函数不是一开始就被创建，只有在模板调用的时候才会被创建
//所以类模板中的成员函数在定义的时候，出现一下类似的错误，也不会报错
template<class T>
class Myclass 
{
    public:
        T obj;
        void func1()
        {
            obj.showPerson1();
        }  
        void func2()
        {
            obj.showPerosn2();
        }
};
int main()
{
    Myclass<Person1> mc;
    mc.func1();
    //mc.func2();   //编译出错，说明函数调用才会去创建成员函数
}