#include<iostream>
#include<vector>
using namespace std;

/*
1、push_back(ele); //在容器的尾部插入 ele
2、pop_back();     //删除容器尾部的元素
3、insert(const_iterator pos,ele);     //迭代器指向位置pos 插入元素 ele
4、insert(const_iterator pos,int count,ele);   //迭代器指定位置 pos 插入 count 个元素ele
5、erase(const_iterator pos);  //删除迭代器指定位置pos 处的元素
6、erase(const_iterator start,const_iterator end);    //删除迭代器从 start 到 end 之间的元素
7、clear();    //清空容器
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
    for(int i=0;i<10;i++)
    {
        //添加元素
        v.push_back(i);
    }
    PrintVector(v);

    //删除末尾元素
    v.pop_back();
    PrintVector(v);

    //插入元素  第一个参数是迭代器
    v.insert(v.begin(),88);
    PrintVector(v);

    //插入多个重复元素
    v.insert(v.begin(),2,77);
    PrintVector(v);

    //删除 参数也是迭代器
    v.erase(v.begin());
    PrintVector(v);

    v.erase(v.begin()+1,v.end()-1);
    PrintVector(v);

    //清空容器
    v.clear();
    if(v.empty())
    {
        cout<<"容器为空"<<endl;
    }
}