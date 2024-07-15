#include <iostream>
using namespace std;

int main() {
    // Input
    int n, a;
    cin >> n >> a;
    a--; // Convert to zero-based index

    int t[n];
    for (int i = 0; i < n; i++) {
        cin >> t[i];
    }

    int caught = 0;
    // Doing the BCD thing
    for (int i = 0; i < n; i++) {
        if (i == 0) {
            if (t[a] == 1) {
                caught++;
            }
        } else {
            if (a + i < n && a - i >= 0) {
                if (t[a + i] == 1 && t[a - i] == 1) {
                    caught += 2;
                }
            } else if (a + i >= n && a - i >= 0) {
                if (t[a - i] == 1) {
                    caught++;
                }
            } else if (a - i < 0 && a + i < n) {
                if (t[a + i] == 1) {
                    caught++;
                }
            }
        }
    }

    cout << caught;
}
