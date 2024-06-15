#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main(){
    //input
    int n;
    cin >> n;

    vector<int> h(n);

    for (int i = 0; i < n; i++){
        cin >> h[i];
    }
    
    int max = 0;
    for (int i = 0; i < n; i++){
        if (h[i] > max){
            max = h[i];
        }
        
    }

    cout << max;
}