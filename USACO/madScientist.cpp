#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
    freopen("breedflip.in", "r", stdin);
    freopen("breedflip.out", "w", stdout);

    int n;
    cin >> n;

    string a;
    cin >> a;
    string b;
    cin >> b;

    int main_count = 0;
    int flip = 0;

    for(int i = 0; i < n; i++){
        if ((a[i] != b[i]) && (flip == 0)){
            flip = 1;
        } else if ((a[i] != b[i]) && (flip == 1)) {
            continue;
        } else if ((a[i] == b[i]) && (flip == 0)){
            continue;
        } else {
            flip = 0;
            main_count ++;
        }
    }

    cout << main_count << endl;
}