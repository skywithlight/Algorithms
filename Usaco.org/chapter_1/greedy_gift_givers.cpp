/*
ID: ntselme1
TASK: gift1
LANG: C++
*/
#include <iostream>
#include <vector>
#include <cstdio>
#include <map>

using namespace std;

int main(){

    freopen ("gift1.in", "r", stdin);
    freopen ("gift1.out", "w", stdout);

    int n, mny, frn;
    cin >> n;

    string name, name2;

    map <string, int> a;
    vector <string> b; 

    for (int i = 0; i < n; i++){
        cin >> name;
        a.insert(make_pair(name, 0));
        b.push_back(name);
    }

    for (int i = 0; i < n; i++){
        cin >> name;
        cin >> mny >> frn;
        a[name] -= mny;
        if (mny > 0 && mny % frn> 0){
            a[name] += (mny % frn);
        }
        for (int j = 0; j < frn; j++){
            cin >> name2;
            a[name2] += (mny / frn);
        }
    }

    map<string,int>::iterator el;
    for (int i = 0; i < n; i++){
        for (el = a.begin(); el!=a.end(); ++el){
            if (el->first == b[i]){
                cout << el->first << " " << el->second << '\n';
            }
        }
    }
 

    return 0;
}
