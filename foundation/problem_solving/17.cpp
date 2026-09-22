#include<iostream>
#include<bitset> 
#include<string>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n = 6;
    cout << bitset<8>(n) << endl;
    string bin = bitset<8>(n).to_string();
    bin = bin.substr(bin.find('1'));
    cout << bin << endl;

    cout << oct << 11 << endl;
    cout << hex << 11 << endl;
    cout << dec;

    cout << stoi("10",nullptr,2) << endl;
    cout << stoi("10",nullptr,8) << endl;

    return 0;
}