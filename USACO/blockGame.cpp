#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    freopen("blocks.in", "r", stdin);
    freopen("blocks.out", "w", stdout);
    int n;
    cin >> n;

    vector<pair<string, string>> input(n);

    for(int i = 0; i < n; i++){
        cin >> input[i].first >> input[i].second;
    }

    vector<int> alphabet(26, 0);

    for(int i = 0; i < n; i++){
        vector<int> count1(26,0), count2(26,0);

        for(int j = 0; j < input[i].first.length(); j++) {
            count1[(input[i].first[j]) - 'a']++;
        }
        for(int k = 0; k < input[i].second.length(); k++) {
            count2[(input[i].second[k]) - 'a']++;
        }

        for(int j = 0; j < 26; j++) {
            alphabet[j] += max(count1[j], count2[j]);
        }
    }

    for(int i = 0; i < 26; i++){
        cout << alphabet[i] << endl;
    }
    
    
}