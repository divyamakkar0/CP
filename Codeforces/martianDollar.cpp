#include <iostream>
#include <vector>
#include <unordered_map>
#include <limits.h>
#include <cmath>
#include <string>
#include <string.h>
#include <algorithm>
using namespace std;

int main()
{
    int n, b;
    cin >> n >> b;

    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    int max = b;
    for(int i = 0; i < n-1; i++){
        for(int j = i+1; j < n; j++){
            int count = 0;
            int extraB = b;
            int buy = a[i];
            int sell = a[j];

            int bought = floor(extraB/buy);
            count += (extraB - (bought*buy));
            count += (bought * sell);

            if (count > max){
                max = count;
            }
        }
    }

    cout << max;
}