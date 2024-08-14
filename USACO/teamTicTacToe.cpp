#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <numeric>
#include <set>
using namespace std;

set<char> singleWinners;
set<pair<char, char>> teamWinners;

void checkLine(char a, char b, char c) {
    set<char> s = {a, b, c};
    if (s.size() == 1) {
        singleWinners.insert(a);
    } else if (s.size() == 2) {
        auto it = s.begin();
        char first = *it++;
        char second = *it;
        teamWinners.insert({min(first, second), max(first, second)});
    }
}

int main()
{   
    freopen("tttt.in", "r", stdin);
    freopen("tttt.out", "w", stdout);

    //get inputs
    char t[3][3];
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cin >> t[i][j];
        }
    }

    for (int i = 0; i < 3; i++) {
        checkLine(t[i][0], t[i][1], t[i][2]);
    }

    for (int i = 0; i < 3; i++) {
        checkLine(t[0][i], t[1][i], t[2][i]);
    }

    checkLine(t[0][0], t[1][1], t[2][2]);
    checkLine(t[0][2], t[1][1], t[2][0]);

    cout << singleWinners.size() << endl;
    cout << teamWinners.size() << endl;
}
