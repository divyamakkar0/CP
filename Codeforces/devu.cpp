#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
#include <string>
#include <utility>
#include <iomanip>
using namespace std;

int main()
{
    long long int n, x;
    cin >> n >> x;

    vector<long long int> chapters(n);
    for (long long int i = 0; i < n; i++)
    {
        cin >> chapters[i];
    }

    sort(chapters.begin(), chapters.end());

    long long int result = 0;

    for (long long int c : chapters)
    {
        if (x <= 1)
        {
            result += c;
        }
        else
        {
            result += (x * c);
            x -= 1;
        }
    }

    cout << result << endl;
}
