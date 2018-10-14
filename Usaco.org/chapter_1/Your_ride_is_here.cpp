/*
ID: ntselme1
TASK: ride
LANG: C++
*/
#include <iostream>

using namespace std;

int main(){

    freopen ("ride.in", "r", stdin);
    freopen ("ride.out", "w", stdout);

    string n, m;
    cin >> n >> m;

    int prod1 = 1, prod2 = 1;

    for (int i = 0; i < n.size(); i++){
        int tem = n[i];
        prod1 *= (tem - 64);
    }

    for (int i = 0; i < m.size(); i++){
        int tem = m[i];
        prod2 *= (tem - 64);
    }

    if (prod1 % 47 == prod2 % 47)
        cout << "GO" << endl;
    else 
        cout << "STAY" << endl;

    return 0;
}
