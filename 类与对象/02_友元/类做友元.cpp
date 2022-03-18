#include<iostream>
#include<string>
using namespace std;

class Building;
class GoodGay
{
    public:
        GoodGay();
        void visit();   //访问Building中的属性
    private:
        Building *building;
};
class Building
{
    //让 GoodGay类 成员 Building 类的友元
    friend class GoodGay;
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
//在类外写成员函数
GoodGay::GoodGay()
{
    building=new Building;
}
void GoodGay::visit()
{
    cout<<"好基友类正在参观："<<building->livingRoom<<endl;
    cout<<"好基友类正在参观："<<building->bedRoom<<endl;
}
int main()
{
    GoodGay gg;
    gg.visit();
}