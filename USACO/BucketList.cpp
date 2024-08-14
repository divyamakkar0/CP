#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main(){
    freopen("blist.in", "r", stdin);
    freopen("blist.out", "w", stdout);
    int n;
    cin >> n;

    int inputs[n][3];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 3; j++){
            cin >> inputs[i][j];
        }
    }

    //find max time
    int maxTime = 0;
    for(int i = 0; i < n; i++){
        if(inputs[i][1] > maxTime){
            maxTime = inputs[i][1];
        }
    }

    //start simulation
    int in_use = 0;
    int used = 0; 
    int maxB = 0;

    for(int i = 0; i < maxTime; i++){
        for(int j = 0; j < n; j++){
            int b = inputs[j][2];
            if (inputs[j][0] == i){
                if(b - used > 0){
                    used = 0;
                    in_use += b;
                } else {
                    used -= b;
                    in_use += b;
                }
            }
            if (inputs[j][1] == i){
                in_use -= b;
                used += b;
            }
            if(in_use > maxB){
                maxB = in_use;
            }
        }
    }
    cout << maxB;


}