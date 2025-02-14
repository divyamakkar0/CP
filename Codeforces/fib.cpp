#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--){
        int a, b, c, d;
        cin >> a >> b >> c >> d; 
        int maxx = 0;
        int max2 = 0;

        int a3 = a + b;
        maxx++;
        if (a3 + b == c){
            maxx++;
        }

        if ( a3 + c == d){
            maxx++;
        }

        int a3_2 = c- b; 
        if (a + b == a3_2){
            max2++;
        }

        if (b + a3_2 == c){
            max2++;
        }

        if (a3_2 + c == d){
            max2++;
        }

        cout << max(maxx, max2) << endl;
   }
}