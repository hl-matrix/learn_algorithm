#include<iostream>
using namespace std;
/*
基本类型传值
容器类型传引用
如果只读容器，不需要修改它，就加上const表示只读引用
*/

void changeValue(int& x){
    x = 999;
}

// 经典用法：交换两个变量的值
void swap(int& a,int& b){
    int temp = a;
    a = b;
    b = temp;
}

int main(){
    int a = 10;
    changeValue(a);
    cout << "a = " << a << endl;

    int x = 1,y = 2;
    swap(x,y);
    cout << "x = " << x << ", y = "  << y << endl;

    return 0;
}