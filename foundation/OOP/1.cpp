#include<iostream>
#include<string>
using namespace std;

// 用class关键字定义一个类
class Student{
public:
    // 成员变量（属性）
    string name;
    int age;

    // 成员函数（方法）
    void introduce(){
        cout << "我叫" << name << ",今年" << age << "岁！" << endl;
    }

};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    // 创建Student类的实例（对象）
    Student s1;
    s1.name = "小明";
    s1.age = 18;
    s1.introduce();

    

    return 0;
}