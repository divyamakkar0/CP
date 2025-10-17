#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <string>
#include <cmath>
using namespace std;

int main(){
    long long int n, d;
    cin >> n >> d;

    vector<pair<long long int, long long int>> friends(n); 
    for(long long int i = 0; i < n; i++){
        cin >> friends[i].first >> friends[i].second;
    }

    sort(friends.begin(), friends.end());

    long long max_factor = 0;
    long long current_sum = 0;
    long long lp = 0;

    for (long long rp = 0; rp < n; rp++) {
        current_sum += friends[rp].second;

        while (friends[rp].first - friends[lp].first >= d) {
            current_sum -= friends[lp].second;
            lp++;
        }

        max_factor = max(max_factor, current_sum);
    }
    
    cout << max_factor << endl;
}


