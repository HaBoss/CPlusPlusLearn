#include<iostream>
#include<string>
using namespace std;

/*string 的本质：   string是c++风格的一个字符串，而string本质上的是一个类*/

/*char * 和 string  的区别
    char *是一个指针
    string 是一个类，在这个类里面封装了char * ,管理这个字符串，是一个char * 的容器
*/

/*
string构造函数的原型

1、string()                     //创建一个空的字符串 ，例如 string str;
2、string(const char *s1)       //使用字符串s1初始化
3、string(const string &s1)     //使用一个string对象初始化另一个string的对象    拷贝构造
4、string(int n,char c)         //使用n个字符c初始化
*/

int main()
{
    string s1 ; //默认构造

    string s2 ="hello world";
    cout<<"s2="<<s2<<endl;

    string s3(s2);
    cout<<"s3="<<s3<<endl;

    string s4(10,'a');
    cout<<"s4="<<s4<<endl;
}