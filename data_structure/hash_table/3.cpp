#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
// 哈希表的基本原理

// 哈希表伪代码逻辑
class MyHashMap{
private:
    vector<void*> table;
public:
    // 增/改，复杂度O(1)
    void put(auto key,auto value){
        int index = hash(key);
        table[index] = value;
    }
    // 查，复杂度O(1)
    auto get(auto  key){
        int index = hash(key);
        return table[index];
    }
    // 删，复杂度O(1)
    void remove(auto key){
        int index = hash(key);
        table[index] = nullptr;
    }
private:
    // 哈希函数
    int hash(auto key){
        // ...
    }
};

/*
要点：
1. 设计哈希函数
2. 解决哈希冲突：拉链法和开放寻址法
3. 解决由拉链法或开放寻址法带来的效率问题
    1. hash函数设计的不好
    2. 底层数组存储键值对太多
负载因子：度量哈希表装满的程度，一般是0.75
拉链法：负载因子可以无限大
开放寻址法：<=1
*/

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    
    
    return 0;
}
