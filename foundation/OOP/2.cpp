#include<iostream>
#include<string>
using namespace std;

class Student{
public:
    string name;
    int age;

    // 构造函数：函数名和类名一样，没有返回值
    Student(string n,int a){
        name = n;
        age = a;
    }

    void introduce(){
        cout << "我叫" << name << ",今年" << age << "岁！" << endl;
    }
};

int main(){
    // 创建对象时直接出参数给构造函数
    Student s1("小明",18);
    s1.introduce();

    return 0;
}