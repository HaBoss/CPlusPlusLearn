#include<iostream>
#include<string>
using namespace std;

class Person
{
    public:
    int m_age;
    void showPersonAge()
    {
        if(this==NULL)
        {
            return ;
        }
        cout<<"年龄为："<<m_age<<endl;  //m_age 实质是  this->m_age  
    }
    void showClassName()
    {
        cout<<"this is Class name!"<<endl;
    }
};
int main()
{
    Person *p=NULL;
    /*因为p是一个空指针，指向的内容为空，
    所以this为空，所以this->m_age是错误的*/

    //p->m_age=18;
    p->showPersonAge();
    p->showClassName();
    
    return 0;
}