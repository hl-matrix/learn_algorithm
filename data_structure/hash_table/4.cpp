#include<vector>
#include<list>
#include<algorithm>
#include<iostream>
using namespace std;

// 用拉链法解决哈希冲突
class ExampleChainingHashMap{
    struct KVNode{
        int key;
        int value;
        KVNode(int key,int value):key(key),value(value){}
    };
    // 底层table数组中的每一个元素是一个链表
    vector<list<KVNode>> table;
public:
    // 使用初始化列表，在创建table时就初始化容量
    ExampleChainingHashMap(int capacity):table(capacity){}

    int hash(int key){
        return key % table.size();
    }
    
    // 查
    int get(int key){
        int index = hash(key);
        if(table[index].empty()){
            return -1;
        }
        for(const auto& node:table[index]){
            if(node.key == key){
                return node.value;
            }
        }
        // 链表中没有目标key
        return -1;
    }

    // 增/改
    void put(int key,int value){
        int index = hash(key);
        if(table[index].empty()){
            // 链表为空，新建一个链表，插入Key-value
            table[index].push_back(KVNode(key,value));
            return;
        }
        // 链表不为空，要遍历一遍看看key是否已经存在
        // 如果存在更新value
        // 如果不存在，插入新结点
        for(auto& node:table[index]){
            if(node.key == key){
                node.value = value;
                return;
            }
        }
        // 链表中没有Key，添加新结点
        table[index].push_back(KVNode(key,value));
    }

    // 删
    void remove(int key){
        auto& list = table[hash(key)];
        if(list.empty()){
            return;
        }
        // 如果key存在，则删除
        // remove_if：遍历整个list，把满足条件的元素删除
        list.remove_if([key](KVNode& node){return node.key == key;});
    }
};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);



    return 0;
}