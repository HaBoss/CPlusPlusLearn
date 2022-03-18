#include<iostream>
using namespace std;
int & func()
{
    static int a=10;    /*static是申明是静态变量，如果不加，因为数据是放在栈区，在第一次引用完后，编译器就会释放
                         静态变量存放在全局区，全局区数据在程序结束后，由系统释放*/
    return a;
}
int &func2()
{
    int a=66;
    return a;
}

int main()
{
    int &ref2=func2();
    cout<<"ref2="<<ref2<<endl;//第一会得到正确的值，因为第一次执行的时候，编译器做的保留
    cout<<"ref2="<<ref2<<endl;//第二次的结果错误，因为a的内存已经被释放了
    cout<<"================="<<endl;
    int &ref=func();
    cout<<"ref="<<ref<<endl;
    cout<<"ref="<<ref<<endl;
    cout<<"================="<<endl;
    func()=1000;  //函数的调用可以做左值
    cout<<"ref="<<ref<<endl;
    cout<<"ref="<<ref<<endl;
    return 0;
}