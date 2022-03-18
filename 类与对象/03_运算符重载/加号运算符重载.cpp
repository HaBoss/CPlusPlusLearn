#include<iostream>
#include<string>
using namespace std;

//自定义的数据类型的表达式的运算符是可以改变的
/*对于内置的数据类型的表达式的运算符是不可以发生改变的
如：int a;a=10+20   这个时候的+运算，是不能发生改变的*/

class Person
{
    public:
        //通过全局函数重载加号
        Person operator+ (Person &p)
        {
            Person temp;
            temp.m_A=this->m_A+p.m_A;
            temp.m_B=this->m_B+p.m_B;
            return temp;
        }
    //private:
        int m_A;
        int m_B;
};
//通过全局函数来重载加号
// Person operator+(Person &p1,Person &p2)
// {
//     Person temp;
//     temp.m_A=p1.m_A+p2.m_A;
//     temp.m_B=p1.m_B+p2.m_B;
//     return temp;
// }

/*运算符重载，也可以发生函数重载*/
Person operator+(Person &p,int num)
{
    Person temp;
    temp.m_A=p.m_A+num;
    temp.m_B=p.m_B+num;
    return temp;
}
int main()
{
    Person p1,p2,p3;
    p1.m_A=p2.m_A=10;
    p1.m_B=p2.m_B=20;

    //p3=p1.operator+(p2);  //成员函数的加号重载调用
    //p3=operator+(p1,p2);  //全局函数的加号重载调用
    
    p3=p1+p2;   //都可以简化成这样
    cout<<"p3.m_A="<<p3.m_A<<endl;
    cout<<"p3.m_B="<<p3.m_B<<endl;
    cout<<"========================="<<endl;
    p3=p1+20;
    cout<<"p3.m_A="<<p3.m_A<<endl;
    cout<<"p3.m_B="<<p3.m_B<<endl;
}