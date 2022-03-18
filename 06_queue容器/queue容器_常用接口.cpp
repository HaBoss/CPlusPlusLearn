#include<iostream>
#include<queue>
using namespace std;
#include<string>

//队列

/*
构造函数
1、queue<T> que;    
2、queue(const queue& que); //拷贝构造

赋值操作
1、queue& operator=(const queue& que);  //重载等号运算符

数据存取
1、push(elem);  //往队尾添加元素
2、pop();   //移除开始的第一个元素
3、back();  //返回最后一个元素
4、front(); //返回第一个元素

大小操作
1、empty(); //判断队列是否为空
2、size();  //返回队列的大小
*/

class Person{
    public:
        string m_name;
        int m_age;

        Person(string name,int age){
            m_name=name;
            m_age=age;
        }
};
int main(){
    queue<Person> q;
    q.push(Person("悟空",1000));
    q.push(Person("八戒",800));
    q.push(Person("沙僧",666));
    q.push(Person("唐僧",20));
    cout<<q.size()<<endl;
    while(!q.empty()){
        cout<<"姓名: "<<q.front().m_name<<"年龄："<<q.front().m_age<<endl;
        q.pop();
    }
    if(q.empty())
        cout<<"空"<<endl;
    else    
        cout<<"不空"<<endl;
    cout<<q.size();
}