#include<iostream>
#include<list>
using namespace std;

/*
1、back();  //返回最后一个元素
2、front(); //返回第一个元素
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
    l.push_back(60);
    l.push_back(20);
    l.push_back(20);
    l.push_back(80);
    printList(l);

    cout<<l.back()<<endl;
    cout<<l.front()<<endl;

    list<int>::iterator it=l.begin();
    it++;   //true,因为是双向的
    it--;
    //it = it+1;  //false, 不支持随机访问，因为这是链表
}