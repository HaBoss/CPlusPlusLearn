#include<iostream>
#include<vector>
using namespace std;

/*实现两个容器内元素互换
swap(vec);  //将vec 与本身元素进行互换
*/

void PrintVector(vector<int>& vec)
{
    for(vector<int>::iterator it=vec.begin();it!=vec.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}

//元素互换
void test01()
{
    cout<<"交换前-----------------------"<<endl;
    vector<int> v1;
    for(int i=0;i<8;i++)
    {
        v1.push_back(i);
    }
    cout<<"v1: ";
    PrintVector(v1);

    vector<int> v2;
    for(int i=10;i>0;i--)
    {
        v2.push_back(i);
    }

    cout<<"v2: ";
    PrintVector(v2);

    cout<<"交换后-----------------------"<<endl;
    v1.swap(v2);
    cout<<"v1: ";
    PrintVector(v1);
    cout<<"v2: ";
    PrintVector(v2);
}

//巧用swap收缩内存
void test02()
{
    vector<int> v1;
    for(int i=0;i<100001;i++)
    {
        v1.push_back(i);
    }
    cout<<"v1 的容量："<<v1.capacity()<<endl;
    cout<<"v1 的大小："<<v1.size()<<endl;

    v1.resize(3);
    cout<<"v1 的容量："<<v1.capacity()<<endl;
    cout<<"v1 的大小："<<v1.size()<<endl;

    //巧用swap 收缩内存
    cout<<"收缩后："<<endl;
    vector<int> (v1).swap(v1);
    cout<<"v1 的容量："<<v1.capacity()<<endl;
    cout<<"v1 的大小："<<v1.size()<<endl;

}
int main()
{
    //test01();
    test02();
}