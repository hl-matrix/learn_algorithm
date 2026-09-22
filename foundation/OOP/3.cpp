#include<iostream>
#include<string>
using namespace std;

class Student{
public:
    string name;
    int age;

    // 两个参数的构造函数
    Student(string name,int age){
        this->name = name;
        this->age = age;
    }

    // 一个参数的构造函数，委托给双参数版本
    Student(string name):Student(name,18){}

    // 无参数构造函数，委托给单参数版本
    Student():Student("未知"){}

    void introduce(){
        cout << "我叫" << name << ",我今年" << age << "岁！" << endl;
    }

};

int main(){
    Student s1("小明",20);
    Student s2("小红");
    Student s3;

    s1.introduce();
    s2.introduce();
    s3.introduce();

    return 0;
}