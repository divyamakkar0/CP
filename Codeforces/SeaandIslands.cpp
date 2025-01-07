#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <set>
#include <unordered_map>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    
    if (n % 2 == 0){
        if (k > (pow(n, 2) / 2)){
            cout << "NO" << endl; 
        } else {
            int counter = 0;
            cout << "YES" << endl;
            for (int i = 0; i < n; i++){
                for (int j = 0; j < n; j++){
                    if (k <= 0){
                        cout << "S";
                    } else {
                        if (counter % 2 == 0){
                        cout << "L";
                        k--;
                    } else {
                        cout <<"S";
                    }
                    counter++;
                    }
                }
                cout << endl;
            } 
    }}
    else {
        if (k > (pow((n+1), 2) / 2)){
            cout << "NO" << endl;
        } else {
            int counter = 0;
            cout << "YES" << endl;
            for (int i = 0; i < n; i++){
                for (int j = 0; j < n; j++){
                    if (k <= 0){
                        cout << "S";
                    } else if (i % 2 != 0 && j == 0){
                        counter++;
                        if (counter % 2 == 0){
                        cout << "L";
                        k--;
                        } else {
                        cout <<"S";
                        }
                        counter++;
                    } else {
                        if (counter % 2 == 0){
                        cout << "L";
                        k--;
                        } else {
                        cout <<"S";
                        }
                        counter++;                   
                     }
                }
                cout << endl;
            }
        }
    }


}


