#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {

    int n = 0;
    cin >> n;
    
    vector<int> values;
    vector<int> count(100001, 0); 
    
    int average = 0;
    int maxIndex = 0;
    float mean = 0;
    float median = 0;
    int mode = 0;
    
    for(int i = 0; i < n; i++){
        int temp;
        cin >> temp;
        values.push_back(temp);
    }
    
    sort(values.begin(),values.end());
    
    for(int i: values){
        average += i;
        count.at(i)++;
    }
    int curMax = 0;
    
    for(int i = 0; i < 100001; i++){
        int temp = count.at(i);
        
        if(temp > curMax){
            curMax = temp;
            maxIndex = i;
        }
    }
    
    //Mean
    mean = (float)average/n;
    
    //Median
    int mid = n/2;
    if(n%2 == 0){
        median = (float)(values.at(mid) + values.at(mid-1))/2;
    }
    else{
        median = (float)values.at(mid-1);
    }
    
    //Mode
    mode = maxIndex;
    
     
    printf("%.1f\n",mean);
    printf("%.1f\n",median);
    printf("%d",mode);
    return 0;
}
