#include <iostream>
 
using namespace std;
 
int main(){
	
	int n, s = 0;
	cin >> n;
	
	int a[n][n];
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			cin >> a[i][j];
		}
	}
	
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			if (i != j){
				if (a[i][j] != a[j][i]){
					s++;
				}
			}
		}
	}
	
	if (s == 0){
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
	}
	
	return 0;
} 
