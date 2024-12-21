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
    // 1 if an only if the ith digit of the two numbers differ
    string a;
    string b;
    cin >> a >> b;

    string result;

    for (int i = 0; i < a.length(); i++){
        if (a[i] != b[i]){
            result.append("1");
        } else {
            result.append("0");
        }
    }

    cout << result << endl;
}