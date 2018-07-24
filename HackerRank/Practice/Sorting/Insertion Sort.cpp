#include <bits/stdc++.h>

using namespace std;

void insertionSort1(int n, vector <int> arr) {
    int j, tem;
    for (int i = 1; i < arr.size(); i++){
        tem = arr[i];
        for (j = i - 1; j >= 0 && tem < arr[j]; j--){
            arr[j + 1] = arr[j];
            for (int k = 0; k < arr.size(); k++){
                cout << arr[k] << " ";
            }
            cout << endl;
        }
        arr[j + 1] = tem;
    }
    for (int k = 0; k < arr.size(); k++){
        cout << arr[k] << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0; arr_i < n; arr_i++){
    	cin >> arr[arr_i];
    }
    insertionSort1(n, arr);
    return 0;
}
