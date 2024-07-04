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

    vector<pair<int, int>> d;

    int sum = 0;
    
    for (int i = 0; i < n; i++){
        int a, b;
        cin >> a >> b;
        d.push_back(make_pair(a, b));
        sum += min(a, b);
    }

   
}