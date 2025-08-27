#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
#include <string>
#include <utility>
#include <iomanip>
using namespace std;

int main()
{
    int a, x, y;
    cin >> a >> x >> y;

    // start with x
    bool border = false;
    double width = a / 2.0;

    if (y % a == 0) border = true;

    int height = ceil((double)y / a);
    
    int square = 1;
    height -= 1;

    if (height % 2 == 0 && height != 0){
        if (x % a == 0) border = true;
        if (x >= a || x <= -a) border = true;
    } else {
        if (x <= -width || x >= width) border = true;
    }

    if (border) { cout << -1 << endl; return 0;} 


    while( height > 2){
        height -= 2; 
        square += 3;
    } 
    if (height == 1){
        square += 1;
    } else if (height == 2){
        if (x < 0) {
            square += 2;
        } else {
            square += 3;
        }
    }

    cout << square << endl;

}