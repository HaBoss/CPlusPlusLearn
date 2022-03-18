#include<iostream>
using namespace std;
class Cube
{
    private:
        int m_L,m_H,m_W;
    public:
        void setL(int L)    //设置长
        {
            m_L=L;
        } 
        int getL()          //获取长
        {
            return m_L;
        }
        void setH(int H)    //设置高
        {
            m_H=H;
        } 
        int getH()          //获取高
        {
            return m_H;
        }
        void setW(int W)    //设置宽
        {
            m_W=W;
        } 
        int getW()          //获取宽
        {
            return m_W;
        }

        int area()   //求立方体面积
        {
            return 2*(m_L*m_W+m_L*m_H+m_W*m_H);
        }
        int volume() //求立方体体积
        {
            return m_L*m_W*m_H;
        }

        /*利用成员函数判断两个立方体是否相等*/
        bool issameByclass(Cube &c) //判断两个立方体是否相等
        {
            if(m_H==c.getH() && m_L==c.getL() && m_W==c.getW())
                return true;               
            else
                return false;               
        }
};
int main()
{
    Cube c1,c2;
    int l,w,h;
    cout<<"请输入c1的长："<<endl;
    cin>>l;
    c1.setL(l);
    cout<<"请输入c1的宽："<<endl;
    cin>>w;
    c1.setW(w);
    cout<<"请输入c1的高："<<endl;
    cin>>h;
    c1.setH(h);
    cout<<"c1的面积为："<<c1.area()<<"\nc1的体积为："<<c1.volume()<<endl;
    c2.setH(10);
    c2.setL(10);
    c2.setW(10);
    cout<<"c2的面积为："<<c2.area()<<"\nc2的体积为："<<c2.volume()<<endl;
    if(c1.issameByclass(c2))
        cout<<"两个立方体相等！"<<endl;
    else
        cout<<"两个立方体不相等！"<<endl;
    return 0;
}