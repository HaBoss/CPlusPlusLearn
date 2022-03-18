#include<iostream>
#include<list>
using namespace std;
#include<string>

//将person自定义数据类型进行排序，Person中有姓名、年龄、升高
//排序规则：按照年龄升序，如果年龄相同，则按升高降序

class Person{
    public:
        string m_name;
        int m_age;
        int m_height;
        Person(string name,int age,int height){
            m_name=name;
            m_age=age;
            m_height=height;
        }
};
//打印链表
void printList(const list<Person>& l){
    for(list<Person>::const_iterator it=l.begin();it!=l.end();it++){
        cout<<(*it).m_name<<"\t"<<(*it).m_age<<"\t"<<(*it).m_height<<endl;
    }
}

//指定排序规则
bool comparePerson(Person& p1,Person& p2){
    if(p1.m_age==p2.m_age)
        return p1.m_height>p2.m_height;
    return p1.m_age<p2.m_age;
}
int main(){
    list<Person> l;
    l.push_back(Person("张三",18,160));
    l.push_back(Person("悟空",888,178));
    l.push_back(Person("矮子",23,155));
    l.push_back(Person("罗翔",50,192));
    l.push_back(Person("李四",18,175));
    printList(l);
    cout<<"排序后："<<endl;
    l.sort(comparePerson);
    printList(l);

}