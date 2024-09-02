#include <iostream>
#include <vector>
#include <unordered_map>
#include <limits.h>
#include <cmath>
#include <cstring>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;

    // For the first half of the diamond
    for(int i = 0; i < n; i++){
        int leadingSpaces = (n-i) * 2;
        // Print out the leading spaces
        for(int j = 0; j < leadingSpaces; j++){
            cout << ' ';
        }
        // Print out increasing characters
        for(int j = 0; j <= i; j++){
            cout << j;
            if (j != i) {
                cout << ' ';
            }
        }
        // Print out decreasing characters
        for(int j = i-1; j >= 0; j--){
            cout << ' ';
            cout << j;
        }
        cout << endl;
    }

    // For the middle line
    for(int i = 0; i <= n; i++){
        cout << i;
        if (i != n) {
            cout << ' ';
        }
    }
    for(int i = n-1; i >= 0; i--){
        cout << ' ';
        cout << i;
    }
    cout << endl;

    // For the second half of the diamond
    for (int i = n - 1; i >= 0; i--) {
        int leadingSpaces = 2 * (n - i);
        
        for (int j = 0; j < leadingSpaces; j++) {
            cout << ' ';
        }
        
        // Print out increasing characters
        for(int j = 0; j <= i; j++){
            cout << j;
            if (j != i) {
                cout << ' ';
            }
        }
        // Print out decreasing characters
        for(int j = i-1; j >= 0; j--){
            cout << ' ';
            cout << j;
        }
        
        cout << endl;
    }
}
