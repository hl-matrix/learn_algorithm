#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
// 常用的STL算法



int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // reverse：反转容器
    vector<int> nums = {1,2,3,4,5};
    reverse(nums.begin(),nums.end());
    for(int x : nums) cout << x << " ";
    cout << endl;

    // reverse 也可以反转字符串
    string s = "hello";
    reverse(s.begin(),s.end());
    cout << s << endl;

    // find：查找元素，返回迭代器
    vector<int> v = {10,20,30,40};
    auto it = find(v.begin(),v.end(),30);
    if(it != v.end()){
        cout << "找到30，下标是：" << (it - v.begin()) << endl;
    }

    // count：统计元素出现次数
    vector<int> arr = {1,2,3,2,1,2};
    cout << "2 出现了 " << count(arr.begin(),arr.end(),2) << " 次 " << endl;

    return 0;
}