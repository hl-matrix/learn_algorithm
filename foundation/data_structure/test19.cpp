#include<iostream>
#include<unordered_map>
using namespace std;

pair<int,int> divide(int a,int b){
    return {a/b,a%b};
}

int main(){
    unordered_map<string,int> map;
    map["apple"] = 3;
    map["banana"] = 5;
    map["cherry"] = 2;

    // 遍历map时，用结构化绑定拆出key 和 value
    for(auto& [key,value] : map){
        cout << key << " -> " << value << endl;
    }

    // 接受函数返回的pair
    auto [quotient,remainder] = divide(10,3);
    cout << "商=" << quotient << ", 余=" << remainder << endl;
    

    return 0;
}