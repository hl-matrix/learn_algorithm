#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    // synchronize 同步 
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> nums = {3,1,4,1,5,9};
    
    // 默认升序
    sort(nums.begin(),nums.end());
    for(int x:nums) cout << x << " ";
    cout << endl;

    // 降序：传入自定义比较函数（lambda表达式）
    // c++的排序比较器必须返回bool值，所以用<或>来比较。
    sort(nums.begin(),nums.end(),[](int a,int b){
        return a > b;
    });
    for(int x:nums) cout << x << " ";
    cout << endl;

    return 0;
}