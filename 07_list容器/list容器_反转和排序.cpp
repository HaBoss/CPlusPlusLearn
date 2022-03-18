#include<iostream>
#include<list>
using namespace std;
#include<algorithm>

/*
1、reverse();   //反转
2、sort();  //排序  从小到大
*/

void printList(const list<int>& l){
    for(list<int>::const_iterator it=l.begin();it!=l.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
}

int main(){
    list<int> l;
    l.push_back(50);
    l.push_back(20);
    l.push_back(40);
    l.push_back(40);
    l.push_back(60);
    l.push_back(30);
    printList(l);

    cout<<"反转后："<<endl;
    l.reverse();
    printList(l);

    cout<<"排序后："<<endl;
    //所有不支持随机访问迭代器的容器，不能使用标准算法
    //不支持随机访问迭代器的容器内部，会提供一些对应的算法
    //sort(l.begin(),l.end());  //false

    l.sort();
    printList(l);

}