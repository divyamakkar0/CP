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
    int tn = 2 * n;

    vector<int> w(tn);
    for (int i = 0; i < tn; i++)
    {
        cin >> w[i];
    }
    sort(w.begin(), w.end());

    int min_instability = 100000000;
    int prev = 0;
    bool previous = false;
    for (int i = 0; i < tn - 1; i++)
    {
        for (int j = i + 1; j < tn; j++)
        {
            int sum = 0;
            for (int k = 0; k < tn; k++)
            {
                if ((k != i) && (k != j))
                {
                    if (previous == true)
                    {
                        sum += w[k] - prev;
                        previous = false;
                        prev = 0;
                    }
                    else if (previous == false)
                    {
                        prev = w[k];
                        previous = true;
                    }
                }
            }

            min_instability = min(sum, min_instability);
        }
    }

    cout << min_instability << endl;
}
