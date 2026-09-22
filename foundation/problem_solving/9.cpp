#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;

int main(){
    // max 和 min （c++内置，不需要自己写！）
    cout << max(10,20) << endl;
    cout << min(10,20) << endl;

    // swap 也是内置的
    int a = 1 ,b = 2;
    swap(a,b);
    cout << "a: " << a << " " << "b: " << b << endl;

    // 绝对值：整数用abs，浮点数用fabs
    cout << abs(-5) << endl;
    cout << fabs(-3.14) << endl;

    // 幂运算
    // 返回的是double，需要整数幂运算，推荐自己写循环或者用位运算
    cout << pow(2,3) << endl;

    // 开放
    cout << sqrt(9) << endl;

    // 取整
    // 向下取整
    cout << (int)floor(3.7) << endl;
    // 向上取整
    cout << (int)ceil(3.2) << endl;
    cout << ceil(3.2) << endl;

    // 测试pow
    cout << pow(2,10) << endl;
    int res = 1;
    for(int i = 0;i < 10;i++){
        res *= 2;
    }
    cout << res << endl;
    cout << (1 << 10) << endl;

    return 0;
}