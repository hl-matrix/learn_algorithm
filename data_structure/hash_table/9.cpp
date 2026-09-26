#include<iostream>
#include<vector>
#include<list>
#include<stdexcept>

using namespace std;

template<typename K,typename V>
class MyLinearProbingHashMap1{
private:
    struct KVNode{
        K key;
        V val;

        KVNode(K key,V val):key(key),val(val){}
    };

    vector<KVNode *> table;
    int size_;
    static const int INIT_CAP = 4;
public:
    MyLinearProbingHashMap1(): MyLinearProbingHashMap1(INIT_CAP){
    }

    MyLinearProbingHashMap1(int initCapacity):size_(0){
        table.resize(initCapacity,nullptr);
    }

    // 增/改
    void put(K key,V val){
        // 把负载因子默认设为0.75，超过则扩容
        if(size_ >= table.size() * 0.75){
            resize(table.size() * 2);
        }

        int index = getKeyIndex(key);
        // key 已存在，修改对应的val
        if(table[index] != nullptr){
            table[index]->val = val;
            return;
        }

        // key 不存在，在空位插入
        table[index] = new KVNode(key,val);
        size_++;
    }

    // 删
    // 删除key和对应的val
    void remove(K key){
        // 缩容，当负载因子小于0.125时，缩容
        if (size_ < table.size() * 0.125){
            resize(table.size() / 4);
        }

        int index = getKeyIndex(key);
        if(table[index] == nullptr){
            return;
        }

        // 开始remove
        delete table[index];
        table[index] = nullptr;
        size_--;
        // 保持元素连续性，进行rehash
        index = (index + 1) % table.size();
        while(table[index] != nullptr){
            KVNode* node = table[index];
            table[index] = nullptr;
            put(node->key,node->val);
            size_--;
            delete node;
            index = (index + 1) % table.size();
        }
    }

    // 查
    V get(K key){
        int index = getKeyIndex(key);
        return table[index] == nullptr ? V() : table[index]->val;
    }

    // 返回所有key
    list<K> keys(){
        list<K> keys;
        for (KVNode *entry : table){
            if (entry != nullptr){
                keys.push_back(entry->key);
            }
        }
        return keys;
    }

    // 其他工具函数
    int size() const{
        return size_;
    }
private:    
    // 哈希函数
    int hash(K key){
        return (std::hash<K>{}(key) & 0x7fffffff) % table.size();
    }

    // 对key进行线性探查，返回一个索引
    int getKeyIndex(K key){
        int index = hash(key);
        while(table[index] != nullptr){
            if (table[index]->key == key){
                return index;
            }
            index = (index + 1) % table.size();
        }
        return index;
    }

    void resize(int newCap){
        MyLinearProbingHashMap1<K,V> newMap(newCap);
        for(KVNode *entry : table){
            if(entry != nullptr){
                newMap.put(entry->key,entry->val);
            }
        }
        table = move(newMap.table);
    }
};

int main(){
    MyLinearProbingHashMap1<int,int> map;
    map.put(1,1);
    map.put(2,2);
    map.put(10,10);
    map.put(20,20);
    map.put(30,30);
    map.put(3,3);
    cout << map.get(1) << endl;
    cout << map.get(2) << endl;
    cout << map.get(20) << endl;

    map.put(1,100);
    cout << map.get(1) << endl;

    map.remove(20);
    cout << map.get(20) << endl;
    cout << map.get(30) << endl;

    return 0;
}