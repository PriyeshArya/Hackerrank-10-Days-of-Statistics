#include <bits/stdc++.h>
using namespace std;

float calculateMean(vector<float> arr){
    float sum = 0;
    for(float x: arr) sum += x;
    return sum/arr.size();
}

float calculateSD(vector<float> arr, float mean){
    float sum = 0;
    for(float x: arr){
        float result = (x - mean)*(x - mean);
        sum += result;
    }
    return sqrt(sum/arr.size());
}

int main() {
    int n = 0;
    cin >> n;
    
    vector<float> x(10,0);
    vector<float> y(10,0);
    
    for(int i = 0; i < n; i++) cin >> x[i];
    float meanX = calculateMean(x);
    float sdX = calculateSD(x, meanX);

    
    for(int i = 0; i < n; i++) cin >> y[i];
    float meanY = calculateMean(y);
    float sdY = calculateSD(y, meanY);

    
    float num = 0;
    for(int i = 0; i < n; i++) num += (x[i] - meanX)*(y[i] - meanY);
    float den = n*sdX*sdY;
    
    float result = num/den;
    cout << fixed << setprecision(3) << result;
    return 0;
}
