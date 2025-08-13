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

    int total = 1;
    int index = 0; int back_ind = n-1;
    while(bar[index] != 1 && index < n-1) index++;
    cout << index;
    
    while(bar[back_ind] != 1 && back_ind >= 0) back_ind--; 
    if (index != n-1) index += 1; 
    if (back_ind != 0) back_ind -=1;
    int between = 0;
    for(int index; index < back_ind; index++){
        if(bar[index] == 1 && between != 0){
            total *= between;
            between = 0;
        } 
        if (bar[index] == 0) between++;
        cout << "between :" << between << endl;
    }
    return total;
    
}
