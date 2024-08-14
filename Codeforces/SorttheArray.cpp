#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <unordered_map>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> d(n);

    int r = -1;
    int l = -1;

    for (int i = 0; i < n; i++)
    {
        cin >> d[i];
    }  

    //find starting
    for (int i = 0; i < n - 1; i++)
    {
        if (d[i] > d[i+1]){
            l = i;
            break;
        }
    }

    //find ending
    for (int i = n-1; i > 0 ; i--){
        if(d[i] < d[i-1]){
            r = i;
            break;
        }
    }

    if (l == -1){
        cout << "yes" << endl;
        cout << "1 1";
    } else {

    reverse(d.begin() + l, d.begin() + r + 1);

    bool sorted = true;
    for (int i = 0; i < n - 1; ++i) {
        if (d[i] > d[i + 1]) {
            sorted = false;
            break;
        }
    }

    if (sorted) {
        cout << "yes" << endl;
        cout << l + 1 << " " << r + 1 << endl;
    } else {
        cout << "no" << endl;
    }
    }
}