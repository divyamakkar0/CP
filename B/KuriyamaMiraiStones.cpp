#include <iostream>
#include <string>
#include <vector>
#include<algorithm>
#include <cmath>
#include <unordered_map>
using namespace std;

int main()
{
    //take in n
    long long int n;
    cin >> n;

    //take in costs
    vector<long long int> costs;
    vector<long long int> sorted;
    for (long long int i = 0; i < n; i++)
    {   
        long long int x;
        cin >> x;
        costs.push_back(x);
        sorted.push_back(x);
    }

    sort(sorted.begin(),sorted.end());

    //take in q
    long long int m;
    cin >> m;

    //prefix sum costs
    vector<long long int> ps1(n);
    ps1[0] = costs[0];
    for(int i = 1; i < n;i++){
        ps1[i] = ps1[i-1] + costs[i];
    }

    ps1.insert(ps1.begin(), 0);

    //prefix sum sorted
    vector<long long int> ps2(n);
    ps2[0] = sorted[0];
    for(int i = 1; i < n;i++){
        ps2[i] = ps2[i-1] + sorted[i];
    }

    ps2.insert(ps2.begin(), 0);


    for(int i = 0; i < m; i++){
        int a, b, c;
        cin >> a >> b >> c;
        long long int sum = 0;
        //sorted ps2
        if (a == 2){
            sum = ps2[c] - ps2[b-1];
        } else {
            sum = ps1[c] - ps1[b-1];
        }
        cout << sum << endl;
    }

}