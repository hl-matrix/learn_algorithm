#include<iostream>
#include<thread>
#include<mutex>
using namespace std;
int num = 0;
mutex mtx;

void addSafe(){
    for(int i = 1;i <= 100;i++){
        lock_guard<mutex> lock(mtx);
        num++;
    }
}

int main(){
    thread t1(addSafe);
    thread t2(addSafe);
    t1.join();
    t2.join();
    cout << num << endl;

    return 0;
}