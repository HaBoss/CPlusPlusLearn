#include<iostream>
using namespace std;

class AbstractDrinking
{
    public:
        //煮水
        virtual void Boil()=0;
        //冲泡
        virtual void Brew()=0;
        //倒入杯中
        virtual void PourInCup()=0;
        //添加辅料
        virtual void AddSomething()=0;
        //制作饮品
        void makeDrink()
        {
            Boil();
            Brew();
            PourInCup();
            AddSomething();
        }
};
//咖啡类
class Coffee:public AbstractDrinking
{
    public:
        void Boil()
        {
            cout<<"煮农夫山泉。。。"<<endl;
        }
        void Brew()
        {
            cout<<"冲泡咖啡"<<endl;
        }
        void PourInCup()
        {
            cout<<"倒入杯中。。。"<<endl;
        }
        void AddSomething()
        {
            cout<<"加入糖和牛奶"<<endl;
        }
};
class Tea:public AbstractDrinking
{
    public:
        void Boil()
        {
            cout<<"煮长白山山泉。。。"<<endl;
        }
        void Brew()
        {
            cout<<"冲泡茶叶"<<endl;
        }
        void PourInCup()
        {
            cout<<"倒入杯中。。。"<<endl;
        }
        void AddSomething()
        {
            cout<<"加入枸杞"<<endl;
        }
};
void toWork(AbstractDrinking *abd) //AbstrackDrinking *abd=new Coffee;
{
    abd->makeDrink();
    delete abd;
}
int main()
{
    // AbstractDrinking *abd=new Coffee;
    // abd->makeDrink();
    toWork(new Coffee);
    cout<<"----------------------"<<endl;
    toWork(new Tea);
}