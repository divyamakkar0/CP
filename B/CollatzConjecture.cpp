#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int x, y, k;
        cin >> x >> y >> k;

        for(int i = 0; i < k; i++){
            x++;
            // cout << x << endl;
            if (x % y == 0){
                x = log x / log y
            }
        }

        cout << x << endl;
    }
}