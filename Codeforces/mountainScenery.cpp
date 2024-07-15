#include <bits/stdc++.h> 
using namespace std;

int main()
{   
    //take in inputs
    int n, k;
    cin >> n >> k;

    int yCoords[2*n + 1];
    for (int i = 0; i < (2*n + 1); i++) { 
        cin >> yCoords[i]; 
    } 

    int kCounter = 0;

    for (int i = 1; i < (2*n + 1) && kCounter < k; i+= 2){
        int temp = yCoords[i] - 1;
        if (yCoords[i - 1] < temp && temp > yCoords[i+1]){
            yCoords[i]--;
            kCounter++;
        } 
    }   

    for (int i = 0; i < (2*n + 1); i++) { 
        cout << yCoords[i] << " "; 
    } 


}
