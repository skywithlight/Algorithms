#include <iostream>

    using namespace std;

    int main (){

        int x1, y1, x2, y2, x3, y3, rect[2][3];
        int t, n;

        bool c;

        cin >> t;

        for (int l = 0; l < t; l++){
            c = false;
            cin >> n;
            int m = 0;
            if (n > 0 && n < 4){
                for (int i = 0; i < n; i++){
                    for (int i = 0; i < 2; i++){
                        cin >> rect[i][m];
                    }
                    if (rect[0][m] > 0 && rect[1][m] > 0)
                        m++;
                }
            }            
            n = m;
            if (n == 1){
                if (rect[0][0] == rect[1][0])
                    c = true;   
            }
            else if (n == 2){
                if (rect[0][0] == rect[0][1] && rect[0][0] == rect[1][0] + rect[1][1])
                    c = true;
                else if (rect[0][0] == rect[1][1] && rect[0][0] == rect[1][0] + rect[0][1])
                    c = true;
                else if (rect[1][0] == rect[0][1] && rect[1][0] == rect[0][0] + rect[1][1])
                    c = true;
                else if (rect[1][0] == rect[1][1] && rect[1][0] == rect[0][0] + rect[0][1])
                    c = true;     
            }
            else if (n == 3){
                for (int i = 0; i < 2; i++){
                    x1 = rect[i][0];
                    y1 = rect[(i + 1) % 2][0];
                    for (int j = 0; j < 2; j++){
                        x2 = rect[j][1];
                        y2 = rect[(j + 1) % 2][1];
                        for (int k = 0; k < 2; k++){
                            x3 = rect[k][2];
                            y3 = rect[(k + 1) % 2][2];
                            if (x1 == x2 && x2 == x3 && (y1 + y2 + y3) == x1)
                                c = true;
                            if (x1 == (x2 + x3) && y2 == y3 && x1 == (y1 + y2))
                                c = true;
                            if (x2 == (x1 + x3) && y1 == y3 && x2 == (y1 + y3))
                                c = true;
                            if (x3 == (x1 + x2) && y1 == y2 && x3 == (y1 + y3))
                                c = true;
                        }                
                    }
                }    
            }
            if(c)
                cout << "yes" << endl;
            else    
                cout << "no" << endl;    
        }   

        return 0;
    }
