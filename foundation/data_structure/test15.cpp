#include<iostream>
#include<deque>
using namespace std;

int main(){
    deque<int> dq;

    // 头部和尾部操作
    dq.push_back(2);
    dq.push_back(3);
    dq.push_front(1);
    dq.push_front(0);

    // 头尾元素
    cout << dq.front() << endl;
    cout << dq.back() << endl;

    // 支持下标访问
    cout << dq[1] << endl;

    // 删除头尾
    dq.pop_back();
    dq.pop_front();

    // 大小
    cout << dq.size() << endl;

    // 遍历
    for(int x: dq){
        cout << x  << " ";
    }
    cout << endl;


    return 0;
}