#include <iostream>
#include <string>
#include <vector>
#include<algorithm>
#include <cmath>
#include <unordered_map>
using namespace std;

int main(){
    int n, m;
    char c;
    cin >> n >> m >> c;


    char d[n][m];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> d[i][j];
        }
    }

    int a[26] = {0};

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if (d[i][j] == c){
                //checking up
                if (i != 0){
                    if (d[i-1][j] != '.' && d[i-1][j] != c)
                        a[d[i-1][j] - 'A'] = 1;
                }

                //checking down
                if (i != n-1){
                    if (d[i+1][j] != '.' && d[i+1][j] != c)
                        a[d[i+1][j] - 'A'] = 1;
                }

                //checking left
                if (j != 0){
                   if (d[i][j-1] != '.' && d[i][j-1] != c)
                        a[d[i][j-1] - 'A'] = 1;
                }

                //checking right
                if (j != m-1){
                   if (d[i][j+1] != '.' && d[i][j+1] != c)
                        a[d[i][j+1] - 'A'] = 1;
                }
            }
        }
    }

    int count = 0;
    for(int i = 0; i < 26; i++){
        if (a[i] == 1){
            count++;
            // cout << "i"<< i << endl;
        }
    }

    cout << count;


}