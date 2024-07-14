#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <set>
#include <unordered_map>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> len(n);
    for (int i = 0; i < n; i++)
    {
        cin >> len[i];
    }   

    sort(len.begin(), len.end());

    int isDegen = 1; 

    for(int i = 0; i < n-2; i++){
        if((len[i] + len[i+1] > len[i+2])){
            isDegen = 0;
            break;
        }
    } 

    if(isDegen == 0){
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}