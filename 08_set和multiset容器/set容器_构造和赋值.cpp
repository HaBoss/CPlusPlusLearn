#include<iostream>
#include<set>
using namespace std;

/*
set 和 multiset 的区别：
注：set 中不能又重复的元素，而multiset 中可以有
*/

/*
1、set<T> st;
2、set(const set& st);

3、set& operator=(const set& st);   //重载=
*/

void printSet(set<int>& s){
    for(set<int>::iterator it=s.begin();it!=s.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
}

void printMultiset(multiset<int>& mt){
    for(multiset<int>::iterator it=mt.begin();it!=mt.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
}

void test01(){
    set<int> s;
    //因为set 和 multiset是关联式容器，底层是用二叉树实现的，里面是一个无序的，所以不能用push来往里面添加元素，只能用insert
    s.insert(10);
    s.insert(3);
    s.insert(20);
    s.insert(12);
    s.insert(20);
    s.insert(1);
    //set容器的特点：
    //所有的元素，在插入的时候，会自动排序，而且不允许有重复的元素
    pair<set<int>::iterator,bool> ret=s.insert(50);
    if(ret.second)
        cout<<"插入成功"<<endl;
    else
        cout<<"插入失败"<<endl;
    printSet(s);

    set<int> s2;
    s2=s;
    printSet(s2);

}
void test02(){
    //multiset特点
    //和set一样，但是，它可以允许有重复的元素   
    multiset<int> mt;
    mt.insert(10);
    mt.insert(3);
    mt.insert(20);
    mt.insert(12);
    mt.insert(20);
    mt.insert(1);
    printMultiset(mt);
}
int main(){
    test01();
    //test02();

}