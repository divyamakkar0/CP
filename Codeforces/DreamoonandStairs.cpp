#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <set>
#include <unordered_map>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    if(n < m){
        cout << -1 << endl;
    } else {
        int minSteps = (n + 1) / 2;
        int ans = (minSteps + m - 1) / m * m;
        cout << ans << endl;
    }
}