#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
#include <string>
using namespace std;

int find(string cows, char element, int start){
    for(int i = start; i < 52; i++){
        if (cows[i] == element){
            return i;
        }
    }
    return -1;

}

int main()
{
    freopen("circlecross.in", "r", stdin);
    freopen("circlecross.out", "w", stdout);

    string cows;
    cin >> cows;
    int count = 0;

    for(int i = 0; i < 51; i++){
        int other = find(cows, cows[i], i+1);
        
        if (other != -1){
            for(int j = i+1; j < other; j++){
                int find_j = find(cows, cows[j], j+1);
                // cout << "find j " << find_j << endl;
                if ((find_j != -1) && (find_j > other)){
                    count++;
                }

            }
        }
        // break;
        
    }

    cout << count << endl;
}