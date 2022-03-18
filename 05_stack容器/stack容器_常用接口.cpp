#include<iostream>
#include<stack>
using namespace std;

/*
构造函数
1、stack<T> stk;    //stack 采用模板类实现，stack对象的默认构造形式
2、stack(const stack& stk); //拷贝构造函数

赋值操作
stack &operator=(const stack& stk); //重载等号操作符

数据存取
1、push(elem);  //向栈顶添加元素
2、pop();   //移除栈顶元素
3、top();   //返回栈顶元素

大小操作
1、empty(); //判断栈是否为空
2、size();  //返回栈的大小
*/

int main(){
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    // while(!s.empty()){
    //     cout<<s.top()<<endl;
    //     s.pop();
    // }
    // cout<<"栈的大小："<<s.size()<<endl;
    stack<int> s2;
    s2=s;
    while(!s2.empty()){
        cout<<s2.top()<<endl;
        s2.pop();
    }
    cout<<"栈的大小："<<s2.size()<<endl;
}