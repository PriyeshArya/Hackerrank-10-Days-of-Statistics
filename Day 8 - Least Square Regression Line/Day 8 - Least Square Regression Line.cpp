#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

float mean(vector<int>&X){
    float Mean = 0;
    for(int i: X) Mean += i;
    Mean /= X.size();
    return Mean;
}
long sum(vector<int>&X){
    long sum = 0;
    for(int i: X)sum += i;
    return sum;
}
long sum(vector<int>&X, vector<int>&Y){
    long sum = 0;
    for(int i = 0; i < X.size(); i++)sum += (X[i]*Y[i]);
    return sum;
}
long sqsum(vector<int>&X){
    long sum = 0;
    for(int i: X)sum += (i*i);
    return sum;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    vector<int> X;
    vector<int> Y;
    for(int i = 0; i < 5; i++){
        int a = 0, b = 0;
        cin >> a >> b;
        X.push_back(a);
        Y.push_back(b);
    }
    int N = X.size();
    float b = 0, a = 0;
    b = (float)(N*sum(X,Y) - sum(X)*sum(Y))/(N*sqsum(X) - sum(X)*sum(X));
    a = mean(Y) - (mean(X) * b);
    float res = a + (b*80);

    printf("%.3f",res);
    return 0;
}
