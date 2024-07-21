#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;

int main() {
    freopen("teleport.in", "r", stdin);
    freopen("teleport.out", "w", stdout);

    int a, b, x, y;
    cin >> a >> b >> x >> y;

    int direct_distance = abs(a - b);

    int teleport1 = abs(a - x) + abs(b - y);
    int teleport2 = abs(a - y) + abs(b - x);

    int min_distance = min(direct_distance, min(teleport1, teleport2));

    cout << min_distance << endl;

    return 0;
}
