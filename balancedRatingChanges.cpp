#include <bits/stdc++.h>
using namespace std;

int main()
{
    //taking in inputs
    int n; 
    cin >> n;

    int sum = 0;
    int a[n];

    for (int i = 0 ; i < n; i++){
        cin >> a[i];
    }

    for (int i = 0 ; i < n; i++){
        if (a[i] % 2 == 0){
            a[i] /= 2;
            sum -= a[i];
        }
    }

    for (int i = 0; i < n; i++){
        if (a[i] % 2 != 0 && sum < 0){
            a[i] = ceil((double)a[i] / 2.0); 
        } else if (a[i] % 2 != 0 && sum > 0){
            a[i] = floor((double)a[i] / 2.0); 
        }
        cout << a[i] << endl;
    }




}