#include<iostream>
#include<list>
using namespace std;

//链表
/*
函数原型
1、list<T> lst; 
2、list(beg,end);   //构造函数，将[beg,end)区间的元素拷贝给本身
3、list(n,elem);    //将b 个 elem 拷贝给本身
4、list(const list& lst);   //拷贝构造
*/

void PrintList(const list<int>& lst){
    for(list<int>::const_iterator it=lst.begin();it!=lst.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
}
int main(){
    list<int> lst;
    lst.push_back(10);
    lst.push_back(20);
    lst.push_back(30);
    lst.push_front(100);
    lst.push_front(200);
    lst.push_front(300);
    PrintList(lst);

    //区间
    list<int> L2(lst.begin(),lst.end());
    PrintList(L2);

    //拷贝
    list<int> L3(L2);
    PrintList(L3);

    //n 个 elem
    list<int> L4(10,100);
    PrintList(L4);
}