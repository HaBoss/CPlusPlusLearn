#include<iostream>
#include<string>
#include<vector>
using namespace std;

//vector 容器中存放自定义数据类型
class Person
{
    public:
        int m_age;
        string m_name;
        Person(string name, int age)
        {
            this->m_age=age;
            this->m_name=name;
        }
};

void test01()
{
    vector<Person> v;
    Person p1("张三",20);
    Person p2("李四",30);
    Person p3("王五",40);
    Person p4("悟空",50);
    Person p5("麦子",60);

    v.push_back(p1);
    v.push_back(p2);
    v.push_back(p3);
    v.push_back(p4);
    v.push_back(p5);

    //hp是自己定义的一个名字 可以把他看成一个指针类型 所以 下面使用时有两种方法
    for(vector<Person>::iterator hp=v.begin();hp!=v.end();hp++)
    {
        //cout<<"姓名："<<hp->m_name<<"\t年龄"<<hp->m_age<<endl;    //采用指针的方法 用 -> 指出来

        cout<<"姓名："<<(*hp).m_name<<"\t年龄"<<(*hp).m_age<<endl;  //用*取出值来，然后 · 出来
    }
}

//vector 存放自定义数据类型 指针
void test02()
{
    vector<Person*> v;
    Person p1("张三",20);
    Person p2("李四",30);
    Person p3("王五",40);
    Person p4("悟空",50);
    Person p5("麦子",60);

    v.push_back(&p1);
    v.push_back(&p2);
    v.push_back(&p3);
    v.push_back(&p4);
    v.push_back(&p5);

    //注：<>号里面是什么类型 ，(*it)  就会得到什么类型
    for(vector<Person*>::iterator it=v.begin();it!=v.end();it++)
    {
        //cout<<"姓名："<<(**it).m_name<<"\t年龄:"<<(**it).m_age<<endl;
        cout<<"姓名："<<(*it)->m_name<<"\t年龄:"<<(*it)->m_age<<endl;
    }
}
int main()
{
    //test01();
    test02();
}