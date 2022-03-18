#include<iostream>
using namespace std;

//申明一个模板
template<typename T>    //template   声明创建模板
                        //typename   表面其后面得字母是一种数据类型，可以用class代替
                        //T          通用得数据类型，名称可以替换，一般用大写字母表示

//两数进行交换
void Myswap(T &a, T &b)
{
    T temp=a;
    a=b;
    b=temp;
}

int main()
{
    int a=10,b=20;
    double c=3.14,d=4.203;
    /*两种方法使用模板*/
    //1、自动类型推导
    Myswap(a,b);

    //2、显示指定推导
    Myswap<double>(c,d);

    cout<<"a="<<a<<"\nb="<<b<<endl;
    cout<<"c="<<c<<"\nd="<<d<<endl;
    return 0;
}