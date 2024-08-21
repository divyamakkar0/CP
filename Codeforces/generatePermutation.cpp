#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        
        //if n is odd
        if (n % 2 == 1){
            int half = (n+1) / 2;
            vector<int> firsthalf(half);
            for(int i = 0; i < half; i++){
                firsthalf[i] = n;
                n -= 2;
                cout << firsthalf[i] << " ";
            }
            vector<int> secondhalf(half-1);
            int num = 2;
            for(int i = 0; i < half-1;i++){
                secondhalf[i] = num;
                num+=2;
                cout << secondhalf[i] << " ";
            }
            cout << endl;

        } else {
            cout << -1 << endl;
        }
    }
}