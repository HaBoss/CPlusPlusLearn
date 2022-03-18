#include<iostream>
#include<string>
using namespace std;

/*c插入
1、 string& insert(int pos,const string& str)   //指定位置插入字符串
2、 string& insert(int pos,const char* s)   //同上
3、 string& insert(int pos,int n,char c)    //指定位置插入n个字符c

删除
1、 string& erase(int pos,int n=npos)   //删除从pos开始的n个字符
*/
int main()
{
    string str1="abcdefg";
    str1.insert(3,"hahah");
    cout<<str1<<endl;

    string str2="hello";
    str1.insert(3,str2);
    cout<<str1<<endl;

    str1.erase(3,10);
    cout<<str1<<endl;
}