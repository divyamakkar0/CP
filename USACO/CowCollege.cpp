#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
    long long int n;
    cin >> n;


    vector<long long int> cows(n);
    for (long long int i = 0; i < n; i++)
    {
        cin >> cows[i];
    }

    sort(cows.begin(), cows.end());

    long long int max_tuition = 0, max_fee = 0;

    for (long long int i = 0; i < n; i++)
    {
        long long int tuition = ((n - i) * cows[i]);

        if (tuition == max_tuition) {
            max_fee = min(max_fee, cows[i]);
        } else if (tuition > max_tuition){
            max_tuition = tuition;
            max_fee = cows[i];
        }

    }

    cout << max_tuition << " " << max_fee << endl;
}