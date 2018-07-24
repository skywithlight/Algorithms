#include <iostream>
#include <vector>

#define max_n 301

using namespace std;
int n, m;

int matrix[max_n][max_n], visit[max_n][max_n];

int shift[4][2] = {
    {-1, 0},
    {0, 1},
    {1, 0},
    {0, -1}
};
void fill(int i, int j, int state){

    if (i >= 0 && i < n && j >= 0 && j < m && matrix[i][j] == state && visit[i][j] == -1){
        visit[i][j] = 0;
        for (int k = 0; k < 4; k++)
            fill(i + shift[k][0], j + shift[k][1], state);
    }
}
int main(){

    cin >> n >> m;
    
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> matrix[i][j];
            visit[i][j] = -1;
        }
    }
    int ireland_count = 0, sea_count = 0;

    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if (visit[i][j] == -1){
                if (matrix[i][j] == 0){
                    sea_count++;
                    fill(i, j, 0);
                }else{
                    ireland_count++;
                    fill(i, j, 1);
                }
            }
        }
    }
    cout << sea_count << endl << ireland_count << endl;

    return 0;
}
