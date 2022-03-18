#include<iostream>
#include<string>
using namespace std;

/*
(1) 用 += 号进行连接
1、string& operator+=(const char* s)
2、string& operator+=(const string &str)
3、string& operator+=(const char c)

(2) 用 内置函数append 进行连接
4、 string& append(const char* s)
5、 string& append(const char* s,int n)
6、 string& append(const string& str)
7、 string& append(const string& str,int pos, int n) 
*/

int main()
{
    string str1="我";
    str1+="爱玩游戏";
    cout<<str1<<endl;

    string str2="嘿嘿，";
    str2+=str1;
    cout<<str2<<endl;

    string str3="ha";
    str3+='i';
    cout<<str3<<endl;
    cout<<"===================="<<endl;

    string str4="hello";
    str4.append(" world");
    cout<<str4<<endl;

    string str5="world ";
    str5.append("hello world",3);
    cout<<str5<<endl;

    string str6="ping";
    str6.append(str3);
    cout<<str6<<endl;

    string str7;
    str7.append(str4,0,7);
    cout<<str7<<endl;
}