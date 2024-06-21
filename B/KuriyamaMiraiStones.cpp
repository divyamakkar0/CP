#include <iostream>
#include <string>
#include <vector>
#include<algorithm>
#include <cmath>
#include <unordered_map>
using namespace std;

int main()
{
    long long int n;
    cin >> n;

    vector<long long int> costs;
    vector<long long int> sorted;
    for (long long int i = 0; i < n; i++)
    {   
        long long int x;
        cin >> x;
        costs.push_back(x);
        sorted.push_back(x);
    }

    sort(sorted.begin(), sorted.end());


    long long int m;
    cin >> m;
    long long int sum = 0;

    vector<vector<long long int>> q(m, vector<long long int>(3));
    for (long long int i = 0; i < m; ++i) {
        for (long long int j = 0; j < 3; ++j) {
            cin >> q[i][j];  
        }

         if(q[i][0] == 2){
                for(long long int k = q[i][1]-1; k <= q[i][2]-1; k++){
                    sum += sorted[k];
                }
                cout << sum << endl;
                sum = 0;
        } else {
                for(long long int k = q[i][1]-1; k <= q[i][2]-1; k++){
                    sum += costs[k];
                }
                cout << sum << endl;
                sum = 0;
        }
    }

}