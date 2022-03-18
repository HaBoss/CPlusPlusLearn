#include<iostream>
using namespace std;
void ShowValue(int &ref)//每加const就可以修改引用的值
{
    ref=666;
    cout<<"ref="<<ref<<endl;
}
void ShowValue2(const int &ref) //加了const之后，就不能在修改了，防止误操作
{
    //ref=1900;
    cout<<"ref="<<ref<<endl;
}
int main()
{
    int a=10;
    int &ref1=a;

    //int &ref2=10;    //引用必须引用一块合法的内存空间
    const int &ref3=10;//加上const之后，编译器将他修改为：int temp=10; const int &ref3=temp; 注：这个temp是随意写的，具体名字未知
   // ref3=20;  //加了const之后，变为只读，不可修改
   int b=10;
    ShowValue(a);
    cout<<"=============="<<endl;
    ShowValue2(b);
}