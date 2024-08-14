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
        if (dir[i] != '.'){
            if (dir[i] == 'R'){
                while(dir[i] == 'R'){
                    i++;
                } 
                cout << i << " " << i+1;
            } else  {
            s = i + 1;
            t = i;
            cout << s << " " << t;
        }
        break;
    }

    }
}