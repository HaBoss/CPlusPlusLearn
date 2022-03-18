#include<iostream>
using namespace std;

class Base
{
    public:
        int m_A;
    protected:
        int m_B;
    private:
        int m_C;
};

class son :public Base
{
    public:
        int m_D;
};

int main()
{
    //父类中的所有非静态成员属性都会被子类继承
    //只是私有权限的属性被编译器隐藏了，因此子类才访问不到，但确实是被继承了
    cout<<"sizeof(son)="<<sizeof(son)<<endl;
}