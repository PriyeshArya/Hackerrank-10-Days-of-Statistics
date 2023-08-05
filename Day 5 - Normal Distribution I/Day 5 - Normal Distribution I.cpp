#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    float mean = 0, sd = 0;
    cin >> mean >> sd;
    
    float lessThan = 0;
    cin >> lessThan;
    
    float betweenL = 0, betweenH = 0;
    cin >> betweenL >> betweenH;
    
    float output1 = 0, output2 = 0;

    output1 = 0.5 * (1 + erf((lessThan - mean)/(sd * sqrt(2))));
    output2 = (0.5 *(1 + erf((betweenH - mean)/(sd * sqrt(2))))) - (0.5 *(1 + erf((betweenL - mean)/(sd * sqrt(2)))));
    printf("%.3f\n",output1);
    printf("%.3f",output2);
    return 0;
}
