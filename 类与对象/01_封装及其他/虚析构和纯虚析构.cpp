#include<iostream>
#include<string>
using namespace std;

class Animal
{
    public:
        string m_name;
        Animal()
        {
            cout<<"Animal 的构造函数被调用"<<endl;
        }
        virtual void Speak()=0;
        virtual void NameSpeak()=0;
        /*//虚析构，需要有函数的实现
        //利用虚析构，就可以解决父类指针释放子类对象不干净的情况
        virtual ~Animal()
        {
            cout<<"Animal 的虚析构函数被调用"<<endl;
        }*/

        //纯虚析构，需要有申明，也需要有实现
        //申明了纯虚析构后，该类就是抽象类
        virtual ~Animal()=0;
};
//纯虚虚构函数里面需要有代码的实现，不能就这样直接写
Animal::~Animal()
{
    cout<<"Animal 的 纯虚析构函数被调用"<<endl;
}
class Cat:public Animal
{
    public:
        string *m_name;
        Cat(string name)
        {   
            cout<<"Cat 的构造函数被调用"<<endl;
            m_name=new string(name);
        }
        void Speak()
        {
            cout<<"喵喵喵喵。。。"<<endl;
        }
        void NameSpeak()
        {
            cout<<*m_name<<"在说话"<<endl;
        }
        ~Cat()
        {
            if(m_name!=NULL)
            {
                cout<<"Cat 的析构函数被调用"<<endl;
                delete m_name;
                m_name=NULL;
            }
        }
};
int main()
{
    
    Animal *animal=new Cat("汤姆");
    animal->Speak();
    animal->NameSpeak();
    //父类指针在析构的时候不会调用子类的析构函数，导致如果子类中有堆区的数据，不会被释放，出现内存泄漏的情况
    delete animal;
}