#include<iostream>
//1、包含头文件
#include<fstream>
#include<string>
using namespace std;

void test01()
{
    //2、创建流对象
    ifstream ifs;
    //3、打开指定文件
    ifs.open("text.txt",ios::in);
    //4、判断文件是否被打开
    if(!ifs.is_open())  //is_open 函数，判断文件是否被打开
    {
        cout<<"打开文件失败"<<endl;
        return ;
    }
    //5、读数据
    // //方法1、
    // char buf[1024]={0};
    // while(ifs>>buf)
    // {
    //     cout<<buf<<endl;
    // }

    // //方法2
    // char buf[1024]={0};
    // while(ifs.getline(buf,sizeof(buf)))
    // {
    //     cout<<buf<<endl;
    // }

    // //方法3
    // string buf;
    // while(getline(ifs,buf))
    // {
    //     cout<<buf<<endl;
    // }

    //方法4     注：不太建议使用
    char ch;
    while((ch=ifs.get())!=EOF)
    {
        cout<<ch;
    }
    ifs.close();
}
int main()
{
    test01();
}