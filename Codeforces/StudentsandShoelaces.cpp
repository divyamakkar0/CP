#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> graph[n+1];
    for(int i = 0; i < m; i++) {
        int x, y;
        cin >> x >> y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }

    int ko = 0;
    while(1) {
        int count = 0;
        vector<int> to_erase;
        for(int i = 1; i <= n; i++) {
            if(graph[i].size() == 1) {
                count++;
                to_erase.push_back(i);
            }
        }
        if(count == 0) {
            break;
        }
        ko++;
        for(int i = 0; i < count; i++) {
            int x = to_erase[i];
            int y = graph[x][0];
            graph[x].clear();
            graph[y].erase(remove(graph[y].begin(), graph[y].end(), x), graph[y].end());
        }
    }

    cout << ko << endl;

    return 0;
}