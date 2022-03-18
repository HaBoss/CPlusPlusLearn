#include<iostream>
#include<map>
using namespace std;
#include<string>

//map容器的排序规则，按照key值，从小到大排序
//主要技术点：利用仿函数，可以改变排序规则

class mapCompare{
    public:
        bool operator()(int v1,int v2){
            //降序
            return v1>v2;
        }
};

class Person{
    public:
        string m_name;
        int m_age;
        Person(string name,int age){
            m_name=name;
            m_age=age;
        }
};

class personCompare{
    public:
        bool operator()(const Person& p1,const Person& p2){
                return p1.m_age>p2.m_age;
        }
};
int main(){
    map<int,int,mapCompare> m;
    m.insert(make_pair(1,10));
    m.insert(pair<int,int>(3,30));
    m.insert(pair<int,int>(5,50));
    m.insert(pair<int,int>(8,80));
    m.insert(pair<int,int>(2,20));
    m.insert(make_pair(9,90));
    m.insert(make_pair(11,99));

    for(map<int,int,mapCompare>::iterator it=m.begin();it!=m.end();it++){
        cout<<"Key="<<(*it).first<<"\tvalue="<<it->second<<endl;
    }

    //自定义数据类型排序
    //对于自定义数据类型，一定要指定排序规则
    map<Person,int,personCompare> mp;
    Person p1("张三",20);
    Person p2("李四",23);
    Person p3("悟空",800);
    Person p4("赵信",18);
    Person p5("蛮子",30);
    mp.insert(make_pair(p1,1));
    mp.insert(make_pair(p2,2));
    mp.insert(make_pair(p3,3));
    mp.insert(make_pair(p4,4));
    mp.insert(make_pair(p5,5));

    for(map<Person,int,personCompare>::iterator it=mp.begin();it!=mp.end();it++){
        cout<<"key.name="<<(*it).first.m_name<<"\tKey.age="<<(*it).first.m_age<<"\tvalue="<<(*it).second<<endl;
    }


}