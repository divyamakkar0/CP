#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>
#include <set>
#include <unordered_map>
using namespace std;

int main()
{
    int n;
    cin >> n;

    char i[n][5];

    for (int k = 0; k < n; k++){
        for (int j = 0; j < 5; j++){
            cin >> i[k][j];
        }
    }

    int avail[5] = {0}; 

    for (int k = 0; k < 5; k++){
        int colSum = 0;
        for (int j = 0; j < n; j++){
            if (i[j][k] == 'Y'){
                colSum++;
            }
        }
        avail[k] = colSum;
    }

    int max = 0;
    for (int i = 0; i < 5; i++){
        if (avail[i] > max){
            max = avail[i];
        }
    }

    vector <int> final;
    for (int i = 0; i < 5; i++){
        if (avail[i] == max){
            final.push_back(i+1);
        }
    }

    if (final.size() > 1){
        for (int i = 0; i < final.size(); i++){
            if (i != final.size() -1){
                cout << final[i] << ",";
            } else {
                cout << final[i];
            }  
        }
    } else {
        cout << final[0];
    }
        
}