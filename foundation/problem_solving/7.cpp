#include<iostream>
#include<string>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // 字符串 -> 数字
    int a = stoi("123");
    long long b = stoll("99999999999");
    double c = stod("3.14");
    cout << a << " " << b << " " << c << endl;

    // 数字 -> 字符串
    string s1 = to_string(42);
    string s2 = to_string(3.14);
    cout << s1 << " " << s2 << endl;
    // to_string 对浮点数会保留很多小数位
    // 一般整数用to_string就够了


    return 0;
}