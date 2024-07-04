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
    vector<int> diff(n);


    long long int intial_sum = 0;
    
    for (int i = 0; i < n; i++){
        int a, b;
        cin >> a >> b;
        d.push_back(make_pair(a, b));
        intial_sum += min(a, b);
        int c;
    
    }

}