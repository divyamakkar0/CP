#include <iostream>
#include <vector>
#include <cmath> 
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--){
        int n, m;
        cin >> n >> m;

        vector<vector<int>> games(n, vector<int>(m));
        for (int i = 0; i < n; i++){
            for (int j = 0; j < m; j++){
                cin >> games[i][j];
            }
        }

        long long sum = 0; 

        for(int i = 0; i < n; i++){
            for(int j = i+1; j < n; j++){
                for(int k = 0; k < m; k++){
                    sum += abs(games[i][k] - games[j][k]);
                }
            }
        }

        cout << sum << endl;
    }
}
