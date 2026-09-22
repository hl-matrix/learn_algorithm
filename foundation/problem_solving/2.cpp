#include<iostream>
using namespace std;
// 快读优化

int main(){
    // 这两行放在main函数最开头
    ios::sync_with_stdio(false);
    // 关闭了cin/cout 和 scanf/printf之间的同步
    cin.tie(nullptr);
    // 解除了cin和cout之间的绑定

    int n;
    cin >> n;

    for(int i = 0;i < n;i++){
        int a,b;
        cin >> a >> b;
        // 将endl换成"\n"，因为endl会强制刷新缓冲区，大量输出会拖慢速度
        cout << a + b << "\n";
    }

    return 0;
}