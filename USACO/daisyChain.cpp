#include <iostream>
#include <vector>
#include <unordered_map>
#include <limits.h>
#include <cmath>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> petals(n);
    for(int i = 0; i < n; i++){
        cin >> petals[i];
    }

    int count = 0;

    for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++){
            if( i == j){
                count++;
            } else {
                float avg = 0;
                int nc = 0;
                vector<int> p;
                for(int k = i; k <= j; k++){
                    avg += petals[k];
                    nc++;
                    p.push_back(petals[k]);
                }
                float f = avg / nc;
                for(int k = i; k <= j; k++){
                    if(petals[k] == f){
                        count++;
                        break;
                    }
                }
            }
        }

    }

    cout << count;
}