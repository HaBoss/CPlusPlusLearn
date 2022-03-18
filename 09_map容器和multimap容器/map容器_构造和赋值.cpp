#include<iostream>
#include<map>
using namespace std;

/*字典
1、map中所有元素都是pair
2、pair中第一个元素为key(键值), 起到索引作用,第二个元素为value(实值)
3、所有元素都会根据元素的键值自动排序

map  multimap是关联式容器，底层使用二叉树实现
*/

/*
map容器和multimap 的区别：
map 中不能有重复的 key 值，而multimap 中可以有
*/

/*
构造：
1、map<T> mp;
2、map(const map& mp);  //拷贝构造

赋值：
3、map& operator=(const map& mp);   //重载=
*/
void printMap(map<int,int>& mp){
    for(map<int,int>::iterator it=mp.begin();it!=mp.end();it++){
        cout<<"Key="<<(*it).first<<"\tValue="<<(*it).second<<endl;
    }
    cout<<endl;
}

int main(){
    map<int,int> mp;
    //map容器中所有元素都是成对出现的，插入数据的时候，要使用对组
    mp.insert(pair<int,int>(1,10));
    mp.insert(pair<int,int>(3,30));
    mp.insert(pair<int,int>(5,50));
    mp.insert(pair<int,int>(8,80));
    mp.insert(pair<int,int>(2,20));
    //map 中不会有重复的Key
    mp.insert(pair<int,int>(1,20));
    printMap(mp);

    //拷贝
    map<int,int> mp2(mp);
    printMap(mp2);

    //operator=
    map<int,int> mp3;
    mp3=mp;
    printMap(mp3);

}
