#include<iostream>
using namespace std;
// 函数重载

int add(int a,int b){
    return a + b;
}

int add(int a,int b,int c){
    return a + b + c;
}

double add(double a,double b){
    return a + b;
}

int main(){
    cout << add(1,2) << endl;
    cout << add(1,2,3) << endl;
    cout << add(1.1,2.2) << endl;
    return 0;
}