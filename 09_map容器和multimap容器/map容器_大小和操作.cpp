#include<iostream>
#include<map>
using namespace std;

/*
1、size();
2、empty();
3、swap(st);
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

    if(m.empty())
        cout<<"m 为空"<<endl;
    else    
        cout<<"m 的大小为："<<m.size()<<endl;

    map<int,int> m2;
    m2.insert(pair<int,int>(11,120));
    m2.insert(pair<int,int>(31,320));
    m2.insert(pair<int,int>(51,520));
    m2.insert(pair<int,int>(81,820));
    m2.insert(pair<int,int>(21,220));
    printMap(m);
    cout<<"交换后："<<endl;
    m.swap(m2);
    cout<<"m:"<<endl;
    printMap(m);
    cout<<"m2:"<<endl;
    printMap(m2);

}