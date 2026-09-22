#include<iostream>
#include<vector>
#include<future>
using namespace std;

long long my_add(const vector<int>& vec,int start,int end){
    long long sum = 0;
    for(int i = start;i < end;i++){
        sum += vec[i];
    }
    return sum;
}

int main(){

    vector<int> nums(100);

    for(int i = 0;i < 100;i++){
        nums[i] = i + 1;
    }

    int numThreads = 3;
    int trunkNums = nums.size() / numThreads;

    vector<future<long long>> futures;
    for(int i = 0;i < numThreads;i++){
        int start = i*trunkNums;
        int end = (i == numThreads-1)? nums.size() : start + trunkNums;
        futures.push_back(async(launch::async,my_add,ref(nums),start,end));
    }

    long long sum = 0;
    for(int i = 0;i < numThreads;i++){
        sum += futures[i].get();
    }
    cout << sum << endl;

    return 0;
}