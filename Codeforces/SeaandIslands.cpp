#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <set>
#include <unordered_map>
using namespace std;

#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int maxL = (n * n + 1) / 2; 

    if (k > maxL) {
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (k > 0 && (i + j) % 2 == 0) { 
                    cout << "L";
                    k--;
                } else {
                    cout << "S";
                }
            }
            cout << endl;
        }
    }

    return 0;
}
