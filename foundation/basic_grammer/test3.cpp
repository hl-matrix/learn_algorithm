#include<iostream>
using namespace std;

int main(){
    // 常用的基本数据类型
    // 整数
    int a = 42;
    // 长整数，注意末尾的LL，否则编译器会视为int，超出范围会报错
    long long b = 9999999999LL;
    // 浮点数
    double c = 3.14;
    // 单个字符，用单引号
    char d = 'A';
    // 字符串，用双引号
    string s = "hello";
    // 布尔值，true或false
    bool e = true;

    cout << "int: " << a << endl;
    cout << "long long: " << b << endl;
    cout << "double: " << c << endl;
    cout << "char: " << d << endl;
    cout << "string: " << s << endl;
    cout << "bool: " << e << endl;

    // 变量声明
    // c++是静态类型语言，变量必须先声明类型
    // 先声明，后赋值
    int x;
    x = 10;

    // 声明的同时赋值
    int y = 20;

    // 一行声明多个同类型变量
    // int a = 1,b = 2,c = 3;

    // 常量:用const声明，声明后不能修改
    const int MAX_SIZE = 100;
    const double PI = 3.14159;


    return 0;
}