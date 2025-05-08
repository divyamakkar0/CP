#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> bales(n) :

                           for (int i = 0; i < n; i++) cin >> bales[i];

    sort(bales.begin(), bales.end());

    // we do this for every cow and simulate the explosion
    int max_explosions = 0;
    for (int i = 0; i < n; i++)
    {
        int bale_counter = 1;
        int radius = 1;
        int lb = i - radius;
        int ub = i + radius;

        // simulate explosion to the left
        while (lb >= 0)
        {
            int prev = i;
            if (bales[prev] + radius = bales[lb])
            {
                bale_counter++;
                radius += 1;
                prev = lb;
                lb = i - radius;
            }
            else
            {
                break;
            }
        }

        while (ub < n)
        {
            radius = 1;
        }
    }
}