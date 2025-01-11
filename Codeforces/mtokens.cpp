#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <set>
#include <unordered_map>
using namespace std;

int main(){
    int n, a, b;
    cin >> n >> a >> b;

    vector<int> coins(n);
    for(int i = 0; i < n; i++){
        cin >> coins[i];
        if ((coins[i] * a) % b == 0){
            coins[i] = 0;
        } else {
            int xi = coins[i] % b;
            int amodb = a % b;
            if (b % amodb == 0){
                int div = b / amodb;
                if (xi > div){
                    coins[i] = (xi - div);
                } else {
                    coins[i] = xi;
                }
            } else {
                coins[i] = xi;
            }
        }
        cout << coins[i] << " ";
    }

    cout << endl;
    return 0;
      
}