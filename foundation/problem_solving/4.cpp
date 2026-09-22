#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<string> words = {"banana","apple","kiwi","cherry"};

    sort(words.begin(),words.end(),[](const string& a,const string& b){
        return a.length() < b.length();
    });

    for(const string& w : words) cout << w << " ";
    cout << endl;

    return 0;
}