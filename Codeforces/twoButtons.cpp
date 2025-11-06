#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    int steps = 0;
    while (m > n)
    {
        if (m % 2 == 0)
        {
            m /= 2;
        }
        else
        {
            m += 1;
        }
        steps += 1;
    }

    steps += (n - m);

    cout << steps << endl;
}