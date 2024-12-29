#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <set>
#include <unordered_map>
using namespace std;

int minn(vector<int> v, int n){
    sort(v.begin(), v.end());
    int sum = 0;
    int i = 0;
    while(n != 0){
        sum += v[i];
        n--;
        v[i]--;
        if (i == v.size() - 1){
            continue;
        } else if (v[i] == 0 || v[i] > v[i+1]){
            i++;
        } else {
            continue;
        }
    }
    return sum;
}

int maxx(vector<int> v, int n){
    sort(v.begin(), v.end(), greater<int>());
    int max_sum = 0;
    int i = 0;

    while(n != 0){
        max_sum += v[i];
        n--;
        v[i]--;
        if (i == v.size() - 1){
            i = 0;
        } else if (v[i] > v[i+1]){
            i = 0;
        } else if (v[i] == v[i+1]){
            i = 0;
        } else {
            i++;
        }
    }
    return max_sum;
}

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> p;
    for (int i = 0; i < m; i++){
        int temp;
        cin >> temp;
        p.push_back(temp);
    }

    int max = maxx(p, n);
    cout << max << " ";

    int min = minn(p, n);
    cout << min << endl;

    
}