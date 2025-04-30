#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
    vector<int> loc(3); 
    for (int i  = 0; i < 3; i++){
        cin >> loc[i]; 
    }
    sort(loc.begin(), loc.end());
    int min = 0;
    int maximum = 0;

    if (loc[0] + 1 == loc[1] && loc[1] + 1 == loc[2]){
        min = 0;        
    } else if (loc[0] + 2 == loc[1] || loc[1] + 2 == loc[2]){
        min = 1; 
    } else {
        min = 2;
    } 

    maximum = max(loc[1] - loc[0] - 1, loc[2] - loc[1] - 0);
    cout << min << endl;
    cout << maximum << endl;

}