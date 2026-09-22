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
    vector<int> nums(520);
    for(int i = 0;i < 520;i++){
        nums[i] = i+1;
    }

    int numThreads = 7;
    int numTrunk = nums.size() / numThreads;
    vector<future<long long>> futures;
    for(int i = 0;i < numThreads;i++){
        int start = i * numTrunk;
        int end = (i == numThreads-1)? nums.size():start + numTrunk;
        futures.push_back(async(launch::async,my_add,ref(nums),start,end));
    }

    long long sum = 0;
    for(int i = 0;i < numThreads;i++){
        sum += futures[i].get();
    }
    cout << "sum = " << sum << endl;
}