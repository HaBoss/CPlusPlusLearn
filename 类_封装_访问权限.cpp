#include<iostream>
#include<string>
using namespace std;
/*三种访问权限
1、公共权限  public         类内可以访问，类外也可以访问；
2、保护权限  protected      类内可以访问，该类的子类也可以访问；
3、私有权限  private        只有该类内才能访问，子类也不能访问；*/

class Person
{
    int id;     //如果不申明权限，则默认为私有权限
    public:                 
        string name;
    protected:
        string m_Car;
    private:
        int m_Password;
    public:
        void func()
        {
            name="张三";
            m_Car="拖拉机";
            m_Password=123456;
        }
};
int main()
{
    Person per;
    per.name="李四";
    //per.m_Car="兰博基尼";             保护权限，类外不能访问
    //cout<<per.m_Password<<endl;      私有权限，类外不能访问 
    cout<<per.name<<endl;
    return 0;
}