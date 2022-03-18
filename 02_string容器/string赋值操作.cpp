#include<iostream>
#include<string>
using namespace std;

/*
(1) 用 = 号
1、 string& operator=(const char* s)    //char*类型字符串赋给当前字符串
2、 string& operator=(const string& str)    //把字符串str 赋给当前字符串
3、 string& operator=(char c)   //把字符赋值给当前字符串

(2) 用 容器内置函数 assign
1、 string& assign(const char* s)   //把字符串s赋值给当前字符串

2.1、 string& assign(const char* s ,int n)    //把字符串s 的前n 个赋值给当前字符串
2.2、 string& assign(const string& str, int start, int n) //把字符串str ，从start开始的 n个字符赋值给 当前字符串, n 可以省略，默认到末尾

3、 string& assign(const string& str)   //把字符串str 赋值给当前字符串
4、 string7 assing(int n,char c)    //用 n 个 字符 c 赋值给当前字符串
*/

int main()
{
    string str1;
    str1="hello world";
    cout<<"str1="<<str1<<endl;

    string str2;
    str2=str1;
    cout<<"str2="<<str2<<endl;

    string str3;
    str3='c';
    cout<<"str3="<<str3<<endl;
    cout<<"==================="<<endl;

    string str4;
    str4.assign("hello C++");
    cout<<"str4="<<str4<<endl;

    //string& assign(const char* s ,int n)    //把字符串s 的前n 个赋值给当前字符串
    string str5_1;      
    str5_1.assign("hello C++",5);
    cout<<"str5_1="<<str5_1<<endl;

    //string& assign(const string& str, int start, int n) //把字符串str ，从start开始的 n个字符赋值给 当前字符串, n 可以省略，默认到末尾
    string str5_2;
    str5_2.assign(str4,4,4);
    cout<<"str5_2="<<str5_2<<endl;

    string str6;
    str6.assign(str5_2);
    cout<<"str6="<<str6<<endl;

    string str7;
    str7.assign(8,'c');
    cout<<"str7="<<str7<<endl;
}