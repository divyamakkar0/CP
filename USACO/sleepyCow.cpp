#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
    freopen("herding.in", "r", stdin);
    freopen("herding.out", "w", stdout);

    vector<int> loc; 
    for (int i  = 0; i < 3; i++){
        int e;
        cin >> e; 
        loc.push_back(e);
    }
    sort(loc.begin(), loc.end());
    int min = 0;
    int maximum = 0;

    if ((loc[0] + 1 == loc[1]) && (loc[1] + 1 == loc[2])){
        min = 0;        
    } else if ((loc[0] + 2 == loc[1]) || (loc[1] + 2 == loc[2])){
        min = 1; 
    } else {
        min = 2;
    } 

    maximum = max(loc[1] - loc[0] - 1, loc[2] - loc[1] - 1);
    cout << min << endl;
    cout << maximum << endl;

}