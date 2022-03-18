#include<iostream>
#include<list>
using namespace std;

/*
//API基本同之前的一样
1、push_back();
2、push_front();
3、pop_back();
4、pop_front();
5、insert(pos,elem);    //在pos 位置插入elem元素的拷贝，返回新数据的位置
6、insert(pos,n,elem);  //在pos 位置插入n 个 elem 数据，无返回值
7、insert(pos,beg,end); //在pos 位置插入[bed,end)区间的数据，无返回值
8、clear();
9、erase(beg,end);  //删除[beg,end)区间的数据，返回下一个数据的位置
10、erase(pos); //删除pos 位置的数据，返回下一个数据的位置
11、remove(elem);   //删除容器中所有与elem 匹配的元素
*/

void printList(const list<int>& l){
    for(list<int>::const_iterator it=l.begin();it!=l.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
}

int main(){
    list<int> l;
    l.push_back(10);
    l.push_back(20);
    l.push_back(30);
    l.push_back(40);
    l.push_back(60);
    l.push_back(20);
    l.push_back(20);
    l.push_back(80);
    printList(l);

    //remove()
    l.remove(20);
    printList(l);

    list<int>::iterator it=l.begin();
    it++;
    l.erase(++it);
    printList(l);
}