#include<iostream>
using namespace std;
// 队列和栈的基本知识

// 队列的基本API
template<typename E> 
class MyQueue{
public:
    // 向队尾插入元素
    void push(const E& e);

    // 从对头删除元素
    E pop();

    // 查看对头元素
    E peek() const;

    // 返回队列中的元素个数
    int size() const;
};

// 栈的基本API
template<typename E>
class MyStack{
public:
    // 向栈顶插入元素
    void push(const E& e);

    // 从栈顶删除元素
    E pop();

    // 查看栈顶元素
    E peek() const;

    // 返回栈中的元素个数
    int size() const;
};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cout << "hello world!" << endl;

    return 0;
}