#include<iostream>
#include<set>
using namespace std;

/*
1、find(key);   //查找key是否存在，若存在，返回该元素的迭代器，若不存在，则返回set.end();
2、count(key);  //统计key 的元素个数
*/
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
    s.insert(30);
    s.insert(40);
    s.insert(2);
    printSet(s);

    //find()返回的是迭代器，需要用迭代器接收
    set<int>::iterator it=s.find(30);
    if(it!=s.end()){
        cout<<"找到元素："<<*it<<endl;
    }
    else{
        cout<<"未找到该元素"<<endl;
    }

    //因为set中不允许有重复的元素，所以，set.cout()的结果，只有0 和 1
    cout<<"set中20 的个数为："<<s.count(20)<<endl;

    multiset<int> mt;
    mt.insert(10);
    mt.insert(20);
    mt.insert(20);
    mt.insert(20);
    mt.insert(10);
    mt.insert(20);

    //multiset中允许有重复元素存在，所以mt.count()的结果可以有很多种
    cout<<"multiset中20 的个数为："<<mt.count(20);


}