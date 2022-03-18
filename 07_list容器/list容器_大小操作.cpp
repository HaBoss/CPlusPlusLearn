#include<iostream>
#include<list>
using namespace std;

/*
1、size();  //返回容器的大小
2、empty(); //判断是否为空
3、resize(num);    //重新指定容器的长度，如果长了，则多余的部分默认补0，小了，则多出的部分直接删除
4、resize(num,elem);    //同时，但，多余的部分，补elem
*/
void printList(const list<int>& l){
    for(list<int>::const_iterator it=l.begin();it!=l.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
}

int main(){
    list<int> l;
    l.push_back(10);
    l.push_back(20);
    l.push_back(30);
    l.push_back(40);
    printList(l);
    cout<<"容器的大小为："<<l.size()<<endl;
    //l.clear();
    if(l.empty()){
        cout<<"容器为空！"<<endl;
    }
    else{
        cout<<"容器不为空！"<<endl;
    }
    l.resize(10);
    printList(l);

    l.resize(15,88);
    printList(l);
}