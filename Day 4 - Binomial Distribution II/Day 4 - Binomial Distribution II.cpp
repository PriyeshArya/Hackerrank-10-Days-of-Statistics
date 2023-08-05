#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

float factorial(int n){
    return (n==1 || n==0) ? 1: n * factorial(n - 1);
}

float binomial(float x, float n, float p){
    float result = 0;
    
    float combination = factorial(n)/(factorial(x)*factorial(n-x));
    result = combination * pow(p,x) * pow((1 - p),(n - x));
    return result;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    float faulty = 0, total = 0;
    cin >> faulty >> total;
    
    float p = faulty/100;
    
    float x = 2;
    float result = 0;
    
    for(int i = 0; i <= x; i++){
        result += binomial(i, total, p);
    }
    printf("%.3f\n", result);
    
    result = 0;
    
    for(int i = x; i <= total; i++){
        result += binomial(i, total, p);
    } 
    printf("%.3f",result);
    
    return 0;
}
