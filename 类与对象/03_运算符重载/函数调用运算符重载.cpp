#include<iostream>
#include<string>
using namespace std;

/*仿函数非常灵活，没有固定的写法*/
class MyAdd //加法
{
    public:
        int operator()(int a,int b)
        {
            return a+b;
        }
};
class MyPrint   //打印
{
    public:
        void operator()(string test)
        {
            cout<<test<<endl;
        }
};
void test01()
{
    MyAdd m_add;
    int ret=m_add(10,23);   //由于使用起来非常类似函数的调用，所以被称为仿函数
    cout<<"ret="<<ret<<endl;
    //匿名函数对象
    cout<<MyAdd()(100,120)<<endl;
}

void test02()
{
    MyPrint m_print;
    m_print("hello world!");
}
int main()
{
    test01();
    test02();
}