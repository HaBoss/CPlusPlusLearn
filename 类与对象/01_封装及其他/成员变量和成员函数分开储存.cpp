#include<iostream>
#include<string>
using namespace std;
/*成员变量和成员函数是分开储存的*/

//c++编译器会为每个空对象分配一个字节的内存空间，是为了区分每个空对象占内存的位置
//每个空对象都有一个独一无二的地址
class Person
{

};
class Person1
{
    int p_size; //非静态成员变量属于类上对象
};

class Person2
{
    int p_size;
    static int p_2; //静态成员变量不属于类上的对象 
};
class Person3
{
    int p_size;
    static int p_2;
    void func();    //非静态成员函数，不属于类上的对象
};
class Person4
{
    int p_size;
    static int p_2;
    void func();    
    static void func2();    //静态成员函数，不属于类上的对象
};
int main()
{
    Person p;
    cout<<"size of p="<<sizeof(p)<<endl;    //空对象占用内存空间为1
    Person1 p1;
    cout<<"size of p1="<<sizeof(p1)<<endl;
    Person2 p2;
    cout<<"size of p2="<<sizeof(p2)<<endl;
    Person3 p3;
    cout<<"size of p3="<<sizeof(p3)<<endl;
    Person3 p4;
    cout<<"size of p4="<<sizeof(p4)<<endl;
}