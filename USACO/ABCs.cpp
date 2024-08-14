#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>
#include <set>
#include <unordered_map>
using namespace std;

int main()
{   
    freopen("word.in", "r", stdin);
    freopen("word.out", "w", stdout);

    vector<int> input;
    for(int i = 0; i < 7; i++){
        int a;
        cin >> a;
        input.push_back(a);
    }

    sort(input.begin(), input.end());
    int all = input[6];
    int a = input[0];
    int b = input[1];
    int ab = a + b;
    int c = all - ab;

    cout << a << " " << b << " " << c;

}