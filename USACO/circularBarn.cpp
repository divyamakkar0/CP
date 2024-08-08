#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){
    freopen("cbarn.in", "r", stdin);
    freopen("cbarn.out", "w", stdout);

    //inputs
    int n;
    cin >> n;

    vector<int> room(n);
    for(int i = 0; i < n; i++){
        cin >> room[i];
    }

    //go through every room
    int minSum = INT32_MAX;

    for(int i = 0; i < n; i++){
        int sum = 0;

        for(int j = 0; j <n; j++){
            int index = (i + j) % n;
            int cowDistance = room[index] * j;
            sum += cowDistance;

        }

        minSum = min(minSum, sum);
    }  

    cout << minSum << endl;
}