#include<iostream>
#include<string>
using namespace std;

class MyInteger
{
    friend ostream &operator<<(ostream &cout,MyInteger myint);
    public:
        MyInteger()
        {
            m_num=0;
        }
        //重载前置++  --的同理
        MyInteger &operator++()
        {
            ++m_num;
            return *this;
        }

        //重载后置++
        //int 代表占位符，可以用于区分前置和后置递增
        MyInteger operator++(int)
        {
            MyInteger temp= *this;
            m_num++;
            return temp;
        }
    private:
        int m_num;
};

ostream &operator<<(ostream &cout,MyInteger myint)
{
    cout<<"m_num="<<myint.m_num<<endl;
    return cout;
}
int main()
{
    MyInteger myint;
    cout<<++(++myint)<<"----------"<<endl;
    cout<<myint;
    cout<<"=========="<<endl;
    cout<<myint++<<"-----------"<<endl;
    cout<<myint;
}