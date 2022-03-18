#include<iostream>
#include<vector>
using namespace std;

/*减少vector 在动态扩容时的扩展变化
reserve(int len);    //容器预留 len 个元素的位置，预留位置不做初始化，元素不能被访问
*/

void test01()
{
    int num=0;  //统计容器开辟次数
    int *p=NULL;
    vector<int> v1;

    //利用reserve 提前开辟空间
    v1.reserve(100000);
    
    for(int i=0;i<100000;i++)
    {
        v1.push_back(i);
        if(p!=&v1[0])
        {
            p=&v1[0];
            num++;
        }
    }
    cout<<num<<endl;

}
int main()
{
    test01();
}