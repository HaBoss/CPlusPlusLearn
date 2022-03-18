#include<iostream>
using namespace std;

class Person
{
    public:
    int *m_Height;
    int m_age;
    Person(int age,int height)
    {
        m_age=age;
        m_Height=new int(height); //把身高放在堆区
        cout<<"有参构造被调用"<<endl;
    }
    Person(const Person &p)
    {
        m_age=p.m_age;
        //m_Height=p.m_Height;  编译器默认实现的就是这个   浅拷贝
        m_Height=new int(*p.m_Height);      //深拷贝
        cout<<"拷贝构造被调用"<<endl;
    }

    //析构函数，将堆区开辟的数据做释放操作
    /*如果属性有在堆区开辟的，一定要自己提供拷贝构造函数，以防止深拷贝带来的问题*/
    ~Person()
    {
        if(m_Height!=NULL)
        {
            delete m_Height;
            m_Height=NULL;
        }
        cout<<"析构函数被调用"<<endl;
    }
};
int main()
{
    Person p1(18,188);
    cout<<"p1的年龄为："<<p1.m_age<<"\tp1的身高为："<<*p1.m_Height<<endl;
    cout<<"================================================="<<endl;
    Person p2(p1);
    cout<<"p2的年龄为："<<p2.m_age<<"\tp2的身高为："<<*p2.m_Height<<endl;
    return 0;
}