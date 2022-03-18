#include<iostream>
using namespace std;

//继承中是先构造父类，在构造子类，析构相反
class Base
{
    public:
        
        Base()
        {
            cout<<"This is Base's 构造"<<endl;
        }
        ~Base()
        {
            cout<<"This is Base's 析构"<<endl;
        }
};

class Son:public Base
{
    public:
        
        Son()
        {
            cout<<"This is Son's 构造"<<endl;
        }
        ~Son()
        {
            cout<<"This is Son's 析构"<<endl;
        }
};
int main()
{
    Son s;
}