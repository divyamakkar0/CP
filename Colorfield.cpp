#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <unordered_map>
using namespace std;

int main()
{
    int n, m, k, t;
    cin >> n >> m >> k >> t;

    int field[n][m];
    int waste[k][2];
    int queries[t][2];

    for(int i = 0; i < k; i++){
        cin >> waste[k][0] >> waste[k][1];
    }
    
    for(int i = 0; i < t; i++){
        cin >> queries[t][0] >> queries[t][1];
    }
}