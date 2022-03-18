#include<iostream>
#include<deque>
using namespace std;

/*
1、at(int idx); //返回索引idx所指的数据
2、operator[];  //返回索引idx所指的数据
3、front(); //返回第一个数据
4、back();  //返回最后一个数据
*/

void PrintDeque(deque<int>& d){
    for(deque<int>::iterator it=d.begin();it!=d.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
}

int main(){
    deque<int> d;
    d.push_back(10);
    d.push_back(20);
    d.push_back(30);
    d.push_front(100);
    d.push_front(200);
    d.push_front(300);
    PrintDeque(d);

    //at
    cout<<d.at(2)<<endl;

    //operator[]
    cout<<d[3]<<endl;

    //front()
    cout<<d.front()<<endl;

    //back()
    cout<<d.back()<<endl;
}