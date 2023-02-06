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
    
    float A = 0, B = 0;
    cin >> A >> B;
    
    float output1 = 0, output2 = 0, output3 = 0;

    output1 = 1 - (0.5 *(1 + erf((A - mean)/(sd * sqrt(2)))));
    output2 = 1 - (0.5 *(1 + erf((B - mean)/(sd * sqrt(2)))));
    output3 = 0.5 * (1 + erf((B - mean)/(sd * sqrt(2))));
    
    output1 *= 100;
    output2 *= 100;
    output3 *= 100;
        
    printf("%.2f\n",output1);
    printf("%.2f\n",output2); 
    printf("%.2f\n",output3); 
    return 0;
}
