#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    long long int n, m;
    cin >> n >> m;

    vector<pair<long long int, long long int>> nums(m);

    for (long long int i = 0; i < m; i++){
        cin >> nums[i].first >> nums[i].second;
    }

    sort(nums.begin(), nums.end(), [](pair<long long int, long long int> &a, pair<long long int, long long int> &b) {
        return b.second < a.second;
    });

    long long int sum = 0;

    for (long long int i = 0; i < m; i++) {
        if (n == 0) break;

        if (nums[i].first <= n) {
            sum += nums[i].first * nums[i].second;
            n -= nums[i].first;
        } else {
            sum += n * nums[i].second;
            n = 0;
        }
    }

    cout << sum;

}