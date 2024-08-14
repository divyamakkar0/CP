#include <iostream>
#include <string>
#include <vector>
#include<algorithm>
#include <cmath>
#include <unordered_map>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;

    vector<int> h(n);
    
    for(int i = 0; i <n; i++){
        cin >> h[i];
    }
    
    int sum = 0;

    //find the sum of the first k
    for (int i = 0; i < k; i++){
        sum += h[i];
    }

    int min = sum;
    int index = 0;

    for(int i = k; i < n; i++){
        sum = sum - h[i - k] + h[i];
        if (sum < min){
            min = sum;
            index = i-k + 1;
        }
    }

    cout << index + 1 << endl; 

    
}