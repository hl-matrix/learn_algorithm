#include<iostream>
using namespace std;

class BankAccount{
private:
    // 私有成员
    double balance;

public:
    // 构造函数
    BankAccount(double initialBalance){
        balance = initialBalance;
    }

    // 公开方法：存钱
    void deposit(double amount){
        if(amount > 0){
            balance += amount;
            cout << "存入 " << amount << " 元" << endl;
        } else {
            cout << "存入金额必须大于0" << endl;
        }
    }

    // 公开方法：查询金额
    double getBalance(){
        return balance;
    }


};

int main(){
    BankAccount account(10000000);

    account.deposit(5000000);

    cout << "余额：" << account.getBalance() << endl;

    return 0;
}