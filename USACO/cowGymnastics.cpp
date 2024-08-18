#include <iostream>
#include <vector>
#include <unordered_map>
#include <limits.h>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
    int k, n;
    cin >> k >> n;

    int rankings[k][n];
    for(int i = 0; i < k; i++){
        for(int j = 0; j < n; j++){
            cin >> rankings[i][j];
        }
    }

    int pairs = 0;

    //for every first number in a pair
    for(int i = 0; i < n; i++){
        //for every second number in a pair
        for(int j = i+1; j < n; j++){
            //go through the whole rankings and for every row, log rankings and compare
            //for every row
            int icount = 0;
            int jcount = 0;
            for(int a = 0; a < k; a++){
                int i_index = -1;
                int j_index = -1;
                for(int b = 0; b < n; b++){
                    if (rankings[a][b] == i){
                        int i_index = b;
                    }

                    if (rankings[a][b] == j){
                        int j_index = b;
                    }
                    if(i_index > j_index){
                        icount++;
                    } else {
                        jcount++;
                    }
                }
            }
            if (icount == 3 || jcount == 3){
                pairs++;
            }

        }
    }

    cout << pairs;
}
