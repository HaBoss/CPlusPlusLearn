#include<iostream>
using namespace std;

//发现是引用，转化为 int* const ref=&a;
void func(int &ref)
{
    ref=100; //ref是引用，转化为*ref=100;    
}

int main()
{
    int a=10;

    //自动转为为int *const ref=&a;指针常量，指针的指向不可以改变，这也说明了为什么引用不可以改变
    int &ref=a; //内部发现是引用，自动帮我们帮我们转化为 *ref=&a;
    cout<<"a="<<a<<endl;
    cout<<"ref="<<ref<<endl;
    cout<<"============="<<endl;
    func(a);
    cout<<"a="<<a<<endl;
    return 0;
}