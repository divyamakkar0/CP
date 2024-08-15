#include <iostream>
#include <vector>
#include <unordered_map>
#include <limits.h>
#include <algorithm>
using namespace std;


int main()
{
    freopen("pails.in", "r", stdin);
    freopen("pails.out", "w", stdout);
    
    int x, y, m;
    cin >> x >> y >> m;

    int firstLim = m / x; 
    int secondLim = m / y;

    int max = 0;
    for(int i = 0; i <= firstLim; i++){
        for(int j = 0; j <= secondLim; j++){
            int mfill = x * i + y * j; 
            if (mfill > max && mfill <= m){
                max = mfill;
            }
        }
    }

    cout << max;
}