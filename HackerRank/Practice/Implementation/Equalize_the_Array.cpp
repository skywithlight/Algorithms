#include <bits/stdc++.h>

using namespace std;

int equalizeArray(vector <int> arr) {
    vector<int> count (101, 0);
    for (int i = 0; i < arr.size(); i++)
        count[arr[i]]++;
    int el = 0;
    for (int i = 1; i < 101; i++){
        if (count[i] > el)
            el = count[i];
    }
    return arr.size() - el;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0; arr_i < n; arr_i++){
       cin >> arr[arr_i];
    }
    int result = equalizeArray(arr);
    cout << result << endl;
    return 0;
}
