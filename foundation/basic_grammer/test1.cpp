#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    // 输入
    string name,line;
    int age;
    cin >> name >> age;
    cin.ignore();
    getline(cin,line);
    cout << "姓名：" << name << endl;
    cout << "年龄：" << age << endl;
    cout << "整行读取：" << line << endl;

    // 控制小数位数
    double pi = 3.14159265357;
    cout << pi << endl;
    cout << fixed << setprecision(3) << pi << endl;

    // 循环读取
    // int x;
    // while (cin >> x){
    //     cout << x << "\n";
    // }
    return 0;
}