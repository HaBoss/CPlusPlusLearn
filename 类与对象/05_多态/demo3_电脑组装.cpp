#include<iostream>
using namespace std;

//抽象不同的零件类
//Cpu类
class Cpu
{
    public:
        virtual void calculate()=0;
};
//显卡类
class VideoCard
{
    public:
        virtual void display()=0;
};
//内存类
class Memory
{
    public:
        virtual void storage()=0;
};
//电脑类
class Computer
{
    public:
        Computer(Cpu *cpu,VideoCard *vc,Memory *mem)
        {
            m_cpu=cpu;
            m_vc=vc;
            m_mem=mem;
        }
        //提供一个工作的函数
        void work()
        {
            m_cpu->calculate();
            m_vc->display();
            m_mem->storage();
        }
        //清理堆区数据
        ~Computer()
        {
            if(m_cpu!=NULL)
            {
                delete m_cpu;
                m_cpu=NULL;
            }
            if(m_vc!=NULL)
            {
                delete m_vc;
                m_vc=NULL;
            }
            if(m_mem!=NULL)
            {
                delete m_mem;
                m_mem=NULL;
            }
            cout<<"Computer 类的析构函数被调用"<<endl;
        }
    private:
        Cpu *m_cpu;
        VideoCard *m_vc;
        Memory *m_mem;
};

//具体的厂商
class IntelCpu:public Cpu
{
    public:
        void calculate()
        {
            cout<<"Intel 的CPU开始计算了"<<endl;
        }
};
class IntelVC:public VideoCard
{
    public:
        void display()
        {
            cout<<"Intel 的VideoCard开始工作了"<<endl;
        }
};
class IntelMem:public Memory
{
    public:
        void storage()
        {
            cout<<"Intel 的Memory开始存储了"<<endl;
        }
};

//Lenovo厂商
class LenovoCpu:public Cpu
 {
     public:
        void calculate()
        {
            cout<<"Lenovo 的CPU开始计算了"<<endl;
        }
 };
class LenovoVC:public VideoCard
{
    public:
        void display()
        {
            cout<<"Lenovo 的VideoCard开始显示了"<<endl;
        }
};
class LenovoMem:public Memory
{
    public:
        void storage()
        {
            cout<<"Lenovo 的Memory开始存储了"<<endl;
        }
};
void test01()
{
    //创建第一台电脑的零件
    Cpu *intelcpu=new IntelCpu;
    VideoCard * intelcard=new IntelVC;
    Memory *lenovomem=new LenovoMem;

    //创建第一台电脑
    Computer *computer1=new Computer(intelcpu,intelcard,lenovomem);
    computer1->work();
    delete computer1;

}
int main()
{
    test01();
}