#include<iostream>
using namespace std;
//1、包含头文件
#include<fstream>   //文件操作必须包含的头文件

void test01()
{
    //2、创建流对象
    ofstream ofs;
    //3、指定打开方式
    /*  (1) ios::in  为读文件而打开文件
        (2) ios::out 为写文件而打开文件
        (3) ios::ate 初始位置文件尾
        (4) ios::app 追加方式写文件
        (5) ios::trunc 文件存在先删除，在创建
        (6) ios::binary 二进制方式
        注：如果想要多种方式配合使用，可以用 | 隔开
            如、ios::binary | ios::out */
    ofs.open("text.txt",ios::out);
    ofs<<"姓名：张三"<<endl;
    ofs<<"年龄：18"<<endl;
    ofs<<"性别：男"<<endl;
    //4、用完关闭文件
    ofs.close();
}
int main()
{
    test01();
}