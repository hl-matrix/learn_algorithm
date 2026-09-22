#include<iostream>
using namespace std;

int main(){
    // c风格的数组大小在创建后就固定了，不能动态增删元素
    // 声明并初始化
    int nums[] = {10,20,30,40,50};

    // 通过下表访问，下标从0开始
    cout << nums[0] << endl;
    cout << nums[4] << endl;

    // 修改元素
    nums[0] = 99;

    // 数组长度：用sizeof计算
    // sizeof(nums) 是整个数组的字节数
    // sizeof(nums[0]) 是单个元素的字节数
    int len = sizeof(nums)/ sizeof(nums[0]);
    cout << len << endl;

    // 遍历数组
    for(int i = 0;i < len;i++){
        cout << nums[i] << " ";
    }
    cout << endl;
    
    return 0;
}