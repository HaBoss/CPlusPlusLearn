#include<iostream>
#include<list>
using namespace std;

/*
1、assign(beg,end); //将[ben,end)区间的元素拷贝给自身
2、assign(n,elem);  //将n 个 elem 拷贝给自身
3、list & operator=(const &list L); //重载等号运算符
4、swap(lst);   //将 lst 与本身元素互换
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

    //assign 区间赋值
    list<int> l2;
    l2.assign(l.begin(),l.end());
    printList(l2);

    //operator=
    list<int> l3;
    l3=l2;
    printList(l3);

    //n 个 elem
    list<int> l4;
    l4.assign(6,88);
    printList(l4);

    //swap(lst)
    list<int> l5;
    l5.push_front(11);
    l5.push_front(12);
    l5.push_front(13);
    l5.push_front(14);
    l5.push_front(15);
    l5.push_front(16);
    printList(l5);
    cout<<"交换后："<<endl;
    l.swap(l5);
    printList(l);
    printList(l5);
}