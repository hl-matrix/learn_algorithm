#include<iostream>
#include<cmath>
#include<cstdio>
// 把函数放在了std命名空间


int main(){
    // iostream 提供 cout 
    std::cout << "hello from iostream" << std::endl;
    // cmath 提供数学函数，在std命名空间中
    std::cout << "sqrt(144) = " << std::sqrt(144) << std::endl;
    // cstdio 提供 printf，也能用
    printf("printf also works!\n");

    return 0;
}