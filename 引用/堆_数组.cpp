#include<iostream>
using namespace std;

void func2()
{
    int *arr= new int[10];
    for(int i=0;i<10;i++)
    {
        arr[i]=i+100;
    }

     for(int i=0;i<10;i++)
    {
        cout<<i<<"="<<arr[i]<<endl;
    }
    delete [] arr;//释放数组需要在delete后加上[]，申明是数组
}
int main()
{
    func2();
    return 0;
}