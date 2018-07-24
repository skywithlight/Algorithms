#include <bits/stdc++.h>

using namespace std;

// Complete the pangrams function below.
string pangrams(string s) {
    vector<int> count(26, 0);
    for (int i = 0; i < s.size(); i++){
        if (s[i] >= 'A' && s[i] <= 'Z')
            s[i] = s[i] + 32;
    }\
    for (int i = 0; i < s.size(); i++){
        if (s[i] >= 'a' && s[i] <= 'z'){
            count[s[i] - 'a']++;            
        }
    }

    bool checker = true;
    for (int i = 0; i < 26 && checker; i++){
        if (count[i] == 0){
             checker = false;
        }

    }
    if (checker)
        return "pangram";
    else
        return "not pangram";
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = pangrams(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
