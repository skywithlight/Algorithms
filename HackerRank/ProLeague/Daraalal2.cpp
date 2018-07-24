#include <iostream>

using namespace std;

int main(){

    int n, count = 0, max = 0, tem, tem2, sum = 0;
    cin >> n;

    for (int i = 1; i <= n; i++){
        tem = i;
        while (tem > 0){
            if (tem % 2 == 1){
                count++;
            }
            tem = tem / 2;
        }
        if (count > max){
            max = count;
            tem2 = i;
        }
        count = 0;
    }

    sum = sum + tem2;

    for (int i = 1; i <= n; i++){
        if (i != tem2){
            tem = i;
            while (tem > 0){
                if (tem % 2 == 1){
                    count++;
                }
                tem = tem / 2;
            }
            if (count == max){
                sum = sum + i;
            }
            count = 0;            
        }
    }

    cout << sum << endl;

    return 0;
}
