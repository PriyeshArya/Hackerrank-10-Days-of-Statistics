#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'interQuartile' function below.
 *
 * The function accepts following parameters:
 *  1. INTEGER_ARRAY values
 *  2. INTEGER_ARRAY freqs
 */

void quartiles(vector<int> arr) {
    sort(arr.begin(), arr.end());
    
    float medianLeft = 0;
    float medianMid = 0;
    float medianRight = 0;
    
    int n = arr.size() - 1;
    
    int midInt = 0;
    float midFloat = 0;
    
    //For Middle
    midInt = (0 + n)/2;
    midFloat = (float)(0 + n)/2;
     
    //In Case of Odd No. of Elements
    if((float)midInt == midFloat){
         medianMid = arr.at(midInt);
         
         midInt = midInt - 1;
         midFloat = midFloat - 1;
    }
    //In Case of Even No. of Elements
    else{
         medianMid = (float)(arr.at(midInt) + arr.at(midInt + 1))/2;
         
         midInt = midInt;
         midFloat = (int)midFloat;
    }
     
    //For LeftRight
    midInt = (0 + midInt)/2;
    midFloat = (float)(0 + midFloat)/2;

    if((float)midInt == midFloat){
         medianLeft = arr.at(midInt);
         medianRight = arr.at(n - midInt);
    }
    else{
         medianLeft = (float)(arr.at(midInt) + arr.at(midInt + 1))/2;
         medianRight = (float)(arr.at(n - midInt) + arr.at(n - (midInt + 1)))/2;
    }
    
    float result = medianRight - medianLeft;
    cout << fixed << setprecision(1) << result;
}

void interQuartile(vector<int> values, vector<int> freqs) {
    // Print your answer to 1 decimal place within this function
    int n = values.size();
    vector<int> finalValues;
    for(int i = 0; i< n; i++){
        int term = values.at(i);
        int freq = freqs.at(i);
        
        for(int j = 0; j < freq; j++){
            finalValues.push_back(term);
        }
    }
    quartiles(finalValues);
}

int main()
{
    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    string val_temp_temp;
    getline(cin, val_temp_temp);

    vector<string> val_temp = split(rtrim(val_temp_temp));

    vector<int> val(n);

    for (int i = 0; i < n; i++) {
        int val_item = stoi(val_temp[i]);

        val[i] = val_item;
    }

    string freq_temp_temp;
    getline(cin, freq_temp_temp);

    vector<string> freq_temp = split(rtrim(freq_temp_temp));

    vector<int> freq(n);

    for (int i = 0; i < n; i++) {
        int freq_item = stoi(freq_temp[i]);

        freq[i] = freq_item;
    }

    interQuartile(val, freq);

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}
