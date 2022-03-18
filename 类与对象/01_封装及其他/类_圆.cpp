#include<iostream>
using namespace std;

const double PI=3.14;

class Circle
{
    public:
    int m_r;
    double perimeter()
    {
        return 2*PI*m_r;
    }
};

int main()
{
    Circle cir;
    cir.m_r=10;
    cout<<"cir的周长为："<<cir.perimeter()<<endl;
    return 0;
}