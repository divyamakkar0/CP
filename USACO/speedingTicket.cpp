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

    int road[n][2];
    int bessie[m][2];
    vector<int> limit(m);

    for (int i = 0; i < n; i++)
    {
        cin >> road[i][0] >> road[i][1];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> bessie[i][0] >> bessie[i][1];
    }
}