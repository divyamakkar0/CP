#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a1, a2, b1, b2;
        cin >> a1 >> a2 >> b1 >> b2;
        
        int wins = 0;
            
        int firstRound[4] = {a1 - b1, a1 - b2, a2 - b1, a2 - b2};
        int secondRound[4] = {a2 - b2, a2 - b1, a1 - b2, a1 - b1};
            
        for (int i = 0; i < 4; ++i) {
            int suneet = 0;
                
            if (firstRound[i] > 0){
                suneet++;
            }
                
            if (secondRound[i] > 0){
                suneet++;
            }
                
            if (suneet == 2) {
                wins++;
            }
        }
            
        cout <<  wins << endl;
    }
}
