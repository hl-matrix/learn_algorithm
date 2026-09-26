#include<iostream>
#include<vector>
#include<list>
#include<stdexcept>

using namespace std;

template<typename K,typename V>
class MyLinearProbingHashMap2{
    // 键值对结点
    struct KVNode{
        K key;
        V val;

        KVNode(K key,V val):key(key),val(val){}
    };

    // 被删除的KVNode的占位符
    KVNode *DUMMY = new KVNode(K(),V());

    // 真正存储键值对的table数组
    vector<KVNode *> table;
    int size;
    static const int INIT_CAP = 4;
public:
    MyLinearProbingHashMap2():MyLinearProbingHashMap2(INIT_CAP){  
    }

    MyLinearProbingHashMap2(int initCap):size(0){
        table.resize(initCap,nullptr);
    }

    // 增/改
    void put(K key,V val){
        if(size >= table.size() * 0.75){
            resize(table.size() * 2);
        }

        int index = getKeyIndex(key);
        if(index != -1){
            table[index]->val = val;
            return;
        }

        KVNode *x = new KVNode(key,val);
        index = hash(key);
        while(table[index] != nullptr && table[index] != DUMMY){
            index = (index + 1) % table.size();
        }
        table[index] = x;
        size++;
    }

    // 删
    void remove(K key){
        if(size < table.size() * 0.25){
            resize(table.size() / 4);
        }

        int index = getKeyIndex(key);
        if(index == -1){
            return;
        }

        table[index] = DUMMY;
        size--;
    }

    // 查
    V get(K key){
        int index = getKeyIndex(key);
        return index != -1 ? table[index]->val : V();
    }

    bool containsKey(K key){
        return getKeyIndex(key) != -1;
    }

    list<K> keys(){
        list<K> keys;
        for(KVNode *entry : table){
            if(entry != nullptr && entry != DUMMY){
                keys.push_back(entry->key);
            }
        }
        return keys;
    }
private:
    int getKeyIndex(K key){
        int step = 0;
        int index = hash(key);
        while(table[index] != nullptr){
            if(++step > table.size()){
                return -1;
            }
            if(table[index] == DUMMY){
                continue;
            }
            if(table[index]->key == key){
                return index;
            }
            index = (index + 1) % table.size();
        }
        return -1;
    }

    int hash(K key){
        return (std::hash<K>{}(key) & 0x7fffffff) % table.size();
    }

    void resize(int newCap){
        MyLinearProbingHashMap2<K,V> newMap(newCap);
        for(auto entry: table){
            if(entry != nullptr && entry != DUMMY){
                newMap.put(entry->key,entry->val);
            }
        }
        this->table = newMap.table;
    }
};

int main(){
    MyLinearProbingHashMap2<int,int> map;
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

    cout << map.containsKey(20) << endl;
    cout << map.get(20) << endl;
    cout << map.get(30) << endl;

    return 0;
}