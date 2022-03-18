#include<iostream>
#include<map>
using namespace std;

/*
1、find(key);   //查找key是否存在，如果存在，返回该键元素的迭代器，若不存在，返回set.end();     注：返回的是迭代器
                //查找时，如果key并不在容器中，那么，编译器会自动把该key添加进容器，并且给value 赋上默认值 0
2、cout(key);   //统计key元素个数
*/

void printMap(map<int,int>& m){
    for(map<int,int>::iterator it=m.begin();it!=m.end();it++){
        cout<<"Key="<<(*it).first<<"\tvalue="<<it->second<<endl;
    }
    cout<<endl;
}

int main(){
    map<int,int> m;
    m.insert(pair<int,int>(1,10));
    m.insert(pair<int,int>(3,30));
    m.insert(pair<int,int>(5,50));
    m.insert(pair<int,int>(8,80));
    m.insert(pair<int,int>(2,20));
    printMap(m);

    map<int,int>::iterator pos=m.find(3);
    if(pos!=m.end())
        cout<<"Key="<<pos->first<<"\tValue="<<pos->second<<endl;
    else
        cout<<"该元素不存在"<<endl;

    //map不允许插入重复的数据，所以count的结果一般只有0 和 1
    int num=m.count(1);
    cout<<"map中的num="<<num<<endl;

    cout<<m[10]<<endl;

    //multimap可以插入重复的数据，所以count的结果可以有很多种
    multimap<int,int> mtp;
    mtp.insert(pair<int,int>(1,10));
    mtp.insert(pair<int,int>(1,30));
    mtp.insert(pair<int,int>(1,50));
    mtp.insert(pair<int,int>(1,80));
    mtp.insert(pair<int,int>(2,20));
    num=mtp.count(1);
    cout<<"multimap中的num="<<num<<endl;

}
