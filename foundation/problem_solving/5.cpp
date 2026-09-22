#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

struct Student{
    string name;
    int score;
};

int main(){
    // synchronize 同步
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<Student> students = {
        {"Alice",85},
        {"Bob",92},
        {"Charlie",78}
    };

    // 按分数降序排列
    sort(students.begin(),students.end(),[](const Student& a,const Student& b){
        return a.score > b.score;
    });

    for(const Student& s : students){
        cout << s.name << ": " << s.score << "\n";
    }
    cout << endl;


    return 0;
}