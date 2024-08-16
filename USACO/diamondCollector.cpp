#include <iostream>
#include <vector>
#include <unordered_map>
#include <limits.h>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
    freopen("diamond.in", "r", stdin);
    freopen("diamond.out", "w", stdout);

    int n, k;
    cin >> n >> k;

    vector<int> sizes(n);
    for(int i = 0; i < n; i++){
        cin >> sizes[i];
    }

    int maxval = 0;
    for(int i = 0; i < n; i++){
        int count = 0; 
        for(int j = 0; j < n; j++){ 
            if (sizes[i] <= sizes[j] && sizes[j] <= sizes[i] + k){
                count++;
            }
        }
        maxval = max(maxval, count);
    }

    cout << maxval;
}