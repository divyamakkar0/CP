#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
   freopen("cownomics.in", "r", stdin);
   freopen("cownomics.out", "w", stdout);

    int n, m;
    cin >> n >> m;

    char genome[2*n][m];
    int count = 0;

    for(int i = 0; i < 2*n; ++i){
        for(int j = 0; j < m; ++j){
            cin >> genome[i][j];
        }
    }

    for(int i = 0; i < m; i++){
        int A = 0, C = 0, G = 0, T = 0;
        int ok = 1;

        for(int j = n; j < 2 * n; j++){
            char c = genome[j][i];
            if (c == 'A'){
                A++;
            } else if (c == 'C'){
                C++;
            } else if (c == 'G'){
                G++;
            } else {
                T++;
            }
        }

        // cout << A << " " << C << " " << T << " " << G << endl;

        for(int j = 0; j < n; j++){
            char c = genome[j][i];
            if (c == 'A'){
                if (A != 0){
                    ok = 0;
                    break;
                }
            } else if (c == 'C'){
                if (C != 0){
                    ok = 0;
                    break;
                }
            } else if (c == 'G'){
                if (G != 0){
                    ok = 0;
                    break;
                }
            } else {
                if (T != 0){
                    ok = 0;
                    break;
                }
            }
        }
        if (ok == 1){
            ++count;
            // cout << i << endl;
        }
    }
    cout << count << endl;
    
}