#include<iostream>
#include<string>
using namespace std;

class Person
{
    //配合友元可以访问私有成员，可以实现输出自定义的数据类型
    friend ostream &operator<<(ostream &cout,Person &p);
    public:
        Person(int a,int b)
        {
            this->m_A=a;
            this->m_B=b;
        }
    private:
        int m_A;
        int m_B;
};

//只能利用全局函数重载左移运算符
//因为成员函数无法实现 cout在左侧
/*ostream对象只能有一个，所以这里要引用*/
ostream &operator<<(ostream &cout,Person &p)    //调用本质  operator<<(cout,p)  简化  cout<<p;
{
    cout<<"m_A="<<p.m_A<<"\nm_B="<<p.m_B<<endl;
    return cout;
}

int main()
{
    Person p1(10,20);
    cout<<p1;
}