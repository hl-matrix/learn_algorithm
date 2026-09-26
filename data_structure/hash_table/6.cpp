// 线性探查法的基本逻辑，伪码实现

class KVNode{
public:
    int key;
    int value;
    KVNode(int k,int v):key(k),value(v){}
};

class MyLinearProbingHashMap{
private:
    // 数组中每个元素都存一个键值对
    KVNode* table[10] = {nullptr};

    int hash(int key){
        return key % 10;
    }

public:
    // 析构函数
    ~MyLinearProbingHashMap(){
        for(int i = 0;i < 10;i++){
            if(table[i] != nullptr){
                delete table[i];
                table[i] = nullptr;
            }
        }
    }

    void put(int key,int value){
        int index = hash(key);
        KVNode* node = table[index];
        if(node == nullptr){
            table[index] = new KVNode(key,value);
        } else {
            // 线性探查法的逻辑
            // 向后探查，直到找到 key 或者找到空位
            while(index < 10 && table[index] != nullptr && table[index]->key != key){
                index++;
            }
            delete table[index];
            table[index] = new KVNode(key,value);
        }
    }

    int get(int key){
        int index = hash(key);
        // 向后探查，直到找到 key 或者找到空位
        while(index < 10 && table[index] != nullptr && table[index]->key != key){
            index++;
        }
        if(index >= 10 || table[index] == nullptr){
            return -1;
        }
        return table[index]->value;
    }

    void remove(int key){
        int index = hash(key);
        // 向后探查，直到找到key或者找到空位
        while(index < 10 && table[index] != nullptr && table[index]->key != key){
            index++;
        }
        // 删除 table[index]
        // ...
    }
};