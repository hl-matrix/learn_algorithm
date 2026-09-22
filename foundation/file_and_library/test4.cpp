/*
c++也用头文件来组织多文件项目
1. 头文件（.h）：放类定义，函数声明
2. 源文件（.cpp）：放函数的具体实现
*/

// c++标准库头文件，没有.h后缀
#include<iostream>
#include<cmath>

// 自定义头文件用双引号
#include"math_utils.h"

using namespace std;

int main(){
    // factorial 和 isPrime 来自定义的math_utils.h
    cout << "5! = " << factorial(5) << endl;
    cout << "7 is prime: " << (isPrime(7) ? "true":"false") << endl;

    // sqrt 来自标准库cmath
    cout << "sqrt(144) = " << (int)sqrt(144) << endl;
    
    return 0;
}