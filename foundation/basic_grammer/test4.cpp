#include<iostream>
using namespace std;

int main(){
    auto a = 42;
    auto b = 3.14;
    auto c = 'A';
    auto d = true;
    auto s = string("hello");
    auto e = "hello";
    // 注：s 和 e 是有显著区别的：s->string字符串对象，e-> const * char 是一个指针常量，适用于c语言。
    // auto的本质是语法糖

    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << d << endl;
    cout << e << endl;
    cout << s << endl;

    
    return 0;
}