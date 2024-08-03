#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
    freopen("shuffle.in", "r", stdin);
    freopen("shuffle.out", "w", stdout);

    int n;
    cin >> n;

    vector<int> perm(n);
    vector<int> id(n);

    for(int i = 0; i < n; i++){
        cin >> perm[i];
     }

    for(int i = 0; i < n; i++){
        cin >> id[i];
    }
    ///////inputs taken in

    int shuffleNum = 3;

    vector<int> temp(n);
     for (int i=0; i<n; i++){  
        temp[i] = id[i];
     }
    
    vector<int> final(n);

    for(int i = 0; i < shuffleNum; i++){
        for(int i = 0; i < n; i++){
            final[i] = temp[perm[i]-1];
        }
        for(int i = 0; i < n; i++){
            temp[i] = final[i];
        }
    }

    for(int i = 0; i < n; i++){
        cout << final[i] << endl;
    }


    
}