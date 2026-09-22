#include<iostream>
#include<bitset>
#include<string>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     
    int n = 42;

    // 十进制 -> 二进制：用bitset
    cout << bitset<8>(n) << endl;
    // 转成字符串后去掉前导零
    string bin = bitset<32>(n).to_string();
    bin = bin.substr(bin.find('1'));
    cout << bin << endl;

    // 十进制 -> 八进制，十六进制：用流操纵符
    cout << oct << n << endl;
    cout << hex << n << endl;
    // 切回十进制，否则后续输出都是十六进制
    cout << dec;

    // 其他进制 -> 十进制：用stoi(字符串，nullptr,进制)
    cout << stoi("101010",nullptr,2) << endl;
    cout << stoi("52",nullptr,8) << endl;
    cout << stoi("2a",nullptr,16) << endl;

    // 实用技巧：统计二进制中的1的个数
    // _builtin_popcount 是 GCC/Clang 内置函数
    cout << n << " 的二进制有 " << __builtin_popcount(n) << " 个1" << endl;

    return 0;
}