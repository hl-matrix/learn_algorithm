#include<iostream>
#include<cctype> 
using namespace std;
// 字符判断和转换

int main(){
    // isdigit:是否为数字字符 '0' - '9'
    cout << (isdigit('3') != 0) << endl;

    // isalpha：是否为字母
    cout << (isalpha('a') != 0) << endl;

    // toupper/tolower：大小写转换
    cout << (char)toupper('a') << endl;
    cout << (char)tolower('A') << endl;

    // 常用技巧：字母转数字索引(a=0,b=1...)
    char letter = 'd';
    int index = letter - 'a';
    cout << index;
    
    return 0;
}