#include <iostream>
#include <vector>
#include <unordered_map>
#include <limits.h>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    int count = 0;
    for(int i = 0; i < n; i++){
        if (a[i] > 0){
            if(a[i] >= a[k-1]){
                count++;
            } 
        }
    }
    cout << count;
}