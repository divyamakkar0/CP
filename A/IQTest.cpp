#include <bits/stdc++.h>
using namespace std;

int main() {
    char ar[4][4];

    // Reading input
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> ar[i][j];
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (ar[i][j] == ar[i+1][j] && ar[i][j] == ar[i][j+1] && ar[i][j] == ar[i+1][j+1]) {
                printf("YES");
                return 0;
            }
        }
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            ar[i][j] = (ar[i][j] == '.') ? '#' : '.';

            for (int k = 0; k < 3; k++) {
                for (int l = 0; l < 3; l++) {
                    if (ar[k][l] == ar[k+1][l] && ar[k][l] == ar[k][l+1] && ar[k][l] == ar[k+1][l+1]) {
                        printf("YES");
                        return 0;
                    }
                }
            }

            ar[i][j] = (ar[i][j] == '.') ? '#' : '.';
        }
    }

    printf("NO");
    return 0;
}
