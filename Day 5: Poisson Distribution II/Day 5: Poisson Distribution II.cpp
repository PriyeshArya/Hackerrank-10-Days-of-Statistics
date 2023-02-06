#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    float meanA = 0, meanB = 0;
    cin >> meanA >> meanB;
    
    float expA = 160 + 40*(meanA*meanA + meanA);
    float expB = 128 + 40*(meanB*meanB + meanB);
    
    printf("%.3f\n",expA);
    printf("%.3f", expB);
    return 0;
}
