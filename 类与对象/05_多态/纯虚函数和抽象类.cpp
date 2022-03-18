#include<iostream>
using namespace std;

/*抽象类的特点
1、不能实例化对象
2、它的子类必须重写父类中的纯虚函数，否则也属于抽象类*/
class Base
{
    public:
        //纯虚函数，在虚函数的基础上，末尾加上 =0 
        //类中只要有了一个纯虚函数，这个类就被称为抽象类       
        virtual void func()=0;
};
class Son:public Base
{
    public:
        void func()
        {
            cout<<"Son - func()被调用"<<endl;
        }
};
int main()
{
    //Base bs;  //抽象类不能实例化对象
    //new Base; //抽象类不能实例化对象
    Base *bs=new Son;
    bs->func();
}