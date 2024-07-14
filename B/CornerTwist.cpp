#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <unordered_map>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;

        int a[n][m];
        int b[n][m];
        
       
        for (int j = 0; j < n;j++){
            for (int k = 0; k < m; k++){
                cin >> a[j][k];
            }
        }

        for (int j = 0; j < n;j++){
            for (int k = 0; k < m; k++){
                cin >> b[j][k];
            }
        } 
    
    }
}