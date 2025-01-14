#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <set>
#include <unordered_map>
using namespace std;

int main()
{
    int n, k, l, r, sall, sk = 0;
    cin >> n >> k >> l >> r >> sall >> sk;
    sall -= sk;

    for(int i = 0; i < k; i++){
        int avg = sk / (k - i);
        //cout << "avg: " << avg << endl;
        if (avg > r){
            while (avg > r){
                avg--; 
            }
       } else if (avg < l) {
            avg++;
        }
        sk -= avg;
        cout << avg << " ";
    }
    
    for (int j = 0; j < (n - k); j++){
        int avg = sall / ((n-k) - j);
        //cout << endl << "avg: " << avg << endl;
        if (avg > r){
            while (avg > r){
                avg--; 
            }
       } else if (avg < l){
            while (avg < l){
                avg++;
            }
        }
        sall -= avg;
        cout << avg << " ";
    }
    cout << endl;

    return 0;
}
