#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int count = 0;
    string ones = "";
    for (int i = 0; i < s.length(); i++){
        if (s[i] == '1'){
            count += 1;
            ones += "1";
        }
    }

    s.erase(std::remove(s.begin(), s.end(), '1'), s.end());

    int ind = 0;
    while(s[ind] == '0'){
        ind += 1;
    }

    s.insert(ind, ones);
    
    cout << s << endl;
}