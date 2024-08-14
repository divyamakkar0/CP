#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--){
        int n, s, m;
        cin >> n >> s >> m;

        int intervals[n+2][2];
        for(int i = 1; i <= n; i++){
            cin >> intervals[i][0] >> intervals[i][1];
        }
        intervals[0][0] = 0;
        intervals[0][1] = 0;
        intervals[n+1][0] = m;
        intervals[n+1][1] = m;

        int yes = 0;

        for(int i = 0; i < n+1; i++){
            if ((intervals[i+1][0] - intervals[i][1]) >= s){
                yes = 1;
                break;
            }
        }

        if (yes != 0){
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }

    }
}