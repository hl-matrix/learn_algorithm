#include<iostream>
#include<future>
using namespace std;

// 一个耗时的计算
int compute(int x){
    int sum = 0;
    for(int i = 1;i <= x;i++){
        sum += i;
    }
    return sum;
}

int main(){
    // 发起两个异步任务
    // lauch::async：立刻在新线程中启动任务
    future<int> f1 = async(launch::async,compute,100);
    future<int> f2 = async(launch::async,compute,200);

    // get() 会阻塞等待任务完成，然后返回结果
    int result1 = f1.get();
    int result2 = f2.get();

    cout << result1 << endl;
    cout << result2 << endl;

    return 0;
}