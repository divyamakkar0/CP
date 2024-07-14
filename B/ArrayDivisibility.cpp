#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <unordered_map>
using namespace std;

int main(){
    int t;
    cin >> t;

    for(int i = 0; i < t; i++) {
        int n;
        cin >> n; 

        for (int i = 1; i <= n; ++i) {
            cout << i << " ";
        }
        cout << endl;
    }

}