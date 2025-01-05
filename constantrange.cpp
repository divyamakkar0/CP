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

    int lp = 0;      
    int cr = 0;      
    int min_in = a[0];
    int max_in = a[0];

    for (int i = 0; i < n; i++) {
        min_in = min(min_in, a[i]);
        max_in = max(max_in, a[i]);

        while (abs(max_in - min_in) > 1) {
            if (a[lp] == min_in || a[lp] == max_in) {
                min_in = *min_element(a.begin() + lp + 1, a.begin() + i + 1);
                max_in = *max_element(a.begin() + lp + 1, a.begin() + i + 1);
            }
            lp++;
        }

        cr = max(cr, i - lp + 1);
    }

    cout << cr << endl;
}
