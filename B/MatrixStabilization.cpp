#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <unordered_map>
using namespace std;

int main(){
    int t;
    cin >>  t;
    
    for(int i = 0; i < t; i++){

        int n, m;
        cin >> n >> m; 

        vector<vector<int>> mat(n, vector<int>(m));

        for(int i = 0; i < n; i++){
            for (int j = 0; j < m; j++){
                cin >> mat[i][j];
            }
        }


        for(int i = 0; i < n; i++){
            for (int j = 0; j < m; j++){
                if (mat[i][j] > mat[i+1][j] && mat[i][j] > mat[i][j+1] && mat[i][j] > mat[i+1][j+1]){
                    mat[i][j]--;
                }
            }
        }

        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                cout << mat[i][j] << " ";
            }
            cout << endl;
        }
    }


}