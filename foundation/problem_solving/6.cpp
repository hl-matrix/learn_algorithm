#include<iostream>
#include<vector>
#include<algorithm> 
using namespace std;

struct Student{
    string name;
    int score;
};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<Student> students = {
        {"Charlie",85},
        {"Alice",92},
        {"Bob",85},
        {"Alice",85}
    };

    sort(students.begin(),students.end(),[](const Student& a,const Student& b){
        // 先按分数降序
        if(a.score != b.score) return a.score > b.score;
        // 分数相同，按名字字典序升序
        return a.name < b.name;
    });

    for(const Student& s : students){
        cout << s.name << " : " << s.score << "\n";
    }

    return 0;
}