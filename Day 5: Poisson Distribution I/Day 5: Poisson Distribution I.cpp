#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

#define e 2.71828

float factorial(int n)
{
    return (n==1 || n==0) ? 1: n * factorial(n - 1);
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    float lambda, K;
    cin >> lambda >> K;
    float result = (pow(lambda, K) * pow(e, -lambda))/factorial(K);
    
    printf("%.3f", result);
    return 0;
}
