#include <bits/stdc++.h>

using namespace std;

int runningTime(vector <int> arr) {
    int ans = 0, j;
    for (int i = 1; i < arr.size(); i++){
        int tem = arr[i];
        for (j = i - 1; j >= 0 && tem < arr[j]; j--){
            arr[j + 1] = arr[j];        
            ans++;
        }

        arr[j + 1] = tem;
    }
    return ans;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0; arr_i < n; arr_i++){
    	cin >> arr[arr_i];
    }
    int result = runningTime(arr);
    cout << result << endl;
    return 0;
}
