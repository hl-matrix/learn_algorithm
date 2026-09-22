#include<iostream>
#include<vector>
using namespace std;
// 用数组作为底层数据结构实现栈

template<typename E>
class MyArrayStack{
private:
    vector<E> arr;
public: 
    // 向栈顶添加元素
    void push(const E&e){
        arr.push_back(e);
    }

    // 从栈顶弹出元素
    E pop(){
        E value = arr.back();
        arr.pop_back();
        return value;
    }

    // 查看栈顶元素
    E peek() const{
        return arr.back();
    }

    // 查看元素个数
    int size() const{
        return arr.size();
    }
};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout << "hello world!" << endl;

    return 0;
}