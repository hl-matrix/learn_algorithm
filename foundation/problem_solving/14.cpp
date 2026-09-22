#include<iostream>
#include<vector> 
#include<numeric>
using namespace std;

int main(){
    // accumulate 积累 synchronise 同步
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> nums = {1,2,3,4,5};

    // 第三个参数是初始值
    int sum = accumulate(nums.begin(),nums.end(),0);
    cout << sum << endl;

    // 注意：如果元素和可能恒大，初始值要用0LL
    vector<int> big = {1000000,2000000,3000000};
    long long bigSum = accumulate(big.begin(),big.end(),0LL);
    cout << bigSum << endl;


    return 0;
}