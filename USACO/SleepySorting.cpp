#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
#include <string>
using namespace std;

int main()
{   
    freopen("sleepy.in", "r", stdin);
    freopen("sleepy.out", "w", stdout);

    int n;
    cin >> n;
    vector<int> order(n);

    for (int i = 0; i < n; i++)
        cin >> order[i];

    int x = 1;
    for (int i = n - 1; i > 0; i--)
    {

        // cout << "order[i] " << order[i] << " order [i-1]: " << order[i-1] << " x " << x << endl;
        if (order[i] > order[i - 1])
        {
            x++;
        }
        else
        {
            break;
        }
    }

    cout << (n - x) << endl;
    return 0;
}