#include <iostream>
using namespace std;

int main (){
    int n, k;
    cin >> n >> k;

    int numbs[n][2];

    int t = 0;

    for (int i = 0; i < n; i++){
        cin >> numbs[i][0] >> numbs[i][1];
        int temp = (numbs[i][1] - numbs[i][0]) + 1;
        t += temp;
    }

    if (t % k != 0){
        int remainder = t % k;
        int minMoves = k - remainder;
        cout << minMoves;
    } else if (t % k == 0){
        cout << '0';
    }



}