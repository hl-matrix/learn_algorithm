#include<iostream>
#include<vector>
#include<algorithm>

// 适合于刷题时使用，正式的工程项目中不推荐，可能引入名称冲突
using namespace std;

int main(){
    vector<int> nums = {3,1,4,1,5};
    sort(nums.begin(),nums.end());

    for(auto n:nums){
        cout << n << " ";
    }
    cout << endl;

    return 0;
}