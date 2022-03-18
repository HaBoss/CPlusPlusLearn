#include<iostream>
using namespace std;

template<class T>
class Base
{
    T m;
};
//1、子类在继承类模板时，必须说明类中模板的数据类型
class Son1:public Base<int>
{

};
//2、如果先要灵活指定父类中的T，那么子类也必须变成模板
template<class T1,class T2>
class Son2:public Base<T2>
{
    public:
        Son2()
        {
            cout<<"T1的类型为："<<typeid(T1).name()<<endl;
            cout<<"T2的类型为："<<typeid(T2).name()<<endl;
        }
};

int main()
{
    Son2<int ,char> s;
}