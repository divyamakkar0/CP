#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <unordered_map>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    vector<int> m(n);

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> m[i];
        sum += m[i];
    }

    int avg = sum / n;

    if (avg < k)
    {
    }