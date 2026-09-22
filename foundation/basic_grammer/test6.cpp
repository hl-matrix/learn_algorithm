#include<iostream>
using namespace std;

int main(){
    // 类型转换，小类型可以自动转换为大类型（不丢精度），反过来可能丢失数据
    int a = 100;
    long long b = a;
    double c = b;
    cout << a << " " << b << " " << c << endl;

    // 强制转换：double -> int (截断小数部分)
    double pi = 3.1415;
    int rounded = (int)pi;
    cout << rounded << endl;

    // 整数除法的坑
    // 输出：0（两个int相除，结果还是int）
    cout << 1/2 << endl;
    // 输出：0.5（其中一个是double，结果就是double）
    cout << 1.0/2 << endl;

    return 0;
}