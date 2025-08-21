#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
#include <string>
using namespace std;

long long cost(long long x){
    long long res = 0;
    res += static_cast<long long>(pow(3, x+1));
    res += (x * static_cast<long long>(pow(3, x-1)));
    return res;
}

int main()
{
    int t;
    cin >> t;
    for (int j = 0; j < t; j++)
    {
        long long n;
        cin >> n;
        vector<long long> divs;
       
        if (n <= 2){
            cout << 3 * n << endl;
            continue;
        } 

        long long copy = n;

        while(copy != 0){
            double res = log(copy) / log(3);
            long long ub = static_cast<long long>(floor(res + 1e-12));
            long long sub = static_cast<long long>(pow(3, ub));
            // cout << "copy: " << copy << " res: " << res << " ub: " << ub << " sub: " << sub << endl;
            copy -= sub;
            divs.emplace_back(ub);
        }
        
        long long sum = 0;
        for(long long int i = 0; i < divs.size(); i++){
            // cout << divs[i] << endl;
            sum += cost(divs[i]); 
        }

        cout << sum << endl;

    }
}
