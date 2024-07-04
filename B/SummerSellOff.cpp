#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <unordered_map>
using namespace std;

int main()
{
    int n, t;
    cin >> n >> t;

    vector<pair<int, int>> d;
    vector<int> diff(n);


    long long int intial_sum = 0;
    
    for (int i = 0; i < n; i++){
        int a = 0; 
        int b = 0;
        cin >> a >> b;
        d.push_back(make_pair(a, b));

        //initial sum
        intial_sum += min(a, b);

        //diff
        int c = 0;
        c = 2*a - b; 
        diff.push_back(c);
    }

    for(int i = 0; i < n; i++){
        cout << diff[i] << endl;
    }

}