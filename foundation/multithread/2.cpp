#include<iostream>
#include<thread>
#include<vector>
using namespace std;
// 使用lambda创建线程


int main(){
    vector<thread> threads;

    for(int i = 0;i < 3;i++){
        threads.push_back(thread([i](){
            cout << "线程" << i << "正在执行!" << endl;
        }));
    }

    for(auto& t : threads){
        t.join();
    }

    cout << "所有线程执行完毕!" << endl;

    return 0;
}