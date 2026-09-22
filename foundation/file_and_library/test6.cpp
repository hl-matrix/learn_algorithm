#include<iostream>
using namespace std;

void tryChange(int x){
    x = 999;
    cout << "函数内 x = " << x << endl;
}

int main(){
    int a = 10;
    tryChange(a);
    cout << "a = " << a << endl;
    return 0;
}