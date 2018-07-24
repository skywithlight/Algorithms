#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

/*
 * Complete the buildString function below.
 */
int buildString(int a, int b, string s) {
    
    int alp = 26, n = s.length(), count = 1;
    vector< vector<int> > twenty_six(alp);
    
    vector<long long> dp(n);
    vector<long long> memo(n);
    dp[0] = a;
    twenty_six[s[0] - 'a'].push_back(0);
    for (int i = 1; i < n; i++){
        memo[i] = ((s[i - 1] - 'a') * 26) + (s[i] - 'a');
        // cout << "memo: " << count << " " << memo[i] << endl;
        // count++;
        long long min = dp[i - 1] + a;
        for (int j = 0; j < twenty_six[s[i] - 'a'].size(); j++){
            int end = twenty_six[s[i] - 'a'][j];
            int last = i, cmp = 0;
            
            while (end >= 1 && last - 1 > twenty_six[s[i] - 'a'][j] && memo[end] == memo[last]){
                cmp += 2;
                end -= 2;
                last -= 2;
            }
        
            if (end >= 0 && last > twenty_six[s[i] - 'a'][j] && s[end] == s[last]){
                cmp++;
                last--;
            }
            
            if (cmp > 0 && dp[last] + b < min)
                min = dp[last] + b;            
        }
        dp[i] = min;
        // cout << min << endl;
        twenty_six[s[i] - 'a'].push_back(i);
    }
    
    
    return dp[n - 1];

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int t_itr = 0; t_itr < t; t_itr++) {
        string nab_temp;
        getline(cin, nab_temp);

        vector<string> nab = split_string(nab_temp);

        int n = stoi(nab[0]);

        int a = stoi(nab[1]);

        int b = stoi(nab[2]);

        string s;
        getline(cin, s);

        int result = buildString(a, b, s);
        
        // cout << result << endl;

        fout << result << endl;
    }

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
