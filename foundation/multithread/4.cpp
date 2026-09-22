#include<iostream>
#include<mutex>
#include<thread>
using namespace std;
// 自动管理锁

int counter = 0;
mutex mtx;

void addMany(){
    for(int i = 0;i < 100000;i++){
        lock_guard<mutex> lock(mtx);
        counter++;
    }
}

int main(){
    thread t1(addMany);
    thread t2(addMany);
    t1.join();
    t2.join();

    // 现在结果一定是 200000
    cout << "counter = " << counter << endl;

    return 0;
}