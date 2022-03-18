#include<iostream>
#include<string>
using namespace std;

class Building;
class GoodGay
{
    public:
        GoodGay();
        void visit();   //可以访问Building中的私有成员
        void novisit(); //不可以访问Building中的私有成员
    private:
        Building *building;
};

class Building
{
    //成员函数 visit 做 Building 类的友元
    friend void GoodGay::visit();
    public:
        string livingRoom;
        Building()
        {
            livingRoom="客厅";
            bedRoom="卧室";
        }
    private:
        string bedRoom;
};

GoodGay::GoodGay()
{
    building =new Building;
}

void GoodGay::visit()
{
    cout<<"visit 函数正在访问："<<building->livingRoom<<endl;
    cout<<"visit 函数正在访问："<<building->bedRoom<<endl;
}
void GoodGay::novisit()
{
    cout<<"novisit 函数正在访问："<<building->livingRoom<<endl;
    //cout<<"novisit 函数正在访问："<<building->bedRoom<<endl;
}

int main()
{
    GoodGay gg;
    gg.visit();
    cout<<"============================================"<<endl;
    gg.novisit();
}