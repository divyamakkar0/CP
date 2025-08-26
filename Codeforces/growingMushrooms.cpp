#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
#include <string>
#include <utility>
#include <iomanip>
using namespace std;

double calculate(double t1, double t2, double k, double ai, double bi){
    double factor = (100.0 - k) / 100.0;
    double res1 = (ai * t1 * factor) + (bi * t2);
    double res2 = (bi * t1 * factor) + (ai * t2);

    return max(res1, res2);
}

int main()
{
    int n;
    double t1, t2, k;
    cin >> n >> t1 >> t2 >> k;
    
    vector<pair<double, double>> speeds;
    for(int i =0; i < n; i++){
        double ai, bi;
        cin >> ai >> bi;
        speeds.push_back(make_pair(ai, bi));
    }

    vector<pair<int, double>> res;
    for(int i = 0; i < n; i++){
        double h = calculate(t1, t2, k, speeds[i].first, speeds[i].second);
        res.emplace_back(make_pair(i+1, h));
    }

    sort(res.begin(), res.end(), [](const pair<int,double> &a, const pair<int,double> &b) {
        if (a.second == b.second)
            return a.first < b.first;
        return a.second > b.second;    
    });

    for(int i = 0; i < n; i++){
        cout << res[i].first << " ";
        cout << fixed << setprecision(2) << res[i].second << endl;
    }
}