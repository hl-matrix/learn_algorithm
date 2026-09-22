#include<iostream>
#include<stdexcept>
#include<vector>
using namespace std;

int divide(int a,int b){
    if(b == 0){
        // 主动抛出标准库异常
        throw runtime_error("除数不能为0");
    }
    return a/b;
}

int main(){
    vector<int> v = {1,2,3};

    try{
        // v只有3个元素，访问下标10会越界
        // at 会做越界检查，抛out_of_range
        cout << v.at(10) << endl;
    } catch(const out_of_range &e){
        // 用引用接受异常对象，避免额外拷贝
        cout << "越界：" << e.what() << endl;
    }

    try{
        cout << divide(10,0) << endl;
    } catch (const exception &e){
        // 捕获所有的 std::exception 及其子类
        cout << "计算错误：" << e.what() << endl;
    } catch(...){
        // 兜底，捕获任何类型的异常
        cout << "未知异常" << endl;
    }
    
    cout << "程序继续运行" << endl;
    return 0;
}