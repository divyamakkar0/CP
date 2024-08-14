#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <unordered_map>
using namespace std;

int main()
{
    string n;
    cin >> n;

    string second = n;
    reverse(second.begin(), second.end());
    string final = n + second;

    cout << final;
}