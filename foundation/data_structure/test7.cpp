#include<iostream>
#include<cctype>
using namespace std;
int main(){
    cout << (char)toupper('a') << endl;
    cout << isalpha('1') << endl;
    cout << to_string(123) << endl;

    return 0;
}