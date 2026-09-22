#include<iostream>
using namespace std;

// 抽象类：包含纯虚函数
class Shape{
public:
    // 纯虚函数：=0 表示没有实现，子类必须实现
    virtual double area() = 0;

    // 普通方法：抽象类也可以有普通方法
    void printArea(){
        cout << "面积：" << area() << endl;
    }
};

class Circle: public Shape{
public: 
    double radius;

    Circle(double r){
        radius = r;
    }

    // 实现纯虚函数
    double area() override {
        return 3.14159 * radius * radius;
    }

};

int main(){
    Circle circle(5);

    circle.printArea();

    return 0;
}