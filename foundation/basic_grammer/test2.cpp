#include<iostream>
using namespace std;

int main(){
    // 不断读取两个整数求和，直到输入结束
    int a,b;
    while(cin >> a >> b){
        cout << a + b << "\n";
    }

    return 0;
}