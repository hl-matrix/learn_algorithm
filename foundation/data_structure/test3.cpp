#include<iostream>
#include<vector>
using namespace std;

int main(){
    // 创建3行4列的二维vector，初始值为0
    int rows = 3,cols = 4;
    vector<vector<int>> grid(rows,vector<int>(cols,0));
    
    grid[0][0] = 1;
    grid[1][2] = 5;
    grid[2][3] = 9;

    // 行数和列数
    cout << grid.size() << " 行 " << grid[0].size() << " 列 " << endl;

    // 遍历
    for(int i = 0;i < grid.size();i++){
        for(int j = 0;j < grid[0].size();j++){
            cout << grid[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
