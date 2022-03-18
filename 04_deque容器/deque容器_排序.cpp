#include<iostream>
#include<deque>
using namespace std;
#include<algorithm>

/*
sort(iterator beg,iterator end);    //对[beg,end)区间内的元素进行排序
    begin()指向第一个元素，end()指向最后一个元素的后面
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

    sort(d.begin(),d.end()-1);
    PrintDeque(d);

    return 0;
}