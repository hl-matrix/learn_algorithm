#include<iostream>
#include<utility>
using namespace std;

int main(){
    // 创建pair
    pair<string,int> p1 = make_pair("apple",3);
    pair<string,int> p2 = {"banana",5};

    // 访问两个元素
    cout << p1.first << endl;
    cout << p1.second << endl;

    // 修改
    p1.second = 10;
    cout << p1.second << endl;

    // pair 可以直接比较（先比较first，再比较second）
    pair<int,int> a = {1,3};
    pair<int,int> b = {1,5};

    cout << (a < b) << endl;

    return 0;
}