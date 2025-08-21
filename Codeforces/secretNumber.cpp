#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int j = 0; j < t; j++)
    {
        long long int n;
        cin >> n;
        string num = to_string(n);
        int digits = num.length();
        vector<long long> result;

        long long base = 1;

        for(int i = 0; i < digits; i++){
            base *= 10;
        }
        
        for(int i = 1; i <= digits; i++){
            long long div = base + 1;
            if (n % div == 0){
                result.push_back(n / div);
            }
            base /= 10;
        }

        if (result.empty()){
            cout << 0 << endl;
        } else {
            cout << result.size() << endl;
            for(int i = 0; i < result.size(); i++){
                if (i == (result.size() - 1)){
                    cout << result[i] << endl;
                } else {
                    cout << result[i] << " ";
                }
            }
        }
    }




}
