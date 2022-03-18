#include<iostream>
#include<set>
using namespace std;

//默认排序规则为从小到大
//利用仿函数，可以改变排序规则

class Compare{
    public:
        bool operator()(int v1,int v2){
            return v1>v2;
        }
};

void printSet(set<int>& s){
    for(set<int>::iterator it=s.begin();it!=s.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
}

int main(){
    set<int> s;
    s.insert(10);
    s.insert(20);
    s.insert(2);
    s.insert(34);
    s.insert(3);
    printSet(s);

    
    //指定排序规则为从大到小
    set<int ,Compare> s2;
    s2.insert(10);
    s2.insert(20);
    s2.insert(30);
    s2.insert(40);
    s2.insert(50);
    for(set<int,Compare>::iterator it=s2.begin();it!=s2.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;

}