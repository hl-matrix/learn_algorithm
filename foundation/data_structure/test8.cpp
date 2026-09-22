#include<iostream>
#include<list>
using namespace std;
// 双向链表

int main(){
    list<int> lst;
    // 头部和尾部添加
    lst.push_back(2);
    lst.push_back(3);
    lst.push_front(1);
    lst.push_front(0);

    // 头尾元素
    cout << lst.front() << endl;
    cout << lst.back() << endl;

    // 删除头尾
    lst.pop_front();
    lst.pop_back();

    // 在中间插入:先用advance移动迭代器
    auto it = lst.begin();
    advance(it,1);
    lst.insert(it,99);
    
    // 删除中间元素
    it = lst.begin();
    advance(it,1);
    lst.erase(it);

    // 遍历
    for(int x:lst){
        cout << x << " ";
    }
    cout << endl;

    // 大小
    cout << lst.size() << endl;

    return 0;
}