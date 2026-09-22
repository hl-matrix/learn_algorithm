#include<iostream>
#include<thread>
using namespace std;
// 多线程编程：同步，异步，并行，并发
// 创建线程

// 线程要执行的函数
void sayHello(string name){
    cout << "Hello, " << name << "!" << endl;
}

int main(){
    // 创建线程，传入函数和参数
    thread t(sayHello,"c++");
    // 创建线程的后续任务：
    // t.join(); 常用
    // t.detach(); 适用于后台任务


    // 等待线程执行完毕
    // 让主线程等待t线程执行完毕，再继续往下走，不然主线程执行完毕后，新线程可能都还没有开始
    t.join();

    cout << "主线程结束" << endl;
    

    return 0;
}