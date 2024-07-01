#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <unordered_map>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> d(n);

    for (int i = 0; i < n; i++)
    {
        cin >> d[i];
    }   

    int p = 0;
    for (int i = 0; i < n; i++)
    {
        if(d[i] - d[i+1]==1){
            p++;
        }
        
    }

}