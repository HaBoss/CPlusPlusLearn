#include<iostream>
using namespace std;
int func(int a,int b=20,int c=30)//如果有自己传入的数据，就用传入的，没有就用默认的
{
    return a+b+c;
}

/*注意事项：1、如果某个位置有了默认参数，那么从他开始到最后的每一个都得有默认参数，不然就会报错*/
// int func2(int a,int b=30,int c)
// {
//      return a+b+c;
// }

/*2、如果函数的申明有了默认参数，那么函数的实现就不能在有默认参数;
    申明和实现中只能有一个有默认参数*/
// int func3(int a=10,int b=30);
// int func3(int a=10,int b=30)
// {
//     return a+b;
// }
int func4(int a,int b);
int func4(int a=10,int b=30)
{
    return a+b;
}

int main()
{
    cout<<func(10)<<endl;
    cout<<func(10,30)<<endl;
    cout<<"==================="<<endl;
    cout<<func4()<<endl;
    return 0;
}