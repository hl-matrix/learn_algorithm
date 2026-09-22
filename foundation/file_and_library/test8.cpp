#include<iostream>
#include<vector>
using namespace std;

void dfs(vector<int>& path,int depth){
    if(depth == 0){
        // 输出路径
        for(int x : path){
            cout << x << " ";
        }
        cout << endl;
        return;
    }
    for(int i = 1;i <= 3;i++){
        path.push_back(i);
        dfs(path,depth-1);
        path.pop_back();
    }
}

int main(){
    vector<int> path;
    dfs(path,2);
    return 0;
}