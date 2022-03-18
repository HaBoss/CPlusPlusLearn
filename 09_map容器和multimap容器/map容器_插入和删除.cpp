#include<iostream>
#include<map>
using namespace std;

/*
1、insert(elem);    //elem需要使用对组pair
2、clear();
3、erase(pos);  //删除pos 迭代器所指的元素，返回下一个元素的迭代器
4、erase(beg,end); 
5、erase(key);  //删除容器中键值为Key 的元素
*/

void printMap(map<int,int>& m){
    for(map<int,int>::iterator it=m.begin();it!=m.end();it++){
        cout<<"Key="<<(*it).first<<"\tvalue="<<it->second<<endl;
    }
    cout<<endl;
}

int main(){
    map<int,int> m;
    //插入1
    m.insert(pair<int,int>(1,10));
    m.insert(pair<int,int>(2,20));

    //插入2
    m.insert(make_pair(3,30));

    //插入3
    m.insert(map<int,int>::value_type(5,50));

    //插入4
    m[8]=80;

    //使用[]查询的时候，如果map中并没有对应的key值，那么便会自动创建一个 相应的key值，并且，value=0；
    //所以，一般插入少用[]
    cout<<m[10]<<endl;

    printMap(m);

    //删除键值为key的元素
    m.erase(3);
    printMap(m);

    //用迭代器删除最后一个元素
    map<int,int>::iterator it=m.end();
    it--;
    m.erase(it);
    printMap(m);

    m.insert(pair<int,int>(1,10));
    m.insert(pair<int,int>(3,30));
    m.insert(pair<int,int>(5,50));
    m.insert(pair<int,int>(8,80));
    m.insert(pair<int,int>(2,20));

    //删除区间
    m.erase(++m.begin(),--m.end());
    printMap(m);

    //清空
    m.clear();
    if(m.empty())
        cout<<"空"<<endl;
    else
        cout<<"m的大小为："<<m.size()<<endl;

}
