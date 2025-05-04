
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
        if (times[i].first > time){
            time = times[i].first;
        }

        time += times[i].second;

    }
    cout << time << endl;
}