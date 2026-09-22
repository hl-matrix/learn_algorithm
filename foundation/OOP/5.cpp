#include<iostream>
#include<string>
using namespace std;

// 基类（父类）
class Animal{
public:
    string name;

    Animal(string name){
        this->name = name;
    }

    void eat(){
        cout << name << "在吃东西" << endl;
    }
};

// 派生类（子类），用：public Animal 继承
class Dog:public Animal{
public:
    string breed;

    // 子类构造函数通过初始化列表调用父类构造函数
    Dog(string name,string breed):Animal(name){
        this->breed = breed;
    }

    // 子类特有的方法
    void fetch(){
        cout << name << "在捡球，品种：" << breed << endl;
    }
};

int main(){
    Dog dog("旺财","金毛");

    // 继承了父类的方法
    dog.eat();

    // 子类自己的方法
    dog.fetch();

    return 0;
}