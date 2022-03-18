#include<iostream>
#include<string>
using namespace std;

/*查找 ,找到了就返回查找到的字符的位置，否则，返回-1

1_1、int find(const string& str,int pos =0)const;  //查找字符串str，从0开始第一次出现的位置
1_2、int find(const char* s,int pos=0)const;   //查找字符串s第一次出现的位置，从0开始
2、  int find(cosnt char* s,int pos=0,int n) const;    //查找字符串s从0开始后的n个字符中，第一次出现的位置
3、  int find(const char c,int pos=0)const; //查找字符c第一次出现的位置，从0开始
4_1、int rfind(const string& str,int pos=npos)const;    //查找str最后一次出现的位置，从pos 开始查找
4_2、int rfind(const char* s,int pos=npos)const;    //查找s最后一次出现的位置，从pos开始查找
5、  int rfind(const char* s,int pos,int n)const;   //从pos开始查找前n个字符中，s最后一次出现的位置
6、  int rfind(const char c,int pos=0)const;    //从0开始，查找c最后一次出现的位置
*/

void test_find()
{
    string str1="abcdefg";
    //int pos=str1.find("de");
    string str1_2="ef";
    int pos=str1.find(str1_2);
    cout<<"pos="<<pos<<endl;

    string str2="abcabcabcd";
    int pos2=str2.find("abc",4);
    cout<<"pos2="<<pos2<<endl;

    string str3="abc";
    //int pos3=str2.rfind("abc");
    int pos3=str2.rfind(str3);
    cout<<"pos3="<<pos3<<endl;

    int pos4=str2.rfind("abc",5);
    cout<<"pos4="<<pos4<<endl;
}

/*替换
1、string&(int pos,int n,const string& str);    //替换从pos开始的n个字符为字符串str
2、string&(int pos,int n,const char *s);    //同上
*/

void test_replace()
{
    string str1="abcdefghijk";
    string str2="88888";
    str1.replace(1,3,"6666");
    str1.replace(1,4,str2);
    cout<<str1<<endl;
}
int main()
{
    //test_find();
    test_replace();
}