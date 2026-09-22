#include<iostream>
using namespace std;

int main(){
    // 三元运算符
    int x = 10,y = 20;
    int maxVal = (x > y)? x : y;
    cout << maxVal << endl;

    // 位运算
    int a = 10; // 二进制：1010
    int b = 12; // 二进制：1100

    // 按位与
    cout << (a & b) << endl;
    // 按位或
    cout << (a | b) << endl;
    // 按位异或
    cout << (a ^ b) << endl;
    // 左移：相当于乘以2
    cout << (a << 1) << endl;
    // 右移：相当于除以2
    cout << (a >> 1) << endl;

    // 一个经典用法：判断奇偶
    int n = 7;
    if((n & 1) == 1){
        cout << n << " 是奇数！" << endl;
    }

    return 0;
}