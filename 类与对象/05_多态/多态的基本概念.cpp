#include<iostream>
using namespace std;

/*多态的满足条件
1、有继承关系
2、子类重写父类中的虚函数*/

/*多态的使用条件
1、父类指针或引用指向子类对象*/
class Animal
{
    public:
        void Speak()
        {
            cout<<"动物在叫"<<endl;
        }
        //虚函数
        //在函数前加上关键字 virtual  变成虚函数，那么编译器在编译的时候便不能确定函数的调用
        virtual void Name()
        {
            cout<<"我的名字叫。。。"<<endl;
        }
};
class Cat:public Animal
{
    public:
        void Speak()
        {
            cout<<"喵喵喵喵。。。"<<endl;
        }
        void Name()
        {
            cout<<"我是猫！"<<endl;
        }
};
//地址早绑定，在编译阶段确定了地址
void ToSpeak(Animal &animal)    //Animal &animal =cat 
{
    animal.Speak();
}
//地址晚绑定，在运行阶段确定地址
void MyName(Animal &animal)
{
    animal.Name();
}
int main()
{
    Cat cat;
    ToSpeak(cat);
    cout<<"--------------"<<endl;
    MyName(cat);
}