#include<iostream>
#include<deque>
using namespace std;
/*
两端插入操作：
1、push_back(elem);
2、push_front(elem);
3、pop_back(elem);
4、pop_front(elem);

指定位置操作
1、insert(pos,elem);    //在pos位置插入数据elem
2、insert(pos,n,elem);  //在pos位置插入n 个 elem
3、insert(pos,beg,end); //在pos位置插入区间[beg,end)的元素，无返回值
4、clear(); //清空所有数据
5、erase(beg,end);  //删除区间[beg,end)的数据，返回下一个元素的位置
6、erase(pos);  //删除pos位置的数据，返回下一个元素的位置
*/

void PrintDeque(const deque<int>& d){
    for(deque<int>::const_iterator it=d.begin();it!=d.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
}

int main(){
    deque<int> d;
    d.push_back(10);
    d.push_back(20);
    d.push_front(300);
    d.push_front(100);
    PrintDeque(d);

    d.insert(d.begin(),666);
    PrintDeque(d);

    d.insert(d.begin(),2,8888);
    PrintDeque(d);

    //按照区间插入
    deque<int> d2;
    d2.push_back(1);
    d2.push_back(2);
    d2.push_back(3);

    d.insert(d.begin(),d2.begin(),d2.end());
    PrintDeque(d);

    //清空
    d2.clear();
    if(d2.empty())  cout<<"deque 容器为空"<<endl;
    else    cout<<"deque 容器不为空"<<endl;

    //删除某个与元素
    d.erase(d.begin()+1);
    PrintDeque(d);

    //也可以通过迭代器，来删除你想要删除的某个元素
    deque<int>::iterator it=d.begin();
    for(int i=0;i<5;i++){
        it++;
    }
    d.erase(it);
    PrintDeque(d);

    //删除区间中的元素
    d.erase(d.begin()+1,d.end()-1);
    PrintDeque(d);
}