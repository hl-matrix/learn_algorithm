#include<iostream>
#include<string>
using namespace std;

class Animal{
public:
    string name;

    Animal(string name){
        this->name = name;
    }

    // virtual声明虚函数，允许子类重写
    virtual void speak(){
        cout << name << "发出声音" << endl;
    }
};

class Dog:public Animal{
public:
    Dog(string name):Animal(name){};

    // override 表示重写父类方法
    void speak() override{
        cout << name << "：汪汪汪" << endl;
    }
};

class Cat:public Animal{
public: 
    Cat(string name):Animal(name){}

    void speak() override { 
        cout << name << "：喵喵喵！" << endl;
    }
};

int main(){
    Dog dog("旺财");
    Cat cat("咪咪");

    // 直接输出
    dog.speak();
    cat.speak();

    // 多态：用父类指针指向子类对象
    Animal* animals[2];
    animals[0] = &dog;
    animals[1] = &cat;

    cout << "--- 多态演示 ---" << endl;
    for(int i = 0;i < 2;i++){
        animals[i]->speak();
    }

    return 0;
}