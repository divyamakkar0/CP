#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <set>
#include <unordered_map>
using namespace std;

int main()
{
    string s;
    cin >> s; 

    string final;


    for (int i = 0; i < (s.length() - 26); i++){
        int q = 0;
        int z = 0;
        vector<char> empty;
        vector<int> alphabet;

        for(int j = 0; j < 26; j++){
            char a = s[j];
            cout << a << endl;
            if (a == '?'){
                q++;
            } else {
                alphabet[a - 'A']++;
            };
        }
        for (int k = 0; k < 26; k++){
            if (alphabet[k] == 0){
                cout << alphabet[k] << endl;
                z++;
                empty.push_back(alphabet[k]);
            }
        }
        if (z <= q){
            for (int m = 0; m < 26; m++){
                int ind = 0;
                if (s[m] == '?'){
                    final += empty[ind];
                    ind++;
                } else {
                    final += s[m];
                }
            }
            cout << final;
            break;
        }
        cout << -1;
    }
}