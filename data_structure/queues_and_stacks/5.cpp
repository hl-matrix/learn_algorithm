#include<iostream>
#include<list>
using namespace std;
// 用双链表实现双端队列

template<typename E>
class MyListDeque{
private:
    list<E> list;
public:
    // 从队头插入元素
    void pushFront(const E& e){
        list.push_front(e);
    }

    // 从队尾插入元素
    void pushBack(const E& e){
        list.push_back(e);
    }

    // 从队头删除元素
    E popFront(){
        E front = list.front();
        list.pop_front();
        return front;
    }

    // 从队尾删除元素
    E popBack(){
        E back = list.back();
        list.pop_back();
        return back;
    }

    // 查看队头元素
    E peekFront() const{
        return list.front();
    }

    // 查看队尾元素
    E peekBack() const{
        return list.back();
    }

    // 查看元素数量
    int size() const{
        return list.size();
    }
};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    MyListDeque<int> deque;
    deque.pushFront(2);
    deque.pushBack(3);
    deque.pushFront(1);

    cout << deque.peekFront() << endl;
    cout << deque.peekBack() << endl;
    
    return 0;
}