#include<iostream>
using namespace std;

int main(){
    int x=-123456;
    while(x!=0){
        int t=x%10;
        cout<<t<<endl;
        x/=10;
    }
    cout<<x<<endl;
    return 0;
}