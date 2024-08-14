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

    int num[n];
    int sum = 0;
    int even = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
        sum += num[i];
        if (num[i] % 2 == 0){
            even++;
        }
    }

    if (sum % 2 == 0){ //if even
        cout << even;
    } else {
        cout << (n-even);
    }
}