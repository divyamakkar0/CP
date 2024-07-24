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
    freopen("shell.in", "r", stdin);
    freopen("shell.out", "w", stdout);

    int N;
    cin >> N;

    vector<int> placement = {1, 2, 3};
    vector<int> guess = {0 ,0 ,0};
   
    for (int i = 0; i < N; i++)
    {   
        int a, b, g;
        cin >> a >> b >> g;
        a--; b--; g--;

        swap(placement[a], placement[b]);
        guess[placement[g]-1]++;   
    }

    int max = 0;
    for(int i = 0; i < 3; i++){
        if(guess[i] > max){
            max = guess[i];
        }
    }

    cout << max; 
    
}