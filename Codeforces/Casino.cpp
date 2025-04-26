#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--){
        int n, m;
        cin >> n >> m;

        int games[n][m];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> games[i][j];
            }
            // sort(games[i], games[i] + m);
        }

        int sum = 0;
        for(int col = 0; col < m; col++){
            for(int i = 0; i < n-1; i++){
                for(int j = i+1; j < n; j++){
                    // cout << games[i][col] << " " << games[j][col] << endl; 
                    sum += abs(games[i][col] - games[j][col]);
                }
            }
            // cout << endl;
        }

        cout << sum << endl;
    }

}