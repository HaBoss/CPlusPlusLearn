#include<iostream>
#include<vector>
using namespace std;

/*
1、at(int idx); //返回索引 idx 位置所存储的数据
2、operator[idx];   //返回索引 idx 位置所存储的数据
3、front(); //返回容器中第一个数据
4、back();  //返回容器中最后一个数据
*/

void PrintVector(vector<int>& vec)
{
    for(vector<int>::iterator it=vec.begin();it!=vec.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}

int main()
{
    vector<int> v;
    for(int i=10;i>0;i--)
    {
        v.push_back(i);
    }

    //通过函数 at 查找
    cout<<v.at(3)<<endl;

    //通过重载运算符 operator[]
    cout<<v[3]<<endl;

    //返回第一个元素
    cout<<"v 中第一个元素："<<v.front()<<endl;
    
    //返回最后一个元素
    cout<<"v 中最后一个元素："<<v.back()<<endl;
}
