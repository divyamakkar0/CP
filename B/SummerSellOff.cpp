#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <unordered_map>
using namespace std;

int main()
{
    int n, t;
    cin >> n >> t;

    vector<pair<long long int, long long int>> d(n); // Initialize with size n
    vector<long long int> diff(n); // Initialize with size n

    long long int initial_sum = 0;

    for (long long int i = 0; i < n; i++){
        long long int a = 0;
        long long int b = 0;
        cin >> a >> b;
        d[i] = make_pair(a, b);

        // Initial sum
        initial_sum += min(a, b);        
        // Diff
        long long int c = 0;
        c = min(2 * a, b) - min(a, b);
        diff[i] = c;
    }

   

    sort(diff.begin(), diff.end());
    
    for(int i = 0; i < n; i++){
        
    }

}