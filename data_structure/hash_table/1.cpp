#include<iostream>
#include<unordered_map>
using namespace std;
// 熟悉STL中的unordered_map库

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    unordered_map<string,int> map;

    // 添加键值对
    map["apple"] = 3;
    map["banana"] = 5;
    map["cherry"] = 2;

    // 通过key获取value
    cout << map["apple"] << endl;

    // 判断key是否存在
    cout << map.contains("banana") << endl;
    cout << map.contains("grape") << endl;

    // 删除
    map.erase("cherry");

    // 大小
    cout << map.size() << endl;

    // 遍历
    for(auto& [key,value]:map){
        cout << key << " -> " << value << endl;
    }

    // 新手误区
    cout << map["watermelon"] << endl; // 默认创建一个新的键值对
    cout << map.size() << endl;
    
    // 标注写法
    cout << "-------------------" << endl;
    if (map.contains("hello")){
        cout << map["hello"] << endl;
    }else{
        cout << "hello 不存在" << endl;
    }
    cout << map.size() << endl;

    return 0;
}