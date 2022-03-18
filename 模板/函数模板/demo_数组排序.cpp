#include<iostream>
using namespace std;

//两数交换
template<typename T>
void mySwap(T &a,T &b)
{
    T temp=a;
    a=b;
    b=temp;
}

//按从小到大排序
template<typename T>
void mySort(T arr[],int len)
{
    for(int i=0;i<len-1;i++)
    {
        int min=i;
        for(int j=i+1;j<len;j++)
        {
            if(arr[min]>arr[j])
            {
                min=j;
            }
        }
        if(min!=i)
        {
            mySwap(arr[min],arr[i]);
        }
    }
}
//打印数组
template<typename T>
void myPrint(T arr[],int len)
{
    for(int i=0;i<len;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    char arr[]="cdabfe";
    int num=sizeof(arr)/sizeof(arr[0]);
    mySort(arr,num);
    myPrint(arr,num);

    int a[]={5,2,3,9,7,4,6};
    int num2=sizeof(a)/sizeof(a[0]);
    mySort(a,num2);
    myPrint(a,num2);

}