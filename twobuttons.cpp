#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <string>
using namespace std;

int recurse(int n, int m, int dis, int count){
    int temp = n;
    int res1 = temp - 1;
    int res2 = temp * 2;

    int new_dist = 0;
    if (abs(res1 - m) > dis) {
        n = res2;
        new_dist = abs(res1 - m);
    } else {
        n = res1;
        new_dist = abs(res2 - m);
    }

    if (n == m) {
        return count;
    } else {
        return recurse(n, m, new_dist, ++count);
    }
}

int main()
{
    int n, m;
    cin >> n >> m;

    if (n > m){
        int diff = n - m;
        cout << diff << endl;
    } else {
        int diff = n - m;
        int result = recurse(n, m, diff, 0);
        cout << result << endl;
    }

}
