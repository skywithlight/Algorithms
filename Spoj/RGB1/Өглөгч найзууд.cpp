/*
ID: ntselme1
LANG: C++
TASK: gift1
*/
#include <iostream>
#include <string>
#include <cstdio>
#include <vector>
#include <map>
 
using namespace std;
 
int main(){
 
    // freopen ("gift1.in","r", stdin);
    // freopen ("gift1.out","w", stdout);
 
    int n, mny, fnd;
    cin >> n;
 
    string name, name2;
 
    map <string, int> a;
    vector<string> b;
 
    for (int i = 0; i < n; i++){
        cin >> name;
        a.insert(make_pair(name, 0));
        b.push_back(name);
    }    
 
    for (int i = 0; i < n; i++){
        cin >> name;
        cin >> mny >> fnd;
        if (mny > 0 && mny % fnd > 0){
            a[name] += (mny % fnd); 
        }
        a[name] -= mny;
        for (int j = 0; j < fnd; j++){
            cin >> name2;
            a[name2] += (mny / fnd);
        }
    }
 
    map<string,int>::iterator el;
    int i = 0;
    for (int i = 0; i < n; i++){
        for (el = a.begin(); el!=a.end(); ++el){
            if (el->first == b[i]){
                cout << el->first << " " << el->second << '\n';
            }
        }
    }
 
 
 
    return 0;
} 
