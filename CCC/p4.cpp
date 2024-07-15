#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>
#include <set>
#include <unordered_map>
using namespace std;

int main()
{
    int c;
    cin >> c;

    int row1[c];
    int row2[c];

    int totalP = 0;

    for(int i = 0; i < c; i++){
        cin >> row1[i];

        if (row1[i] == 1){
            totalP +=3; 
        }
    }

    for(int i = 0; i < c; i++){
        cin >> row2[i];

        if (row2[i] == 1){
            totalP +=3; 
        }
    }

    for(int i = 0; i < c-1; i++){
        if (row1[i] == 1 && row1[i+1] == 1){
            totalP-=2;
        }
        if (row2[i] == 1 && row2[i+1] == 1){
            totalP-=2;
        }
    }

    for(int i = 0; i < c; i+=2){
        if (row1[i] == 1 && row2[i] == 1){
            totalP -=2;
        }
    }

    cout << totalP; 
}