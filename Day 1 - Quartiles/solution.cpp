#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'quartiles' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts INTEGER_ARRAY arr as parameter.
 */


vector<int> quartiles(vector<int> arr) {
    sort(arr.begin(), arr.end());
    vector<int> result;
    
    int medianLeft = 0;
    int medianMid = 0;
    int medianRight = 0;
    
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
         medianMid = (arr.at(midInt) + arr.at(midInt + 1))/2;
         
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
         medianLeft = (arr.at(midInt) + arr.at(midInt + 1))/2;
         medianRight = (arr.at(n - midInt) + arr.at(n - (midInt + 1)))/2;
    }
    
    result.push_back(medianLeft);
    result.push_back(medianMid);
    result.push_back(medianRight);
    
    return result;
    
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    string data_temp_temp;
    getline(cin, data_temp_temp);

    vector<string> data_temp = split(rtrim(data_temp_temp));

    vector<int> data(n);

    for (int i = 0; i < n; i++) {
        int data_item = stoi(data_temp[i]);

        data[i] = data_item;
    }

    vector<int> res = quartiles(data);

    for (size_t i = 0; i < res.size(); i++) {
        fout << res[i];

        if (i != res.size() - 1) {
            fout << "\n";
        }
    }

    fout << "\n";

    fout.close();

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
