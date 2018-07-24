#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the digitSum function below.
int digitSum(string a) {
    if (a.size() == 1){
        int ans = a[0] - 48;
        return ans;        
    }

    long long tem = 0, tem2 = 0;
    for (int i = 0; i < a.size(); i++){
        tem += (a[i] - 48);
    }
    while (tem > 0){
        tem2 = tem2 * 10 + (tem % 10);
        tem /= 10;
    }
    a.clear();
    while (tem2 > 0){
        a.push_back((tem2 % 10) + 48);
        tem2 /= 10;
    }
    return digitSum(a);
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string nk_temp;
    getline(cin, nk_temp);

    vector<string> nk = split_string(nk_temp);

    string n = nk[0];

    int k = stoi(nk[1]);
    long long tem = 0, tem2 = 0;
    for (int i = 0; i < n.size(); i++){
        tem += (n[i] - 48);
    }
    tem = tem * k;
    while (tem > 0){
        tem2 = tem2 * 10 + (tem % 10);
        tem /= 10;
    }
    n.clear();
    while (tem2 > 0){
        n.push_back((tem2 % 10) + 48);
        tem2 /= 10;
    }

    int result = digitSum(n);

    fout << result << "\n";

    fout.close();

    return 0;
}

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}
