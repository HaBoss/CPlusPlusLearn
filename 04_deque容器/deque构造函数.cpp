#include<iostream>
using namespace std;
#include<deque>

/*特点
//与vecto类似，但头尾都可以自由插入元素，访问速度没有vecto快
//从开头插入： push_front()         开头删除：  pop_front()
//末尾插入：    push_back()         末尾删除：  pop_back()
*/

/*函数原型
1、deque<T>deqT;    //默认构造
2、deque(beg,end);  //将区间[beg,end),之间的元素拷贝给本身
3、deque(n,elem);   //将 n 个 elem 拷贝给本身
4、deque(const deque& deq); //拷贝构造函数
*/

//const_iterator 是只读迭代器  如果不想限制，也可以使用iteratior迭代器
void PrintDeque(const deque<int>& d){
    for(deque<int>::const_iterator it=d.begin();it!=d.end();it++){
        cout<<*it<<"\t";
    }
    cout<<endl;
}
int main(){
    deque<int> d1;
    for(int i=0;i<10;i++){
        d1.push_front(i);
    }
    PrintDeque(d1);

    //具体操作与vector 基本相同
    //赋值 operator= 
    deque<int> d2;
    d2=d1;
    PrintDeque(d2);

    //assgin赋值
    deque<int> d3;
    d3.assign(d2.begin(),d2.end());
    PrintDeque(d3);

    //assign n 个 elem 的方式
    deque<int> d4;
    d4.assign(10,100);
    PrintDeque(d4);
}