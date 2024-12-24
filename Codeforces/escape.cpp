#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int vp, vd, t, f, c;
    cin >> vp >> vd >> t >> f >> c;

    if (vp >= vd) {
        cout << 0 << endl;
        return 0;
    }

    double position_p = t * vp; 
    int bijous = 0;

    while (position_p < c) {
        double time_to_catch = (position_p) / (vd - vp);
        position_p += time_to_catch * vp;

        if (position_p >= c) break; 

        bijous++; 

        double time_to_return = position_p / vd + f;

        position_p += time_to_return * vp;
    }

    cout << bijous << endl;
}
