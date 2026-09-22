#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int> stk;

    // 入栈
    stk.push(1);
    stk.push(2);
    stk.push(3);

    // 查看栈顶
    cout << stk.top() << endl;

    // 出栈
    stk.pop();

    // 新的栈顶
    cout << stk.top() << endl;

    // 大小
    cout << stk.size() << endl;

    // 判空
    cout << stk.empty() << endl;

    return 0;
}