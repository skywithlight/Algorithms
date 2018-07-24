#include <iostream>
#include <string>
 
using namespace std;
 
int main(){
 
    int len_1, len_2, tem_1, tem_2, s_1 = 1, s_2 = 1;
 
    string a, b;
    cin >> a;
    cin >> b;
 
    len_1 = a.length();
    len_2 = b.length();
 
    for (int i = 0; i < len_1; i++){
        tem_1 = a[i];
        s_1 = s_1 * (a[i] - 64);
    }
 
    for (int i = 0; i < len_2; i++){
        tem_2 = b[i];
        s_2 = s_2 * (b[i] - 64);
    }
 
    if (s_1 % 47 == s_2 % 47){
        cout << "GO" << endl;
    } else {
        cout << "STAY" << endl;
    }
 
    return 0;
} 
