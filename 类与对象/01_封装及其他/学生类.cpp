#include<iostream>
#include<string>
using namespace std;

class Student
{
public: //公共权限
    /*类中的属性和行为都称作 成员*/
    //属性  成员属性、成员变量
    string s_name;
    int s_sno;
    //行为  成员函数、成员方法
    void Show()
    {
        cout<<"name:"<<s_name<<"\nsno:"<<s_sno<<endl;
    }
    void set(string name,int sno)
    {
        s_name=name;
        s_sno=sno;
    }
};
int main()
{
    Student stu;
    // stu.s_name="张三";
    // stu.s_sno=101;
    stu.set("张三",101);

    stu.Show();
    return 0;
}