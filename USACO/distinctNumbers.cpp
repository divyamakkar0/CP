#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> ints(n);
    for (int i = 0; i < n; i++)
    {
        cin >> ints[i];
    }

    sort(ints.begin(), ints.end());
    int count = 0;
    for (int i = 0; i < n - 1; i++)
    {
        while (ints[i] == ints[i + 1])
        {
            i++;
        }
        count++;
    }

    if (ints[n-2] != ints[n-1]) ++count;

    cout << count << endl;
}