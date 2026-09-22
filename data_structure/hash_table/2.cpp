#include<iostream>
#include<map>
using namespace std;
// 比较STL中的map和unordered_map

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    map<int,string> m;
    m[3] = "three";
    m[1] = "one";
    m[5] = "five";
    m[2] = "two";

    for(auto& [key,value]:m){
        cout << key << " -> " << value << " ";
    }
    cout << endl;

    auto it = m.lower_bound(2);
    cout << it->first << " -> " << it->second << endl;

    it = m.upper_bound(2);
    cout << it->first << " -> " << it->second << endl;

    it = m.lower_bound(100);
    if (it == m.end()){
        cout << "not found" << endl;
    }

    return 0;
}