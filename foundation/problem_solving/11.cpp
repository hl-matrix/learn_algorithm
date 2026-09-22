#include<iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // 溢出防范
    // 算法题中最常见的场景是两个int相加或相乘，结果超出int范围。
    int a = 100000,b = 100000;
    long long right = (long long)a * b;

    // 还有一个常见的坑是 INT_MIN 取绝对值
    int x = INT_MIN;
    long long safe = abs((long long)x);

    // 记住一个原则：只要计算过程中可能越界，就提前转成long long

    return 0;
}