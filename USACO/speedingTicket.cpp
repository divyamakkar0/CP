#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    freopen("speeding.in", "r", stdin);
    freopen("speeding.out", "w", stdout);

    int n, m;
    cin >> n >> m;

    vector<int> road(100);
    vector<int> bessie(100);

    int pos = 0;
    for (int i = 0; i < n; i++) {
        int l, speed;
        cin >> l >> speed;
        for (int j = 0; j < l; j++) {
            road[pos + j] = speed;
        }
        pos += l;
    }

    pos = 0;
    for (int i = 0; i < m; i++) {
        int l2, speed2;
        cin >> l2 >> speed2;
        for (int j = 0; j < l2; j++) {
            bessie[pos + j] = speed2;
        }
        pos += l2;
    }

    int max = 0;
    for (int i = 0; i < 100; i++) {
        int olimit = bessie[i] - road[i];
        if (olimit > max) {
            max = olimit;
        }
    }

    cout << max<< endl;
}
