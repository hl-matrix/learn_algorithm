#include<iostream>
#include<string>
using namespace std;
// 控制流 

int main(){
    // 条件判断if/else

    int score = 85;

    if(score >= 90){
        cout << "优秀" << endl;
    }else if (score >= 60){
        cout << "及格" << endl;
    }else{
        cout << "不及格" << endl;
    }

    // for循环
    for(int i = 0;i < 5;i++){
        cout << i << " ";
    }
    cout << endl;
    
    // 倒序遍历
    for(int i = 5;i > 0;i--){
        cout << i << " ";
    }
    cout << endl;
    
    // 嵌套循环
    for(int i = 1;i < 10;i++){
        for(int j = 1; j <=i ;j++){
            cout << j << " x " << i << " = " << j * i << " ";
        }
        cout << endl;
    }

    // while循环
    int sum = 0;
    int i = 1;
    while(i <= 100){
        sum += i;
        i++;
    }
    cout << sum << endl;

    // do-while：至少执行一次
    int  n = 0;
    do{
        cout << "执行了一次，n = " << n << endl;
    }while(n > 0);
    // 虽然 n = 0 不满足条件，但还是会执行一次

    // range-based for (for-each)
    // 遍历数组
    int nums[] = {10,20,30,40,50};
    for(int x : nums){
        cout << x << " ";
    }
    cout << endl;

    // 遍历字符串中的每个字符
    string s = "hello";
    for(char c : s){
        cout << c << " ";
    }
    cout << endl;

    // 用引用修改数组中的元素
    for(int& x : nums){
        x *= 2;
    }
    for(int x : nums){
        cout << x << " ";
    }
    cout << endl;

    // break 和 continue
    for(int i = 1;i <= 100;i++){
        if(i % 7 == 0){
            cout << "第一个能被7整除的数：" << i << endl;
            break;
        }
    }

    // continue：跳过偶数，只打印奇数
    for(int i = 0;i < 10;i++){
        if(i % 2 == 0){
            continue;
        }
        cout << i << " ";
    }
    cout << endl;

    // swith
    int day;
    cin >> day;

    switch(day){
        case 1:
            cout << "星期一" << endl;
            break;
        case 2:
            cout << "星期二" << endl;
            break;
        case 3:
            cout << "星期三" << endl;
            break;
        case 4: 
            cout << "星期四" << endl;
            break;
        case 5: 
            cout << "星期五" << endl;
            break;
        case 6:
            cout << "星期六" << endl;
            break;
        case 7:
            cout << "星期日" << endl;
            break;
        default:
            cout << "无效输入" << endl;
            break;
    }
    return 0;
}