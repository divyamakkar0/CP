#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <set>
#include <unordered_map>
using namespace std;

int main()
{
    int n, m, k, t;
    cin >> n >> m >> k >> t;

    int field[n][m];

    set<pair<int, int>> waste;
    for(int i = 0; i < k; i++){
        int a, b;
        cin >> a >> b;
        waste.insert({a, b});
    }
 
    vector<pair<int, int>> queries(t);
    for (int i = 0; i < t; ++i) {
        int k, j;
        cin >> k >> j;
        queries[i] = {k, j};
    }

    vector<string> crops = {"Carrots", "Kiwis", "Grapes"};

    vector<int> waste_count(n);

    for (int i = 0; i < t; i++){
        int a = queries[i].first;
        int b = queries[i].second;

        if (waste.count({a, b}) != 0){
            cout << "Waste" << endl;
        } else {
            int count = 0; 
            for(const auto& w : waste){
                if (w.first < a || (w.first == a && w.second < b)){
                    count++;
                }
            }

        int cell = ((a - 1) * m) + (b-1) - count;
        cout << crops[cell % 3] << endl;
        }
    }

}