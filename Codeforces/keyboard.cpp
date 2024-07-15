#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    int n, m, x;
    cin >> n >> m >> x;

    int isS = 0;
    vector<pair<int, int>> S;
    char keys[n][m];
    pair<int, int> keyPos[26]; 
    fill(keyPos, keyPos + 26, make_pair(-1, -1));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> keys[i][j];
            if (keys[i][j] == 'S') {
                isS++;
                S.push_back({i, j});
            } else {
                keyPos[keys[i][j] - 'a'] = {i, j};
            }
        }
    }

    int q;
    cin >> q;
    string text;
    cin >> text;

    if (isS == 0) {
        for (int i = 0; i < q; i++) {
            if (isupper(text[i])) {
                cout << -1;
            }
        }
    }

    int count = 0;
    for (int i = 0; i < q; i++) {
        if (islower(text[i])) {
            if (keyPos[text[i] - 'a'].first == -1) {
                cout << -1;
            }
        } else { // uppercase letter
            char lowerCh = tolower(text[i]);
            if (keyPos[lowerCh - 'a'].first == -1) {
                cout << -1;
            }
            
            bool canTypeWithOneHand = false;
            for (int k = 0; k < isS; k++) {
                double dist = sqrt(pow(S[k].first - keyPos[lowerCh - 'a'].first, 2) + pow(S[k].second - keyPos[lowerCh - 'a'].second, 2));
                if (dist <= x) {
                    canTypeWithOneHand = true;
                    break;
                }
            }

            if (!canTypeWithOneHand) {
                count++;
            }
        }
    }

    cout << count;
}
