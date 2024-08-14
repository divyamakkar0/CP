#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> exercises(n);
    for (int i = 0; i < n; i++)
    {
        cin >> exercises[i];
    }

    int chest = 0;
    int biceps = 0;
    int back = 0;

    for (int i = 0; i < n; i++)
    {
        if (i % 3 == 0)
        {
            chest += exercises[i];
        }
        else if (i % 3 == 1)
        {
            biceps += exercises[i];
        }
        else
        {
            back += exercises[i];
        }
    }

    if (chest > biceps && chest > back)
    {
        cout << "chest" << endl;
    }
    else if (biceps > chest && biceps > back)
    {
        cout << "biceps" << endl;
    }
    else
    {
        cout << "back" << endl;
    }
}