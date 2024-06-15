#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//commenting j to make sure i understand
int main(){
    //take in inputssss
    long long int n, m;
    cin >> n >> m;


    //vector acts like an array and the pair makes it an [m][2] matrix with two ints as the pair
    vector<pair<long long int, long long int>> nums(m);

    //for each index, take in first and second pair
    for (long long int i = 0; i < m; i++){
        cin >> nums[i].first >> nums[i].second;
    }   

    //sort nums[i].second starting from teh first to last index
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