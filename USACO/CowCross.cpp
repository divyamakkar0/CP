
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
    freopen("cowqueue.in", "r", stdin);
    freopen("cowqueue.out", "w", stdout);

    int n;
    cin >> n;

    vector<pair<int, int> > times(n);

    for (int i = 0; i < n; i++)
    {
        cin >> times[i].first >> times[i].second;
    }

    sort(times.begin(), times.end());

    int time = 0;
    for (int i = 0; i < n; i++)
    {   
        if (i == 0)
        {
            time += times[i].first;
        }
        if (i != (n - 1))
        {
            if (times[i].first + times[i].second < times[i + 1].first)
            {
                time += (times[i+1].first - (times[i].first + times[i].second));
            }
        }
        time += times[i].second;
    }
    cout << time << endl;
}