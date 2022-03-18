#include<iostream>
#include<string>
using namespace std;
#include"person.h"

int main()
{
    Person<string, int> p("张三", 20);
    p.showPerson();
    /*具体实现，在visual studio 中*/
}