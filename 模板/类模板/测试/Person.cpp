#include"person.h"
template<class T1,class T2>
Person<T1,T2>::Person(T1 name,T2 age)
{
    this->m_name=name;
    this->m_age=age;
}

template<class T1,class T2>
void Person<T1,T2>::showPerson()
{
    cout<<"m_name:"<<this->m_name<<"\nm_age="<<this->m_age<<endl;
}