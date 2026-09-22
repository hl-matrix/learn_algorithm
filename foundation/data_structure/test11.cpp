#include<iostream>
#include<map>
using namespace std;
// 有序表

int main(){
    map<int,string> m;
    m[3] = "turee";
    m[1] = "one";
    m[5] = "five";
    m[2] = "two";

    // 遍历是有序的（按key排序）
    for(auto& [key,value]:m){
        cout << key << " -> " << value << " ";
    }
    cout << endl;

    // lower_bound:返回指定 >= 给定key的第一个元素的迭代器
    auto it = m.lower_bound(2);
    cout << it->first << "->" << it->second << endl;

    // upper_bound：返回指定 > 给定 key 的第一个元素的迭代器
    it = m.upper_bound(2);
    cout << it->first << "->" << it->second << endl;

    it = m.lower_bound(4);
    cout << it->first << "->" << it->second << endl;

    // 如果找不到，返回end()
    it = m.lower_bound(100);
    if(it == m.end()){
        cout << "not found" << endl;
    }

    return 0;
}