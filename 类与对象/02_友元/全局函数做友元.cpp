#include<iostream>
#include<string>
using namespace std;

class Building
{
    //goodGay 是 Building 的友元，可以方位Building中的私有成员
    friend void goodGay(Building &B);

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
void goodGay(Building &B)
{
    cout<<"好基友全局函数正在访问："<<B.livingRoom<<endl;
    cout<<"好基友全局函数正在访问："<<B.bedRoom<<endl;
}
int main()
{
    Building B;
    goodGay(B);

}