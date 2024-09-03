#include <iostream>
#include <vector>
#include <unordered_map>
#include <limits.h>
#include <cmath>
#include <cstring>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector< pair<int, int> > specs(n);
    for(int i = 0; i < n; i++){
        cin >> specs[i].first >> specs[i].second;
    }

    sort(specs.begin(), specs.end());

    int happy = 0;

    for(int i = 0; i < n-1; i++){
        int max = specs[i].second;
        for(int j = i+1; j < n; j++){
            if (specs[j].second > max){
                happy = 1;
                break;
            }
        }      
    }

    if (happy == 1){
        cout << "Poor Alex";
    } else {
        cout << "Happy Alex";
    }
}
