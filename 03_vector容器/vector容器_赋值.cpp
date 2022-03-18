#include<iostream>
#include<vector>
using namespace std;

/*
1、vector& operator= (const vector& vec);    //重载等号赋值
2、assign(beg,end); //将[beg,end) 区间数据拷贝赋值给本身
3、assign(n,elem);  //将n个 elem 赋值给本身
*/

void PrintVector(vector<int>& vec)
{
    for(vector<int>::iterator it=vec.begin();it<vec.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}

int main()
{
    vector<int> v1;
    for(int i=0;i<10;i++)
    {
        v1.push_back(i);
    }
    PrintVector(v1);

    //1、重载等号赋值 operator=
    vector<int> v2;
    v2=v1;
    PrintVector(v2);

    //通过函数区间赋值
    vector<int> v3;
    v3.assign(v2.begin()+1,v2.end());
    PrintVector(v3);

    //n 个 elem
    vector<int> v4;
    v4.assign(10,8);
    PrintVector(v4);
    

}