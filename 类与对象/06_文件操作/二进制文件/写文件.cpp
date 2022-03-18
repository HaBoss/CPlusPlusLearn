#include<iostream>
//1、包含头文件
#include<fstream>
using namespace std;

class Person
{
    public:
        char m_name[20];
        int m_age;
};
void test01()
{
    //2、创建流对象
    ofstream ofs;
    //3、打开文件
    ofs.open("text.txt",ios::out | ios::binary);
    //2、3可以合二为一，  ofstream ofs("text.txt",ios::out | ios::binary);

    //4、写文件
    Person p={"张三",18};
    ofs.write((const char *)&p,sizeof(Person));

    //5、关闭文件
    ofs.close();

}
int main()
{
    test01();
}