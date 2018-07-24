#include <bits/stdc++.h>

using namespace std;

// Complete the minimumNumber function below.
int minimumNumber(int n, string password) {
    // Return the minimum number of characters to make the password strong
    long long count_1 = 0, count_2 = 0, count_3 = 0, count_4 = 0, ans = 0;
    for (int i = 0; i < n; i++){
        if (password[i] >= '0' && password[i] <= '9'){
            count_1++;
        }
        if (password[i] >= 97 && password[i] <= 122){
            count_2++;
        }        
        if (password[i] >= 65 && password[i] <= 90){
            count_3++;
        }        
        if (password[i] >= 33 && password[i] <= 47){
            count_4++;
        }        
    }
    if (count_1 == 0)
        ans++;
    if (count_2 == 0)
        ans++;
    if (count_3 == 0)
        ans++;
    if (count_4 == 0)
        ans++;
    while (n + ans < 6){
        ans++;
    }
    return ans;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string password;
    getline(cin, password);

    int answer = minimumNumber(n, password);

    fout << answer << "\n";

    fout.close();

    return 0;
}
