// math_utils.cpp

#include"math_utils.h"

int factorial(int n){
    int sum = 1;
    for(int i = 1;i <= n;i++){
        sum *= i;
    }
    return sum;
}

bool isPrime(int n){
    if(n < 2){
        return false;
    }
    for(int i = 2;i * i <= n;i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}