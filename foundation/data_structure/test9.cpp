#include<iostream>
#include<unordered_map> 
using namespace std;
// 哈希表

int main(){
    unordered_map<string,int> map;

    // 添加键值对
    map["apple"] = 3;
    map["banana"] = 5;
    map["cherry"] = 2;

    // 通过key，获取value
    cout << map["apple"] << endl;

    // 判断key是否存在
    cout << map.contains("banana") << endl;
    cout << map.contains("hello") << endl;

    // 删除
    map.erase("cherry");

    // 大小
    cout << map.size() << endl;

    // 遍历
    for(auto& [key,value] : map){
        cout << key << " -> " << value << endl;
    }

    // 最常见用法：统计每个字符出现的次数
    unordered_map<char,int> count;
    string s = "hello";
    for(char c:s){
        count[c]++;
    }
    for(auto& [key,value] : count){
        cout << key << " -> " << value << endl;
    }
    

    return 0;
}