#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin >> n;


    string decoded;
    cin >> decoded;

    vector<char> s(decoded.begin(), decoded.end());

    char output[n] = {'\0'};
    
    int middle = floor((n+1)/2)-1;

    output[middle] = s[0];

    int l = middle;
    int r = middle+1;


    if (n % 2 != 0){
    for(int i = 1; i<n; i++){
        if (i % 2 != 0){
            if (l == 0){
                l = n;
            } 
            l--;
            output[l] = s[i];

        } else {
            output[r] = s[i];
            r++;
        }
    }
    } else {
        for (int i = 1; i < n; i++){
            if (i % 2 != 0){
                output[r] = s[i];
                r++;
            } else {
                output[l] = s[i];
                l--;
            }
        }
    }

    // if (n % 2 == 0){
    //     output[n-1] = s[n-1];
    // }

    for (int i = 0; i < n;i++){
        cout << output[i];
    }

}

