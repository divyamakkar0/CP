#include <iostream>
#include <vector>
#include <unordered_map>
#include <limits.h>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> x(n);
    vector<int> y(n);

    for (int i = 0; i < n; i++){
        cin >> x[i];
    }
    for (int i = 0; i < n; i++){
        cin >> y[i];
    }

    int max = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int finalx = x[i] - x[j];
            int finaly = y[i] - y[j];
            int square = finalx * finalx + finaly * finaly;
            if (square > max){
                max = square;
            }
        }
    }

    cout << max;
}