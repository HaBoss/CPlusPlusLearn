#include<iostream>
#include<vector>
using namespace std;

/*函数原型
empty() //判断容器是否为空
capacity()  //判断容器的容量
size()  //判断容器的大小

resize(int num);    //重新指定容器的大小  如果容器变成，多出的那部分默认填充0
                                        如果变短，则删除多余的部分
resize(int num,elem);   //如果容器变成，多出的那部分填充 elem
                          如果变短，则删除多余的部分    

*/
void PrintVector(vector<int>& vec)
{
    for(vector<int>::iterator it=vec.begin();it!=vec.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}
/*vector容器 容量和大小操作*/
int main()
{
    vector<int> v;
    if(v.empty())   //为真代表容器为空
    {
        cout<<"v 为空！"<<endl;
    }
    for(int i=0;i<10;i++)
    {
        v.push_back(i);
    }
    if(!v.empty())
    {
        cout<<"v bu为空！"<<endl;
        cout<<"v 的容量为："<<v.capacity()<<endl;
        cout<<"v 的大小为："<<v.size()<<endl;
    }
    PrintVector(v);

    //重新指定大小   超出
    // v.resize(15);    //多余部分默认用 0 填充
    // PrintVector(v);

    //重载版本
    v.resize(15,100);   //利用重载版本，可以指定更改默认的数值，如果小于原来的小大，则没有影响
    PrintVector(v);

    //小于原来的大小，超出部分会删除
    v.resize(5);
    PrintVector(v);

}