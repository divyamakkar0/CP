#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--){
        long long int x, y, k;
        cin >> x >> y >> k;

        while(k>0){
            int v = y-x%y;
            if (k >= (v)){
                k-=(v);
                x+=(v);
                while(x%y ==0){
                    x/=y;
                }
                if(x==1) k%=y-1;
            } else {
                x+=k;
                break;
            }
        }
            cout <<x<<endl;
        }

}
