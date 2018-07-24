#include <bits/stdc++.h>

using namespace std;

string solve(vector < int > a){
    vector<int> dp(a.size());
    if (a.size() == 1)
        return "YES";
    dp[0] = a[0];
    for (int i = 1; i < a.size(); i++)
        dp[i] = dp[i - 1] + a[i];
    for (int i = 1; i < dp.size() - 1; i++){
        if ((dp[i] - a[i]) == dp[dp.size() - 1] - dp[i]){
            return "YES";
        }
    }
    return "NO";
}

int main() {
    int T;
    cin >> T;
    for(int a0 = 0; a0 < T; a0++){
        int n;
        cin >> n;
        vector<int> a(n);
        for(int a_i = 0; a_i < n; a_i++){
        	cin >> a[a_i];
        }
        string result = solve(a);
        cout << result << endl;
    }
    return 0;
}
