#include<iostream>
#include<string> 
using namespace std;

int main(){
    // 字符串转 int
    int n = stoi("123");
    cout << n << endl;

    long long big = stoll("1234567789123");
    cout << big << endl;

    // 数字转字符串
    string s = to_string(42);
    cout << s << endl;

    string s2 = to_string(3.14);
    cout << s2 << endl;
    return 0;
}