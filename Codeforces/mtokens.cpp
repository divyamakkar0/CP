#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <set>
#include <unordered_map>
using namespace std;

int main() {
    long long n, a, b;
    cin >> n >> a >> b;

    vector<long long> coins(n);
    for (long long i = 0; i < n; i++) {
        cin >> coins[i];
        long long saved = ((coins[i] * a % b) / a);
        cout << saved << " ";
    }

    cout << endl;
    return 0;
}


