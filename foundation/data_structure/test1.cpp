#include<iostream>
#include<vector>
using namespace std;

int main(){
    // 空vector
    vector<int> v1;

    // 指定大小，默认值为0
    vector<int> v2(5); // {0,0,0,0,0}

    // 指定大小和初始值
    vector<int> v3(5,-1); // {-1,-1,-1,-1,-1}

    // 初始化列表
    vector<int> v4 = {1,2,3,4,5};

    // 二维vector：3行4列，初始值为0
    vector<vector<int>> grid(3,vector<int>(4,0));
}