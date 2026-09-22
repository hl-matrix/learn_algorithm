#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;
// lambda表达式： [捕获列表](参数列表) -> 返回类型{函数体}
// 返回类型可以省略，编译器会自动推导

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // 最简单的 lambda
    auto greet = [](){
        cout << "Hello!" << endl;
    };
    greet();

    // 带参数的 lambda
    auto add = [](int a,int b){
        return a + b;
    };
    cout << add(10,20) << endl;

    // 捕获外部变量
    int factor = 3;
    auto multiply = [factor](int x){
        return x * factor;
    };
    cout << multiply(5) << endl;

    // 按引用捕获（可以修改外部变量）
    int count = 0;
    auto increment = [&count](){
        count++;
    };
    increment();
    increment();
    cout << count << endl;

    // [=] 按值捕获所有外部变量
    // [&] 按引用捕获所有外部变量
    // 这两种写法在算法题中最常见

    // 补充 priority_queue自定义比较器
    // 小顶堆
    priority_queue<int,vector<int>,greater<int>> minHeap;

    // 自定义比较：用lambda
    // 注意 priority_queue 的比较逻辑和 sort 相反
    // sort 中 return a < b 是升序
    // priority_queue 中 return a < b 是 大顶堆（和直觉相反）
    auto cmp = [](pair<int,int>& a,pair<int,int>& b){
        return a.first > b.first;
    };
    priority_queue<pair<int,int>,vector<pair<int,int>>,decltype(cmp) > pq(cmp);
    

    return 0;
}