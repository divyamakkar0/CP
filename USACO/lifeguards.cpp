#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int count(vector<int> v){
    int c = 0;
    for(int i = 0; i < v.size(); i++){
        if (v[i] != 0){
            c++;
        }
    }
    return c;
}

int alternate(vector<int> span, int start, int end){
    for(int i = start + 1; i <= end; i++){
        span[i] -= 1;
    }
    return count(span);
}

int main(){

    freopen("lifeguards.in", "r", stdin);
    freopen("lifeguards.out", "w", stdout); 

    int n;
    cin >> n;

    vector<pair<int, int> > inp(n);
    int upperbound = 0;
    for(int i = 0; i < n; i++){
        cin >> inp[i].first >> inp[i].second;
        upperbound = max(upperbound, inp[i].second);
    }

    vector<int> span(upperbound + 1);
    for(int i = 0; i < n; i++){
        for(int j = inp[i].first + 1; j <= inp[i].second; j++){
            span[j]++;
        }
    }

    int max_count = 0;
    for(int i = 0; i < n; i++){
        int res = alternate(span, inp[i].first, inp[i].second);
        max_count = max(res, max_count);
    }

    cout << max_count << endl;

    return 0;
}