#include<iostream>
#include<set> 
using namespace std;
// 有序集合

int main(){
    set<int> s;
    s.insert(5);
    s.insert(2);
    s.insert(8);
    s.insert(1);

    // 遍历是有序的
    for(int x:s){
        cout << x << " ";
    }
    cout << endl;

    // lower_bound：>= 的最小元素
    auto it = s.lower_bound(3);
    cout << *it << endl;

    // upper_bound：>5的最小元素
    it = s.upper_bound(5);
    cout << *it << endl;


    return 0;
}