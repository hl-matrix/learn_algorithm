#include<iostream>
#include<vector>
#include<future>
using namespace std;

// 计算vec[start...end)的和
long long partialSum(const vector<int>& vec,int start,int end){
    long long sum = 0;
    for(int i = start;i < end;i++){
        sum += vec[i];
    }
    return sum;
}

int main(){
    int n = 10000000;
    vector<int> data(n);
    for(int i = 0;i < n;i++){
        data[i] = i+1;
    }

    // 单线程求和
    long long singleResult = 0;
    for(int i = 0;i < n;i++){
        singleResult += data[i];
    }
    cout << "单线程结果：" << singleResult << endl;

    // 多线程并行求和：分成4段
    int numThreads = 4;
    int chunkSize = n / numThreads;
    vector<future<long long>> futures;

    for(int i = 0;i < numThreads;i++){
        int start = i * chunkSize;
        int end = (i == numThreads - 1)?n : start + chunkSize;
        futures.push_back(async(launch::async,partialSum,ref(data),start,end));
    }

    // 汇总各线程的结果
    long long parallelResult = 0;
    for(auto& f : futures){
        parallelResult += f.get();
    }
    cout << "多线程结果：" << parallelResult << endl;

    

    return 0;
}