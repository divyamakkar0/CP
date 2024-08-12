#include <iostream>
#include <vector>
#include <unordered_map>
#include <limits.h>
using namespace std;

int main()
{
    freopen("mowing.in", "r", stdin);
    freopen("mowing.out", "w", stdout);

    int n;
    cin >> n;

    vector<pair<char, int>> mow(n);
    for(int i = 0; i < n; i++){
        cin >> mow[i].first >> mow[i].second;
    }

    unordered_map<int, unordered_map<int, int>> position;
    int x = 0, y = 0; 
    int time = 0; 
    int max_x = INT32_MAX; 

    position[x][y] = time;

    for(int i = 0; i < n; i++){
        char dir = mow[i].first;
        int steps = mow[i].second;

        for(int j = 0; j < steps; j++){
            time++;
            if (dir == 'N') {
                y++;
            } else if (dir == 'S') {
                y--;
            } else if (dir == 'E') {
                x++;
            } else if (dir == 'W') {
                x--;
            }

            if (position[x][y] != 0 || (x == 0 && y == 0)) {
                int diff = time - position[x][y];
                if (diff < max_x) {
                    max_x = diff;
                }
            }

            position[x][y] = time;
        }
    }

    if (max_x == INT32_MAX) {
        cout << -1 << endl;
    } else {
        cout << max_x << endl;
    }
}
