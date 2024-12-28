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
    int n, k, sum=0;
    cin >> n >> k;
    vector<int> nums;

    for(int i = 0; i < n; i++){
        int temp;
        cin >> temp;
        nums.push_back(temp);
    } 
    
    for(int i = 0; i < n && k > 0; i++){
        if (nums[i] < 0){
            nums[i] *= -1;
            k--;
        }
    }

    sort(nums.begin(), nums.end());

    if (k % 2 == 1){
        nums[0] *= -1;
    }

    for(int i = 0; i < n; i++){
        sum += nums[i];
    }
    cout << sum << endl;
}