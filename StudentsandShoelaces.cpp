#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <set>
#include <unordered_map>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    int s[m][2];
    vector<int> log(n);

    for(int i = 0; i < m; i++){
        int a, b;
        cin >> a >> b;
        s[i][0] = a;
        s[i][1] = b;
        log[a]++;
        log[b]++;
    }

    //try logging how many times each name shows up


}