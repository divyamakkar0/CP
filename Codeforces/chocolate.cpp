#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
#include <string>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> bar;
    for(int i = 0; i < n; i++){
        int l;
        cin >> l;
        bar.emplace_back(l);
    }
    bool allzeros = true;
    for(int i = 0; i < n; i++){
        if (bar[i] != 0){
            allzeros = false;
            break;
        }
    }

    if (!allzeros){
        //elim all leading ad trailing 0s
    int index = 0; int back_ind = n-1;
    while(index < n-1 && bar[index] != 1) index++;
    while(back_ind >= 0 && bar[back_ind] != 1) back_ind--;
    // cout << index << " " << back_ind << endl;

    int total = 1;
    int empty = 0;
    for(int i = index + 1; i < back_ind; i++){
        // cout << "i : " << i << " total: " << total << endl;
        if (bar[i] == 1) {
            // cout << "index at one: " << i << endl;
            // cout << "count: " << empty << endl;
            // cout << endl;
            if (empty != 0){
                int combinations = 2;
                empty -= 1;
                while(empty > 0){
                    combinations += 1;
                    empty -= 1;
                }
                empty = 0;
                total *= combinations;
            }
        } else {
            // cout << "index is zero: " << i << endl;
            // cout << "count: " << empty << endl;
            // cout << endl;
            empty += 1;
        }
    }
        if (empty != 0){
            int combinations = 2;
            empty -= 1;
            while(empty > 0){
                combinations += 1;
                empty -= 1;
            }
            total *= combinations;
        }

        cout << total << endl;
    } else {
        cout << 0 << endl;
    }
}
