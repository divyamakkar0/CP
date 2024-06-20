#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <unordered_map>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> array(n);
    unordered_map<int, int> indexMap;

    for(int i = 0; i  < n; i++){
        cin >> array[i];
        indexMap[array[i]] = i+1;
    }
    
    int m;
    cin >> m; 
    vector<int> queries(m);
    
    for(int i = 0; i < m; i++){
        cin >> queries[i];
    }

    long long vs = 0;
    long long ps = 0;

    for(int i = 0; i < m; i++){
        int index = indexMap[queries[i]];

        vs += index;
        ps += (n - index + 1);
    }

    cout << vs << " " << ps;
}