#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> breeds(n);
    int even = 0, odd = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> breeds[i];
        if (breeds[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }

    while (odd > even)
    {
        odd -= 2;
        even++;
    }

    if (even > odd + 1)
        even = odd + 1;

    cout << odd + even << endl;
}