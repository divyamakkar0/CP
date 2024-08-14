#include <iostream>
#include <vector>
#include <unordered_map>
#include <limits.h>
#include <algorithm>
using namespace std;

int main()
{
    freopen("measurement.in", "r", stdin);
    freopen("measurement.out", "w", stdout);
    
    int n;
    cin >> n;

    vector<tuple<int, string, int>> cows;

    for (int i = 0; i < n; i++) {
		int day;
		string cow;
		int change;
		cin >> day >> cow >> change;
		cows.push_back(make_tuple(day, cow, change));
	}

    sort(cows.begin(), cows.end(), [](const auto &a, const auto &b) {
        return get<0>(a) < get<0>(b);
    });

    unordered_map<string, int> standings = {{"Bessie", 7}, {"Elsie", 7}, {"Mildred", 7}};
    int changes = 0;
    
    vector<string> old_max = {"Bessie", "Elsie", "Mildred"}; 

    for(int i = 0; i < n; i++){
        int day = get<0>(cows[i]);
        string cow = get<1>(cows[i]);
        int change = get<2>(cows[i]);
        standings[cow] += change;

        int max_output = 0;
        for (auto k : standings) {
            max_output = max(max_output, k.second);
        }
        
        vector<string> current_max;
        for(auto l : standings){
            if (l.second == max_output){
                current_max.push_back(l.first);
            }
        }

        if (current_max != old_max) {
            changes++;
        }
        old_max = current_max;
    }

    cout << changes;
}
