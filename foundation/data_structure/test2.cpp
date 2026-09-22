#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> nums = {10,20,30};

    // 尾部添加元素
    nums.push_back(40);
    nums.push_back(50);

    // 大小
    cout << nums.size() << endl;

    // 判空
    cout << nums.empty() << endl;

    // 通过下标访问
    cout << nums[0] << endl;

    // 最后一个元素
    cout << nums.back() << endl;

    // 删除最后一个元素
    nums.pop_back();
    cout << nums.back() << endl;

    // 在索引1处插入99
    nums.insert(nums.begin()+1,99);

    // 删除索引2处的元素
    nums.erase(nums.begin() + 2);

    // 交换两个vector的内容
    vector<int> other = {100,200};
    nums.swap(other);
    for(auto x:nums){
        cout << x << " ";
    }
    cout << endl;

    
    return 0;
}