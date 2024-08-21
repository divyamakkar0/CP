#include <iostream>
#include <vector>
#include <unordered_map>
#include <limits.h>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> s(n);
    vector<int> map(5, 0);

    for(int i = 0; i < n; i++){
        cin >> s[i];
        map[s[i]]++;
    }

    int taxis = 0;
    //fours
    taxis += map[4]; 
    map[4] = 0;

    //threes
    taxis += map[3];
    map[1] -= map[3];
    map[3] = 0;


    //twos
    taxis += (map[2] / 2);
    if (map[2] % 2 == 1){
        taxis++;
        map[1] -= 2;
    }

    //ones
    if (map[1] > 0){
        if (map[1] % 4 != 0){
            if(map[1] < 4){
                taxis += 1;
            } else {
                taxis += (map[1] / 4) + 1;
            }
        } else {
            taxis += (map[1] / 4);
        }
    }

    cout << taxis;
}   