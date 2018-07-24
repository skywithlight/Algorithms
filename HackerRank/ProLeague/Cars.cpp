#include <iostream>

using namespace std;

int main(){
	
	int n, a4 = 0, a6 = 0, a8 = 0;
	cin >> n;
	
	if (n % 8 == 0){
		a8 = n / 8;
	} else {
		if ((n % 8) % 6 == 0){
			a8 = n / 8;
			a6 = (n % 8) / 6;
 		} else {
 			if (((n % 8) % 6) % 4 == 0){
 				a8 = n / 8;
 				a6 = (n % 8) / 6;
 				a4 = ((n % 8) % 6) / 4;
			 } else {
			 	if (n % 6 == 0){
			 		a6 = n / 6; 
				} else {
					if ((n % 8) % 4 == 0){
                        a8 = n / 8;
                        a4 = (n % 8) / 4;
                    } else {
                        if ((n % 6) % 4 == 0){
                            a6 = n / 6;
                            a4 = (n % 6) / 4;
                        } else {
                            if (n % 4 == 0){
                                a4 = n / 4;
                            }
                        }
                    } 
				}
			 }
		 }
	}
	
	cout << a4 << " "<< a6 << " " << a8 << endl;
	
	return 0;
}
