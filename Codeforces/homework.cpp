#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
#include <string>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int j = 0; j < t; j++){
        int n;
        string a;
        cin >> n;
        cin >> a;

        int m;
        string b;
        string c;
        cin >> m >> b >> c;

        for(int i = 0; i < m; i++){
            if (c[i] == 'V') {
                a = b[i] + a;
            } else if (c[i] == 'D'){
                a += b[i];
            }
        } 

        cout << a << endl;
    }
}