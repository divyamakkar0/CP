#include <iostream>
#include <string>
#include <vector>
#include<algorithm>
#include <cmath>
#include <unordered_map>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;

    vector<int> h(n);
    
    for(int i = 0; i <n; i++){
        cin >> h[i];
    }
    int sum = 100000;
    int index = 0;
    //something about sum of k here
    for(int i = 0; i < n-(k-1); i++){
        int p = i;
        int k2 = k;
        int temp = 0;

        while(k2){
            temp += h[i];
            i++;
            k2--;
        }
        // cout << "temp" << temp << endl;
        if (temp < sum){
            sum = temp;
            index = p;
        }
        i = p;
        // cout << "p " << p << endl;
    }

    cout << index +1; 
    
}