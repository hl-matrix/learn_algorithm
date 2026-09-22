#include<iostream>
#include<queue>
using namespace std;
// 队列

int main(){
    queue<int> q;

    // 入队
    q.push(10);
    q.push(20);
    q.push(30);

    // 队头元素
    cout << q.front() << endl;

    // 队尾元素
    cout << q.back() << endl;

    // 出队
    q.pop();

    // 新的队头
    cout << q.front() << endl;

    // 大小
    cout << q.size() << endl;

    // 判空
    cout << q.empty() << endl;

    return 0;
}