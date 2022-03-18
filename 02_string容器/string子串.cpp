#include<iostream>
#include<string>
using namespace std;

/*
string substr(int pos,int n=npos)const; //返回一个从pos开始，n个字符的字串
*/

//使用操作
void test()
{
    string email="zhangsan@qq.com";
    int pos=email.find('@');
    string usrName=email.substr(0,pos);
    cout<<usrName<<endl;
}
int main()
{
    string str1="hello world";
    string str2=str1.substr(4,4);
    cout<<str2<<endl;

    test();
}