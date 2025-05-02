#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
    long long int n, k;
    cin >> n >> k;

    vector<long long int> days(n);
    for (long long int i = 0; i < n; i++)
    {
        cin >> days[i];
    }

    long long int cost = 1 + k;
    for(long long int i = 1; i < n; i++){
        long long int cost1 = cost + 1 + k; 
        long long int cost2 = cost + (days[i] - days[i-1]);
        cost = min(cost1, cost2);
    }

    cout << cost << endl;
}