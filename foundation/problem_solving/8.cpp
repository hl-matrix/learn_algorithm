#include<iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // 字符 -> ASCII码
    char ch = 'A';
    int code = ch;
    cout << ch << " 的ASCII码是 " << code << endl;

    // ASCII码 -> 字符
    int num = 97;
    char letter = (char)num;
    cout << num << " 对应的字符是 " << letter << endl;

    // 常用技巧：字母转下标(a=0,b=1...)
    char c = 'f';
    int index = c - 'a';
    cout << c << " 的下标是 " << index << endl;

    // 反过来：下标转字母
    int idx = 3;
    char result = 'a' + idx;
    cout << "下标 " << idx << " 对应字母 " << result << endl;

    // 字符判断函数(需要<cctype>,但<iostream>一般已包含)
    cout << isdigit('5') << " " << isdigit('a') << " " << isalpha('x') << " " << isalpha('3') << endl;
    
    return 0;
}