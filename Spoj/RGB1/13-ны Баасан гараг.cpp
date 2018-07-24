#include <iostream>
#include <vector>
#include <string>
 
using namespace std;
 
int main(){
	
	int n, k = 0, tem = 30;
	cin >> n;
	
	vector<int> a(7, 0);
	
	for (int i = 1900; i <= 1900 + n - 1; i++){
		if ((i % 100 == 0 && i % 400 == 0) || (i % 100 != 0 && i % 4 == 0)){
			tem = 29;
		} else {
			tem = 28;
		}
		for (int j = 0; j < 12; j++){
			if (j == 0){
				for (int l = 0; l < 31; l++){
					if (k > 6){
						k = 0;
					}
					if (l == 12){
						a[k]++;					
					}
					k++;
				}
			}
			if (j == 1){
				for (int l = 0; l < tem; l++){
					if (k > 6){
						k = 0;
					}
					if (l == 12){
						a[k]++;					
					}
					k++;
				}				
			}
			if (j == 2){
				for (int l = 0; l < 31; l++){
					if (k > 6){
						k = 0;
					}
					if (l == 12){
						a[k]++;					
					}
					k++;
				}
			}
			if (j == 3){
				for (int l = 0; l < 30; l++){
					if (k > 6){
						k = 0;
					}
					if (l == 12){
						a[k]++;					
					}
					k++;
				}
			}
			if (j == 4){
				for (int l = 0; l < 31; l++){
					if (k > 6){
						k = 0;
					}
					if (l == 12){
						a[k]++;					
					}
					k++;
				}
			}
			if (j == 5){
				for (int l = 0; l < 30; l++){
					if (k > 6){
						k = 0;
					}
					if (l == 12){
						a[k]++;					
					}
					k++;
				}
			}
			if (j == 6){
				for (int l = 0; l < 31; l++){
					if (k > 6){
						k = 0;
					}
					if (l == 12){
						a[k]++;					
					}
					k++;
				}
			}
			if (j == 7){
				for (int l = 0; l < 31; l++){
					if (k > 6){
						k = 0;
					}
					if (l == 12){
						a[k]++;					
					}
					k++;
				}
			}
			if (j == 8){
				for (int l = 0; l < 30; l++){
					if (k > 6){
						k = 0;
					}
					if (l == 12){
						a[k]++;					
					}
					k++;
				}
			}
			if (j == 9){
				for (int l = 0; l < 31; l++){
					if (k > 6){
						k = 0;
					}
					if (l == 12){
						a[k]++;					
					}
					k++;
				}
			}
			if (j == 10){
				for (int l = 0; l < 30; l++){
					if (k > 6){
						k = 0;
					}
					if (l == 12){
						a[k]++;					
					}
					k++;
				}
			}
			if (j == 11){
				for (int l = 0; l < 31; l++){
					if (k > 6){
						k = 0;
					}
					if (l == 12){
						a[k]++;					
					}
					k++;
				}
			}
		}
	}
	cout << a[5] << " ";
	cout << a[6] << " ";
	for (int i = 0; i < 5; i++)
		cout << a[i] << " ";
		
	cout << endl;
	
	return 0;
}
