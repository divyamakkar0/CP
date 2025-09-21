#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
#include <string>
#include <utility>
#include <iomanip>
using namespace std;

void dfs(int i, int &nodes, int &edges, vector<vector<int>> &adj, vector<bool> &visited){
    visited[i] = true;
    nodes += 1;
    edges += adj[i].size();
    for (int v : adj[i]){
        if (!visited[v]){
            dfs(v, nodes, edges, adj, visited);
        }
    }
}

int main(){
   int n, m;
    cin >> n >> m;

    vector<vector<int>> adj(n+1);

    for (int i = 0; i < m; i++){
        int ai, bi;
        cin >> ai >> bi;
        adj[ai].push_back(bi);
        adj[bi].push_back(ai);
    }

    vector<bool> visited(n+1, false);
    for(int i = 1; i <= n; i++){
        if(!visited[i]){
            int nodes = 0, edges = 0;
            dfs(i, nodes, edges, adj, visited);
            edges/=2;

            if (edges != 1LL * nodes * (nodes-1) / 2){
                cout << "NO" << endl;
                return 0;
            }
        }
    }

    cout << "YES" << endl;

}
