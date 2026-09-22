#include<iostream>
using namespace std;
// 算数运算符

int main(){
    int a = 17,b = 5;
    
    cout << a + b << endl;
    cout << a - b << endl;
    cout << a * b << endl;
    cout << a / b << endl;
    cout << a % b << endl;
    
    // 自增自减
    int c = 10;
    c++;
    cout << c << endl;

    // 复合赋值
    c += 5;
    cout << c << endl;

    return 0;
}