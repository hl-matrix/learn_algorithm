#include<iostream>
#include<thread>
#include<mutex>
using namespace std;
// 多线程并行执行时，同时读写同一个变量，会产生竞态条件，而且同时促成同一个目的
// 解决竞态：共享资源加锁-> 互斥锁(确保同一时刻只有一个线程能访问被保护的代码区域)


// 全局变量
int counter = 0;

void addMany(){
    for(int i = 0;i < 100000;i++){
        counter++;
    }
}

int main(){
    thread t1(addMany);
    thread t2(addMany);
    t1.join();
    t2.join();

    // 期望200000，但实际结果几乎每次都小于200000
    cout << "counter = " << counter << endl;
    cout << "(期望值是 200000)" << endl;

    return 0;
}