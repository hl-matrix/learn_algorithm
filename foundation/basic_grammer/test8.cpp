#include<iostream>
using namespace std;

int main(){
    // 比较与逻辑运算符
    int a = 10,b = 20;
    
    // 比较运算符
    cout << (a == b) << endl;
    cout << (a != b) << endl;
    cout << (a < b) << endl;

    // 逻辑运算符
    cout << (a > 5 && b > 15) << endl;
    cout << (a > 100 || b > 15) << endl;
    cout << !(a > 5) << endl;
    return 0;
}