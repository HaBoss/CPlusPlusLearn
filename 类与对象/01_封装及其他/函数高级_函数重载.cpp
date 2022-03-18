#include<iostream>
using namespace std;
/*函数重载满足的条件：
1、在同一个作用域之下
2、函数名相同
3、函数的参数类型不同、或者参数个数不同、或者参数的顺序不同*/
 void func()
 {
     cout<<"调用的是func()函数"<<endl;
 }

 void func(int a)
 {
     cout<<"调用的是func(int a)函数"<<endl;
 }

 void func(double a)
 {
     cout<<"调用的是func(double a)函数"<<endl;
 }

 void func(double b,int a)
 {
     cout<<"调用的是func(doubel b,int a)函数"<<endl;
 }
 int main()
 {
     func();
     func(10);
     func(3.14);
     func(3.13,9);
     return 0;
 }