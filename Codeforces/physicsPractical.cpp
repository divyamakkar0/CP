#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <string>
#include <cmath>
using namespace std;

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);


    int n;
    cin >> n;

    vector<int> c(n);

    for(int i = 0; i < n; i++){
        cin >> c[i];
    }

    sort(c.begin(), c.end());

    int max_e = 0;

    int l = 0;
    int r = l+1;
    while(r < n && l >= 0){
        int curr = 0;

        if (c[r] <= 2*c[l]){
            curr = r - l + 1;
            r += 1;
        } else {
            l += 1;
        }
        
        max_e = max(max_e, curr);
    }

    cout << n - max_e << endl;
}