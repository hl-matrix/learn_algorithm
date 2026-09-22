#include<iostream>
#include<string>
using namespace std;

// 类模板：K 和 V 是参数类型
template<typename K,typename V>
class Pair{
public:
    K key;
    V value;

    Pair(K key,V value){
        this->key = key;
        this->value = value;
    }

    void print(){
        cout << key << " -> " << value << endl;
    }
};

int main(){
    // 使用时用尖括号指定类型
    Pair<string,int> p1("age",20);
    p1.print();

    return 0;
}