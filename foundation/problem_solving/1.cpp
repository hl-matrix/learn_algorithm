#include<iostream>
using namespace std;
// cin/cout 基本模板

int main(){
    // 第一行读取测试用例数量
    int n;
    cin >> n;

    for(int i = 0;i < n;i++){
        int a,b;
        cin >> a >> b;
        cout << a + b << endl;
    }

    // 另一种模式是不知道有多少行输入，用while(cin >> ...)
    // int c,d;
    // while(cin >> c >> d){
    //     cout << c + d << endl;
    // }

    // 读取一整行
    cin.ignore();
    string line;
    getline(cin,line);
    cout << line << endl;
    return 0;
}