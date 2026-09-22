#include<iostream>
#include<vector> 
#include<algorithm> 
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> nums = {3,1,4,1,5,9,2,6};

    // 返回指向最小元素的迭代器
    auto minIt = min_element(nums.begin(),nums.end());
    cout << "最小值：" << *minIt << "，下标：" << (minIt - nums.begin()) << endl;

    auto maxIt = max_element(nums.begin(),nums.end());
    cout << "最大值：" << *maxIt << "，下标：" << (maxIt - nums.begin()) << endl;

    return 0;
}