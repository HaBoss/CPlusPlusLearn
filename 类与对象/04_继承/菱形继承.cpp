#include<iostream>
using namespace std;

class Animal
{
    public:
        int m_age;
};
/*利用虚继承解决菱形继承问题
在继承前，加上关键字 virtual 变成虚继承
Animal 类称为虚基类*/
class Sheep:virtual public Animal{};
class Tuo:virtual public Animal{};

class SheepTuo:public Sheep,public Tuo{};
int main()
{
    SheepTuo st;
    st.Sheep::m_age=18;
    st.Tuo::m_age=20;
    //菱形继承，两个父类拥有相同的数据，调用时需要用作用域加以区分
    cout<<"st.Sheep::m_age="<<st.Sheep::m_age<<endl;
    cout<<"st.Tuo::m_age="<<st.Tuo::m_age<<endl;
    cout<<"st.m_age="<<st.m_age<<endl;
}