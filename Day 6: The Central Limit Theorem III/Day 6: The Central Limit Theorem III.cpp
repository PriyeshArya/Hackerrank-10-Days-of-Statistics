#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n = 0, mean = 0, sd  = 0;
    cin >> n >> mean >> sd;
    
    float x = 0.0, z = 0.0;
    cin >> x >> z; 
    
    float res = 0.0, A = 0.0, B = 0.0;
    res = z*sd/sqrt(n);
    A = mean - res;
    B = mean + res;
    
    printf("%.2f\n", A);
    printf("%.2f\n", B);
    
    return 0;
}
