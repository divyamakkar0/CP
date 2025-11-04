#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int total = 3 * n;
    vector<int> combinations(n);

    int bi = 27;
    int ai_grid = 20;

    for (int i = 0; i < n; i++){
        //simulate the circle/curve and that specific ai have for the 
        int comb = bi * (ai_grid) * (n-1);
        combinations.push_back(comb);
    }

    int answer = 0;

    for(int i = 0; i < n; i++){
        answer += combinations[i];
    }

    

    cout << (answer % (int(pow(10, 9)) + 7)) << endl;
}