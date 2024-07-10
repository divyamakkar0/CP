#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <algorithm>
#include <cmath>
#include <set>
#include <cctype>
#include <unordered_map>
using namespace std;

int main()
{
    int n, m, x;
    cin >> n >> m >> x;

    int isS = 0;

    vector<pair<int, int>> S;

    char keys[n][m];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> keys[i][j];
            if (keys[i][j] == 'S'){
                isS++;
                int x = i;
                int y = j;
                S.push_back({x,y});
            }
        }
    }

    int q; 
    cin >> q;
    char text[q];
    for(int i = 0; i < q;i++){
        cin >> text[i];
    }

    if(isS == 0){
        cout << -1;
    }

     for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if (isupper(keys[i][j]) != 0){ //is uppercase as it is non-zero
                
            }
        }
    }

}