#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <set>
#include <unordered_map>
using namespace std;

int main(){

    freopen("cowsignal.in", "r", stdin);
    freopen("cowsignal.out", "w", stdout);

    int m, n, k;
    cin >> m >> n >> k;

    string original[m];

    for(int i = 0; i < m; i++){
        cin >> original[i];
    }

    
        for(int i = 0; i < m; i++){
            for(int a = 0; a < k;a++){
            for(int j = 0; j < n; j++){
                for(int l = 0; l < k; l++){
                    cout << original[i][j];
                }
            }
            cout << endl;
        }
    }

}