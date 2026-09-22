#include<iostream>
#include<string>
using namespace std;

int add(int a,int b){
    return a+b;
}

void greet(string name){
    cout << "你好，" << name << "！" << endl;
}

int main(){
    int result = add(3,5);
    cout << result << endl;
    greet("c++");
    // 函数的返回值可以直接参与运算
    cout << add(10,9) << endl;
    return 0;
    
}