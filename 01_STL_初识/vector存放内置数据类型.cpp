#include<iostream>
#include<vector>
using namespace std;
#include<algorithm>     //标准算法的头文件

void myPrint(int val)
{
    cout<<val<<endl;
}

//voctor 容器，存放内置数据类型
void test01()
{
    //创建一个vector容器  类似数组
    vector<int> v;

    //往容器中插入数据
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);

    //通过迭代器访问容器中的数据
    //vector<int>::iterator  拿到一个vector<int>容器的迭代器的类型
    vector<int>::iterator itBegin=v.begin();    //起始迭代器 指向容器中的第一个元素
    vector<int>::iterator itEnd =v.end();   //结束迭代器，指向容器中最后一个元素的下一个位置

    // //第一种便遍历方法
    // while(itBegin!=itEnd)
    // {
    //     cout<<*itBegin<<endl;
    //     itBegin++;
    // }

    // //第二种遍历方法
    // for(vector<int>::iterator it=v.begin();it!=v.end();it++)
    // {
    //     cout<<*it<<endl;
    // }

    //第三种遍历方法
    //使用STL提供的标准遍历算法
    for_each(v.begin(),v.end(),myPrint);

}
int main()
{
    test01();
}