#include<iostream>
#include<vector>
using namespace std;

/*
1、vector<T> v;    //采用模板实现类实现，普通构造函数
2、vector(v.begin(),v.end());   //将v[ begin(),end() )区间中的元素拷贝给本身
3、vector( n,elem );    //构造函数将n个 elem 拷贝给本身
4、vector( const vector& vec ); //拷贝构造函数
*/

void Print(vector<int>& vec)
{
    for(vector<int>::iterator it=vec.begin();it<vec.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}

int main()
{
    //1、vector容器构造
    vector<int> v;
    for(int i=0;i<10;i++)
    {
        v.push_back(i);
    }
    Print(v);
    
    //2、通过区间的方式构造
    vector<int> v2(v.begin(),v.end());
    Print(v2);

    //3、拷贝n个elem
    vector<int> v3(10,6);
    Print(v3);

    //4、拷贝构造
    vector<int> v4(v3);
    Print(v4);
}