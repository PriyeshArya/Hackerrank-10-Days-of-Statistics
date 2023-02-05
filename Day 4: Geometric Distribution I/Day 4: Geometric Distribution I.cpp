#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    float defect, total;
    cin >> defect >> total;
    float n;
    cin >> n;
    
    float p_defect = defect/total;
    float p_correct = 1 - p_defect;
    
    float result = p_defect * pow(p_correct, (n-1));
    
    printf("%.3f",result);
    return 0;
}
