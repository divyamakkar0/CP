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
    int n;
    int k;
    cin >> n >> k;
    vector<int> nums(n);

    for(int i = 0; i < n; i++){
        int temp;
        cin >> temp;
        nums[i] = temp;
    } 
    
    int sum = 0;
    if (k <= n){
        for(int j = 0; j < n; j++){
            if (j < k){
                nums[j] = nums[j] * -1;
            }
            sum += nums[j];
        }
    } else if (int(floor(k / n)) % 2 == 0){
       for (int j = 0; j < n; j++){
            if (j < (n % k)){
                nums[j] = nums[j] * -1;
            }
            sum += nums[j];
        } 
    } else {
       for (int j = 0; j < n; j++){
            nums[j] = nums[j] * -1;
        }  
        sort(nums.begin(), nums.end());

        for (int j = 0; j < n; j++){
            if (j < (n % k)){
                nums[j] = nums[j] * -1;
            }
            sum += nums[j];
        }
    }

    cout << sum << endl;
}