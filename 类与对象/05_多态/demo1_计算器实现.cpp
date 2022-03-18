#include<iostream>
using namespace std;
//利用多态实现计算器

/*多态的好处
1、组织结构清晰
2、可读性强
3、对于前期和后期拓展维护性高*/

//抽象计算器类
class AbstractCalculator
{
    public:
        int num1,num2;
        virtual int getResult()
        {
            return 0;
        }
};
//加法类
class AddCalculator:public AbstractCalculator
{
    public:
        int getResult()
        {
            return num1+num2;
        }
};
//减法类
class SubCalculator:public AbstractCalculator
{
    public:
        int getResult()
        {
            return num1-num2;
        }
};
//乘法类
class Mulcalculator:public AbstractCalculator
{
    public:
        int getResult()
        {
            return num1*num2;
        }
};

void test01()
{
    AbstractCalculator *ac=new AddCalculator;
    ac->num1=100;
    ac->num2=100;
    cout<<ac->num1<<"+"<<ac->num2<<"="<<ac->getResult()<<endl;
    delete ac;  //开辟的堆区的数据，用完及时清理
    
    ac=new SubCalculator;
    ac->num1=100;
    ac->num2=100;
    cout<<ac->num1<<"-"<<ac->num2<<"="<<ac->getResult()<<endl;
    delete ac;

    ac=new Mulcalculator;
    ac->num1=100;
    ac->num2=100;
    cout<<ac->num1<<"*"<<ac->num2<<"="<<ac->getResult()<<endl;
    delete ac;
}
int main()
{
    test01();
}