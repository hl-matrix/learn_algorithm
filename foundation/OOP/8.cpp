#include<iostream>
#include<string>
using namespace std;

// 函数模板：T 是类型参数，使用时会被替换成具体类型
template<typename T>
void printArray(T arr[],int n){
    for(int i = 0;i < n;i++){
        cout << arr[i];
        if(i < n-1) cout << ", ";
    }
    cout << endl;
}

int main(){
    int nums[] = {1,2,3,4,5};
    printArray(nums,5);

    return 0;
}