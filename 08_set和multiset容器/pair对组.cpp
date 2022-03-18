#include<iostream>
using namespace std;
#include<string>

/*
1、pair<type,type>  p(value1,value2);
2、pair<type,type> p=make_pair(value1,value2);
*/

int main(){
    pair<string,int>    p("张三",20);
    cout<<p.first<<"\t"<<p.second<<endl;

    pair<string,int> p2=make_pair("mimi",25);
    cout<<p2.first<<"\t"<<endl;
}
