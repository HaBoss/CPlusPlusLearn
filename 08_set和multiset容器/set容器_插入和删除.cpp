#include<iostream>
#include<set>
using namespace std;

/*
1、insert(elem);    //插入元素
2、clear(); //清楚所有元素
3、erase(pos);  //删除pos 迭代器所指的元素，返回下一个元素的迭代器
4、erase(beg,end);  //删除[pos,end)区间的元素，返回下一个元素的迭代器
5、erase(elem); //删除容器中值为elem 的元素
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

    set<int>::iterator it=s.begin();
    it++;
    s.erase(it);
    printSet(s);

    s.erase(++s.begin(),--s.end());
    printSet(s);

    s.erase(2);
    printSet(s);

    s.clear();
    if(s.empty())
        cout<<"s为空"<<endl;
    else
        cout<<"s的大小为："<<s.size()<<endl;


}