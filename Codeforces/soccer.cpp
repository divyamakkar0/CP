#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){
    int t;
    cin >> t;

    for(int i = 0; i < t; i++){
        vector<int> first(2);
        cin >> first[0] >> first[1];
        vector<int> second(2);
        cin >> second[0] >> second[1];

        int x1 = first[0];
        int y1 = first[1];
        int xf = second[0];
        int yf = second[1];
        if (x1 > y1 && xf > yf){
            cout << "YES" << endl;
        } else if (x1 > y1 && xf < yf){
            cout << "NO" << endl;
        } else if (x1 < y1 && xf < yf){
            cout << "YES" << endl;
        } else if (x1 < y1 && xf > yf){
            cout << "NO" << endl;
        }
    }




}