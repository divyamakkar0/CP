#include <iostream>
#include <vector>
#include <unordered_map>
#include <limits.h>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<pair<char, int>> cows(n);
    for(int i = 0; i < n; i++){
        cin >> cows[i].first >> cows[i].second;
    }

    int lying = 0;
    int lowest = 0;
    int highest = 1000000000;

    for(int i = 0; i < n; i++){
        if (cows[i].first == 'G'){
            lowest = cows[i].second;
        }
        if (cows[i].first == 'L'){
            highest = cows[i].second;
        }
        if(highest < lowest){
            lying = 1 + (n-1-i);
        }
    }

    cout << lying;
}