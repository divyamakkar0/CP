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
    int p, c;
    cin >> p;
    cin >> c;

    int total = 50*p + (-10 * c);
    if (p > c){
        total+=500;
    }

    cout << total;
}



