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

    int pro1 = 1, pro2 = 1;

    for (int i = 0; i < n.size(); i++){
        int tem = n[i];
        pro1 *= (tem - 64);
    }

    for (int i = 0; i < m.size(); i++){
        int tem = m[i];
        pro2 *= (tem - 64);
    }

    if (pro1 % 47 == pro2 % 47)
        cout << "GO" << endl;
    else 
        cout << "STAY" << endl;

    return 0;
}
