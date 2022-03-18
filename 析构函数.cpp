#include<iostream>
using namespace std;

//构造和析构是必须有实现的，如果我们自己不提供，那么编译器就会自己提供一个空实现的构造和析构函数
class Person
{
    /*构造函数
    1、没有返回值，不用写void
    2、函数名与类名相同
    3、构造函数可以有参数，可以发生重载
    4、创建函数时，构造函数会被自动调用，且只调用一次*/
    public:
        Person()
        {
            cout<<"Person   构造函数被调用！"<<endl;
        }
    /*析构函数
    1、没有返回值，不写void
    2、函数名与类名相同，在名称前加 ~  
    3、析构函数不可以有参数，不可以发生重载
    4、对象在销毁前，会自动调用析构函数，而且只调用一次*/
    ~Person()
    {
        cout<<"Person   析构函数被调用！"<<endl;
    }
    
};
void test()
{
    Person p; //在栈上的数据，在被调用完后，就会被编译器释放
}
int main()
{
    //test();
    Person per;
    int i;
    cin>>i;
    return 0;
}