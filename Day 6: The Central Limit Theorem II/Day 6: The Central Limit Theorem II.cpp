#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int sum = 0, n = 0;
    float mean = 0, sd = 0;
    cin >> sum >> n;
    cin >> mean >> sd;
    
    float pr = (sum - n*mean)/(sqrt(n)*sd);
    float res = (1.0 + erf(pr/sqrt(2)))/2;
    printf("%.4f",res);
    return 0;
}
