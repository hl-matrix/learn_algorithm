#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    unordered_map<string,int> map;
    map["apple"] = 3;
    cout << map.size() << endl;

    cout << map["grape"] << endl;
    cout << map.size() << endl;

    // 所以，判断key是否存在一定要用到contains，不要用[]
    if(map.contains("orange")){
        cout << map["orange"] << endl;
    }else{
        cout << "orange not found" << endl;
    }
    return 0;
}