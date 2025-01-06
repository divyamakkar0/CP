#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <set>
#include <unordered_map>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int lp = 0, cr = 1, min_val = a[0], max_val = a[0];

    for (int i = 0; i < n; i++) {
        min_val = min(min_val, a[i]);
        max_val = max(max_val, a[i]);

        while (abs(max_val - min_val) > 1) {
            lp++;
            min_val = a[i];
            max_val = a[i];

            for(int j = lp; j <= i; j++){
                min_val = min(min_val, a[j]);
                max_val = max(max_val, a[j]);
            }
        }

        cr = max(cr, i - lp + 1);
    }

    cout << cr << endl;
}
