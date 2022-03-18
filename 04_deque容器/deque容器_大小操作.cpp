#include<iostream>
using namespace std;
#include<deque>

/*
具体操作与vector 基本相同，
但deque 没有容量 capacity 这一说，以为它里面的中控器里，存的是地址，可以无限插入存储*/
void PrintDeque(const deque<int>& d){
    for(deque<int>::const_iterator it=d.begin();it!=d.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
}
int main(){
    deque<int> d;
    for(int i=0;i<10;i++){
        d.push_back(i);
    }
    PrintDeque(d);

    //deque.empty()   判断容器是否为空
    if(d.empty())   cout<<"deque容器为空"<<endl;
    else    cout<<"deque容器不为空"<<endl;

    //deque.size()  返回容器的大小
    cout<<"d 的大小为："<<d.size()<<endl;

    //deque.resize(num)    //重新指定容器的大小，变长则默认补0；变短，多余的直接删除
    d.resize(5);
    PrintDeque(d);

    d.resize(10);
    PrintDeque(d);

    //deque.resize(num,elem)    //elem  变长后，多出的补elem
    d.resize(15,8);
    PrintDeque(d);
}