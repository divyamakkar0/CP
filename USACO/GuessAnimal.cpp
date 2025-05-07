#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    freopen("guess.in", "r", stdin);
    freopen("guess.out", "w", stdout);
    
    
    int n;
    cin >> n;

    

    vector<vector<string> > characteristics(n);
    for(int i = 0; i < n; i++){
        string name;
        cin >> name;

        int k; cin >> k;
        for(int j = 0; j < k; j++){
            string c1;
            cin >> c1;
            characteristics[i].push_back(c1);
        }
    }

    int max_yes = 0;

    for(int i = 0; i < n -1; i++){
        for(int j = i+1;j < n; j++){
            int common = 0;
            for(int l = 0; l < characteristics[i].size();l++){
                for(int k = 0; k < characteristics[j].size();k++){
                    if (characteristics[i][l] == characteristics[j][k]){
                        common++;
                        break;
                    }
                }
            }
            max_yes = max(max_yes, common);
        }
    }


    cout << max_yes + 1 << endl;

}
