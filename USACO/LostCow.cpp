#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main(){
    freopen("lostcow.in", "r", stdin);
    freopen("lostcow.out", "w", stdout);

    int x, y;
    cin >> x >> y; 

    int dis = 0;
    int pos = x;
    int b = 1; 
    int low = x;
    int high = x;
    int count = 0;
    int sign = 0;


    while(!(low <= y && y <= high)){
        int po = pos;
        // cout << "po =" << po << endl;
        sign = pow((-1), count);
        // cout << "sign = " << sign << endl;
        pos = x + (sign * b);
        // cout << "pos =" << pos << endl;
        if (count % 2 == 0){ //means its plus
            high = pos;
        } else {
            low = pos;
        }
        dis += abs(pos - po);
        // cout << "dis =" << dis << endl;
        b *= 2;
        // cout << "b =" << b << endl;
        count++;
        // cout << "count =" << count << endl;
    }

    if (sign == 1){
        dis -= abs(high - y);
    } else {
        dis -= abs(low - y);
    }
    cout << dis;
}