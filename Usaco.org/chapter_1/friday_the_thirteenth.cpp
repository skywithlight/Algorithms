/*
ID: ntselme1
TASK: friday
LANG: C++
*/
#include <iostream>
#include <vector>

using namespace std;

int main(){

    freopen ("friday.in", "r", stdin);
    freopen ("friday.out", "w", stdout);

    int n, day = 0, count;
    cin >> n;

    vector<int> a(7, 0);

    for (int i = 1900; i <= 1900 + n - 1; i++){
        count = 28;
        if ((i % 100 == 0 && i % 400 == 0) || (i % 100 != 0 && i % 4 == 0)){
            count = 29;
        }
        for (int j = 0; j < 31; j++){
            if (j == 12)
                a[day]++;
            day++;
            if (day > 6){
                day = 0;
            }
        }
        for (int j = 0; j < count; j++){
            if (j == 12)
                a[day]++;
            day++;
            if (day > 6){
                day = 0;
            }
        }
        for (int j = 0; j < 31; j++){
            if (j == 12)
                a[day]++;
            day++;
            if (day > 6){
                day = 0;
            }
        }
        for (int j = 0; j < 30; j++){
            if (j == 12)
                a[day]++;
            day++;
            if (day > 6){
                day = 0;
            }
        }
        for (int j = 0; j < 31; j++){
            if (j == 12)
                a[day]++;
            day++;
            if (day > 6){
                day = 0;
            }
        }
        for (int j = 0; j < 30; j++){
            if (j == 12)
                a[day]++;
            day++;
            if (day > 6){
                day = 0;
            }
        }
        for (int j = 0; j < 31; j++){
            if (j == 12)
                a[day]++;
            day++;
            if (day > 6){
                day = 0;
            }
        }
        for (int j = 0; j < 31; j++){
            if (j == 12)
                a[day]++;
            day++;
            if (day > 6){
                day = 0;
            }
        }
        for (int j = 0; j < 30; j++){
            if (j == 12)
                a[day]++;
            day++;
            if (day > 6){
                day = 0;
            }
        }
        for (int j = 0; j < 31; j++){
            if (j == 12)
                a[day]++;
            day++;
            if (day > 6){
                day = 0;
            }
        }
        for (int j = 0; j < 30; j++){
            if (j == 12)
                a[day]++;
            day++;
            if (day > 6){
                day = 0;
            }
        }
        for (int j = 0; j < 31; j++){
            if (j == 12)
                a[day]++;
            day++;
            if (day > 6){
                day = 0;
            }
        }
    }

    cout << a[5] << " " << a[6] << " " << a[0] << " " << a[1] << " " << a[2] << " " << a[3] << " " << a[4];
    cout << endl;
    return 0;
}
