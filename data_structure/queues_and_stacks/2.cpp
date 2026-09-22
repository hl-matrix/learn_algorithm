#include<iostream>
#include<list>
using namespace std;
// 用链表作为底层数据结构实现栈


template<typename E>
class MyLinkedStack{
private:
    list<E> list;
public:
    // 向栈顶加入元素
    void push(const E& e){
        list.push_back(e);
    }

    // 从栈顶弹出元素
    E pop(){
        E value = list.back();
        list.pop_back();
        return value;
    }

    // 查看栈顶元素
    E peek() const{
        return list.back();
    }

    // 返回栈中的元素个数
    int size() const{
        return list.size();
    }
};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    MyLinkedStack<int> stack;
    stack.push(1);
    stack.push(2);
    stack.push(3);
    stack.push(4);
    while(stack.size() > 0){
        cout << stack.pop() << endl;
    }

    return 0;
}