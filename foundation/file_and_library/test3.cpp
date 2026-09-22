#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> nums = {5,2,8,1,9};
    sort(nums.begin(),nums.end());
    
    for(auto n : nums){
        cout << n << " ";
    }
    cout << endl;
    // map,queue,stack 也能用
    map<string,int> scores;
    scores["Alice"] = 95;
    cout << "Alice: " << scores["Alice"] << endl; 

    return 0;
}