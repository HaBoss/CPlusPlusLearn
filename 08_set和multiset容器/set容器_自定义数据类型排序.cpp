#include<iostream>
#include<set>
#include<string>
using namespace std;

//对于自定义数据类型，set必须指定排序规则，才能插入数据
class Person{
    public:
        string m_name;
        int m_age;
        Person(string name, int age){
            m_name=name;
            m_age=age;
        }
};

class Compare{
    public:
    bool operator()(const Person& p1,const Person&p2){
        //按照年龄降序
        return p1.m_age>p2.m_age;
    }
};

void printSet(set<Person,Compare>& s){
    for(set<Person,Compare>::iterator it=s.begin();it!=s.end();it++){
        cout<<(*it).m_name<<"\t"<<(*it).m_age<<endl;
    }
}

int main(){
    //自定义的数据类型，都会指定排序规则
    set<Person,Compare> sp;

    //创建Person类对象
    Person p1("刘备",42);
    Person p2("关羽",39);
    Person p3("张飞",40);
    Person p4("吕布",28);
    Person p5("张三",38);
    Person p6("悟空",1200);

    sp.insert(p1);
    sp.insert(p2);
    sp.insert(p3);
    sp.insert(p4);
    sp.insert(p5);
    sp.insert(p6);

    printSet(sp);

    return 0;
    
}