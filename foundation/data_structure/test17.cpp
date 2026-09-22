#include<iostream>
#include<queue>
#include<vector>
using namespace std;
// 优先队列

int main(){
    // 默认是大顶堆，堆顶最大
    priority_queue<int> maxHeap;
    maxHeap.push(30);
    maxHeap.push(10);
    maxHeap.push(20);
    
    // 输出
    cout << maxHeap.top() << endl;
    // 弹出最大
    maxHeap.pop();
    // 输出
    cout << maxHeap.top() << endl;

    // 小顶堆
    priority_queue<int,vector<int>,greater<int>> minHeap;
    minHeap.push(30);
    minHeap.push(10);
    minHeap.push(20);

    // 输出
    cout << minHeap.top() << endl;
    minHeap.pop();
    cout << minHeap.top() << endl;

    // 大小
    cout << minHeap.size() << endl;
    // 判空
    cout << minHeap.empty() << endl;


    return 0;
}