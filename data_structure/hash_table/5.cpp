#include<iostream>
#include<memory>
#include<string>

#include<list>
#include<vector>
using namespace std;

template<typename K,typename V>
class MyChainingHashMap{
private:
    // 拉链法使用的单链表结点，存储key-value对
    struct KVNode{
        K key;
        V value;
        KVNode(K key,V value):key(key),value(value){}
    };
    vector<list<KVNode>> table;

    // 哈希表中存入的键值对个数
    int size_;
    // 底层数组的初始容量
    // static->类属性 constexpr->类似const，在编译阶段确认，不可修改
    static constexpr int INIT_CAP = 4;

    // 哈希函数
    int hash(K key){
        return (std::hash<K>{}(key) & 0x7fffffff) % table.size();
    }

    void resize(int newCap){
        // 构建一个新的HashMap
        newCap = max(newCap,1);
        MyChainingHashMap<K,V> newMap(newCap);
        // 穷举当前HashMap中的所有键值对
        for(auto &list: table){
            for(auto& node:list){
                // 将键值对转移到新的HashMap中
                newMap.put(node.key,node.value);
            }
        }
        this->table = newMap.table;
    }
public:
    MyChainingHashMap():MyChainingHashMap(INIT_CAP){}
    // explicit只允许对象显示转换，不允许隐式转换
    explicit MyChainingHashMap(int initCapacity){
        size_ = 0;
        // 保证底层数据的容量至少为1
        initCapacity = max(initCapacity,1);
        table.resize(initCapacity);
    }

    // 增/改
    void put(K key,V val){
        auto &list = table[hash(key)];
        for(auto& node:list){
            if(node.key == key){
                node.value = val;
                return;
            }
        }
        // 如果key之前不存在，则插入，size增加
        list.emplace_back(key,val);
        size_++;
        // 如果元素量超过了负载因子，进行扩容
        if(size_ >= table.size() * 0.75){
            resize(table.size() * 2);
        }
    }

    // 删
    void remove(K key){
        auto &list = table[hash(key)];
        // 如果Key存在，则删除，size减少
        for(auto it = list.begin();it != list.end();++it){
            if(it->key == key){
                list.erase(it);
                size_--;

                // 缩容，当负载因子小于0.125时，缩容
                if(size_ <= table.size() / 8){
                    resize(table.size() / 4);
                }
                return;
            }
        }
    }    

    // 查
    V get(K key){
        const auto &list = table[hash(key)];
        for(const auto &node:list){
            if (node.key == key){
                return node.value;
            }
        }
        return nullptr;
    }

    // 返回所有 key
    list<K> keys(){
        list<K> keys;
        for(const auto &list:table){
            for(const auto &node: list){
                keys.push_back(node.key);
            }
        }
        return keys;
    }

    // 其他工具函数

    int size() const{
        return size_;
    }

};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    MyChainingHashMap<int,shared_ptr<int>> map;
    map.put(1,make_shared<int>(1));
    map.put(2,make_shared<int>(2));
    map.put(3,make_shared<int>(3)); 
    cout << *map.get(1) << endl;
    cout << *map.get(2) << endl;

    map.put(1,make_shared<int>(100));
    cout << *map.get(1) << endl;

    map.remove(2);
    cout << (map.get(2) == nullptr ? "null" : to_string(*map.get(2))) << endl;

    for(const auto key : map.keys()){
        cout << key << " ";
    }
    cout << endl;

    map.remove(1);
    map.remove(2);
    map.remove(3);
    cout << (map.get(1) == nullptr ? "null" : to_string(*map.get(1))) << endl;


    return 0;
}


/*
其中shared_ptr<int>很有意思
1. <memory>头文件中的智能指针，当没有任何shared_ptr指向某块内存时，它会自动释放
2. 用于既要指向int类型，又要指向nullptr
3. make_shared<int>(1)，是高效（只分配一次内存）创建该类型的方式，它的作用是在堆上
创建一个值为1的int，然后用shared_int包起来返回


*/