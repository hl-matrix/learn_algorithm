#include<iostream>
#include<list>
using namespace std;
// 用链表实现队列

template<typename E>
class MyLinkedQueue{
private:
    list<E> list;
public:
    // 向队尾添加元素
    void push(const E& e){
        list.push_back(e);
    }

    // 从队头删除元素
    E pop(){
        E front = list.front();
        list.pop_front();
        return front;
    }

    // 查看队头元素
    E peek() const{
        return list.front();
    }

    // 返回元素个数
    int size() const{
        return list.size();
    }
};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    MyLinkedQueue<int> queue;
    queue.push(1);
    queue.push(2);
    queue.push(3);

    cout << queue.peek() << endl;
    cout << queue.pop() << endl;
    cout << queue.pop() << endl;
    cout << queue.peek() << endl;

    return 0;
}