#include <iostream>
#include <vector>
#include <unordered_map>
#include <limits.h>
#include <cmath>
#include <string>
#include <string.h>
#include <algorithm>
using namespace std;

int main()
{
    string s;
    cin >> s;

    string t;
    cin >> t;

    reverse(s.begin(), s.end());

    if(s == t){
        cout << "YES";
    } else{
        cout << "NO";
    }

}