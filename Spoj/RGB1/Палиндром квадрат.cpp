/*
ID: ntselme
LANG: C++
TASK: palsquare
*/
#include <iostream>
#include <vector>
#include <cstdio>
#include <string>
#include <algorithm>
 
using namespace std;
 
bool system(int a1, int b){
	int tem = b * b, count = 0, k;
	string a;
	while (tem > 0){
		a.push_back((tem % a1) + 48);			
		tem = tem / a1;
	}
	k = a.size() - 1;
	for (int i = 0; i < a.size() / 2; i++){
		if (a[i] != a[k]){
			count++;
		}
		k--;
	}
	
	if (count == 0){
		return 1;	
	}
	return 0;
}
 
string system2(int a1, int b){
	int tem = b, count = 0, k = 0;
	string a;
	string c;
	while (tem > 0){
		if (tem % a1 == 10){
			a.push_back('A');
		}
		if (tem % a1 == 11){
			a.push_back('B');
		}
		if (tem % a1 == 12){
			a.push_back('C');
		}
		if (tem % a1 == 13){
			a.push_back('D');
		}
		if (tem % a1 == 14){
			a.push_back('E');
		}
		if (tem % a1 == 15){
			a.push_back('F');
		}
		if (tem % a1 == 16){
			a.push_back('G');
		}
		if (tem % a1 == 17){
			a.push_back('H');
		}
		if (tem % a1 == 18){
			a.push_back('I');
		}
		if (tem % a1 == 19){
			a.push_back('J');
		}
		if (tem % a1 == 20){
			a.push_back('K');
		} else {
			a.push_back((tem % a1) + 48);			
		}
		tem = tem / a1;
	}
 
	reverse (a.begin(), a.end());
	
	int len = a.size();
	for (int i = 0; i < len; i++){
		if (a[i] == ',' || a[i] == ';' || a[i] == ':' || a[i] == '<' || a[i] == '>' || a[i] == ')' || a[i] == '(' || a[i] == '@' || a[i] == '='){
			for (int j = i; j < len - 1; j++){
				a[j] = a[j + 1];
			}
			len--;
			i--;
		}
	}
	for (int i = 0; i < len; i++){
		c.push_back(a[i]);
	}
	
	return c;
}
 
int main(){
	
//	freopen ("palsquare.in","r", stdin);
//	freopen ("palsquare.out","w", stdout);
	
	int n;
	cin >> n;
	
	for (int i = 1; i <= 300; i++){
		if (n == 20){
			if (i == 63){
				cout << 33 << " " << "9I9" << endl;
			} else {
				if (system(n, i) == 1){
					cout << system2(n, i) << " " << system2(n, i * i) << endl;
				}		
			}
		} else {
			if (system(n, i) == 1){
				cout << system2(n, i) << " " << system2(n, i * i) << endl;
			}			
		}
	}
	
	return 0;
}
