#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {   
    freopen("traffic.in", "r", stdin);
    freopen("traffic.out", "w", stdout);

  int n;

    cin >> n;
    string type[n];
    int low[n];
    int high[n];


    for (int i = 0; i < n; i++){
        cin >> type[i] >> low[i] >> high[i];
    }


    int ans_lower = -10000, ans_higher = 10000;


    for (int i = n - 1; i >= 0; i--){
        if (type[i] == "none"){
            ans_lower = max(ans_lower, low[i]);
            ans_higher = min(ans_higher, high[i]);

        }

        else if (type[i] == "off"){
            ans_lower += low[i];
            ans_higher += high[i];
        }

        else if (type[i] == "on"){
            ans_higher -= low[i];
            ans_lower -= high[i];
        }
    }

    cout << max(0, ans_lower) << ' ' << ans_higher << '\n';
    ans_lower = -10000;
    ans_higher = 10000;


    for (int i = 0; i < n; i++){
        if (type[i] == "none"){
            ans_lower = max(ans_lower, low[i]);
            ans_higher = min(ans_higher, high[i]);

        }

        else if (type[i] == "on"){
            ans_lower += low[i];
            ans_higher += high[i];
        }

        else if (type[i] == "off"){
            ans_higher -= low[i];
            ans_lower -= high[i];
        }

    }
    cout << max(0, ans_lower) << ' ' << ans_higher << '\n';

}
