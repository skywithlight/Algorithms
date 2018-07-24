#include <iostream>
#include <string>

using namespace std;

int main(){

    int n, i, j, k, save, digit = 1, ans = 0, ans1 = 0, ans2 = 0, ans3 = 0;

	string nums;
	cin >> nums;
	n = nums.length();

    for (i = 0; i < n; i++){
        for (j = 0; j < n - i; j++){
            save = j;
            for (k = 0; k < digit; k++){
                if (nums[save] == 'A'){
					ans1++;
				} 
				if (nums[save] == 'B'){
					ans2++;
				}
				if (nums[save] == 'C'){
					ans3++;
				}
                save++;
            }
            if (ans1 == ans2 && ans2 == ans3){
				ans++;
			}
			ans1 = 0;
			ans2 = 0;
			ans3 = 0;
        }
        digit++;
    }
    cout << ans << endl;

    return 0;
}
