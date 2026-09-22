#include<iostream>
#include<climits> 
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // int 范围： 大约 -21亿 ~ 21亿
    cout << INT_MAX << endl;
    cout << INT_MIN << endl;

    // long long 范围： 大约 -9.2 * 10^18 ~ 9.2 * 10^18
    cout << LLONG_MAX << endl;

    // 溢出演示
    int x = INT_MAX;
    cout << x + 1 << endl;

    // 算法题常见用法:用INT_MAX 表示 "无穷大"
    int minVal = INT_MAX;
    int nums[] = {5,2,8,1,9};
    for(int n : nums){
        minVal = min(minVal,n);
    }
    cout << minVal << endl;

    return 0;
}