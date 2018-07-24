#include <iostream>
#include <string>

using namespace std;

int main(){

    int n, ans = 0, tem;
    cin >> n;

    int a[n];

    char name[n];

    for (int i = 0; i < n; i++){
        cin >> a[i];
        cin >> name[i];
    }

    for (int i = 0; i < n; i++){
        for (int j = i + 1; j < n; j++){
            if (a[i] != 0){
                if (a[i] == a[j]){
                    if (name[i] != name[j]){
                        ans++;
                        a[i] = 0;
                        a[j] = 0;
                        name[i] = 0;
                        name[j] = 0;
                        j = n;
                    }
                }
            }
        }
    }

    cout << ans << endl;

    return 0;
}
