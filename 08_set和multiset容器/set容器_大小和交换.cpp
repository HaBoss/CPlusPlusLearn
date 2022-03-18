#include<iostream>
#include<set>
using namespace std;

/*
1、size();
2、empty();
3、swap(st);
*/
void printSet(set<int>& s){
    for(set<int>::iterator it=s.begin();it!=s.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
}
int main(){
    set<int> s1;
    s1.insert(10);
    s1.insert(30);
    s1.insert(20);
    s1.insert(8);
    s1.insert(40);
    printSet(s1);
    if(s1.empty()){
        cout<<"s1为空"<<endl;
    }
    else{
        cout<<"s1的大小为："<<s1.size()<<endl;
    }

    set<int> s2;
    s2.insert(100);
    s2.insert(300);
    s2.insert(200);
    s2.insert(80);
    s2.insert(400);
    printSet(s2);
    cout<<"交换后："<<endl;
    s1.swap(s2);
    printSet(s1);
    printSet(s2);
}