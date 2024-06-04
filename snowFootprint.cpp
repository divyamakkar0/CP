#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    char dir[1000];
    cin >> n >> dir;

    int s = 0; 
    int t = 0;

    for (int i = 0; i < n; i++){
        if (dir[i] == 'R'){
            s = i+1;
            break;
        }
    }

    for (int j = n-1; j >= 0; j--){
        if (dir[j] == 'R'){
            t = j+1;
            break;
        }
    }

    printf("%d %d", s, t);

}