#include<iostream>
#include<string> 
using namespace std;

int main(){
    string s = "Hello,World!";

    // 长度
    cout << s.size() << " " << s.length() << endl;
    
    // 通过下标访问单个字符
    cout << s[0] << endl;

    // 截取字串 substr(起始位置，长度)
    cout << s.substr(0,5) << endl;

    // 查找子串：find 返回首次出现的位置
    cout << s.find("World") << endl;

    // 找不到返回 string::npos
    if(s.find("xyz") == string::npos){
        cout << "not found" << endl;
    }

    // 字符串比较：直接用 == 就行
    string a = "hello";
    string b = "hello";
    cout << (a == b) << endl;

    // 字符串拼接
    string c = a + "world";
    cout << c << endl;

    // 遍历每个字符
    for(char c : a){
        cout << c << " ";
    }
    cout << endl;

    return 0;
}