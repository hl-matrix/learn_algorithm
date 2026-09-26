#include<iostream>
#include<vector>
using namespace std;

// 用线性探查法解决哈希冲突的简化实现，采用特殊占位符
// 用于标记被删元素的占位符
struct KVNode{
    int key;
    int val;
};

class ExampleLinearProbingHashMap2{
private:
    // 真正存贮键值对的数组
    vector<KVNode*> table;
    // 里面的值可以任意存储，因为只会使用 == 判断指针相等，不用比较里面的值
    KVNode* DELETED = new KVNode{-2,-2};

    // 哈希函数，将键映射到table的索引
    int hash(int key){
        return key % table.size();
    }

    // 线性探查法查找key在table中的索引，如果找不到，返回-1
    int findKeyIndex(int key){
        for(int i = hash(key),step = 0;table[i] != nullptr;i = (i+1) % table.size()){
            if(++step > table.size()) return -1;
            // 遇到占位符直接跳过
            if(table[i] == DELETED) continue;
            if(table[i]->key == key) return i;
        }

        return -1;
    }
public: 
    // 构造函数，初始化哈希表容量
    explicit ExampleLinearProbingHashMap2(int initCapacity){
        table.resize(initCapacity,nullptr);
    }

    // 增/改
    void put(int key,int val){
        int index = findKeyIndex(key);
        // key已存在，修改对应的val，如果key不存在，新建结点并插入表中
        if(index != -1 && table[index] != nullptr){
            table[index]->val = val;
            return;
        }

        KVNode* node = new KVNode{key,val};
        index = hash(key);
        while (table[index] != nullptr && table[index] != DELETED){
            index = (index + 1) % table.size();
        }
        table[index] = node;
    }

    // 删
    void remove(int key){
        int index = findKeyIndex(key);
        // key 不存在，不需要remove
        if (index == -1) return;
        // 直接用占位符表示删除
        table[index] = DELETED;
    }

    // 查
    int get(int key){
        int index = findKeyIndex(key);
        return (index != -1) ? table[index]->val : -1;
    }
};

int main(){
    ExampleLinearProbingHashMap2 map(10);
    map.put(1, 1);
    map.put(2, 2);
    map.put(10, 10);
    map.put(20, 20);
    map.put(30, 30);
    map.put(3, 3);
    cout << map.get(1) << endl;  // Output: 1
    cout << map.get(2) << endl;  // Output: 2
    cout << map.get(20) << endl; // Output: 20

    map.put(1, 100);
    cout << map.get(1) << endl;  // Output: 100

    map.remove(20);
    cout << map.get(20) << endl; // Output: -1
    cout << map.get(30) << endl; // Output: 30

    return 0;
}