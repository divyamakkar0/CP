#include <iostream>
#include <vector>
#include <unordered_map>
#include <limits.h>
using namespace std;

using namespace std;

int main() {
    freopen("censor.in", "r", stdin);
    freopen("censor.out", "w", stdout);
    string s, t;
    cin >> s >> t;

    string output = ""; 
    int tlen = t.length();

    for (int i = 0; i < s.size(); i++) {
        output += s[i];

        if (output.size() >= tlen && output.substr(output.size() - tlen) == t) {
            output.resize(output.size() - tlen);
        }
    }

    cout << output << endl;
}

#include <iostream>
#include <string>

using namespace std;

int main() {
    freopen("censor.in", "r", stdin);
    freopen("censor.out", "w", stdout);
    string s, t;
    cin >> s >> t;

    string output = ""; 
    int tlen = t.length();

    for (int i = 0; i < s.size(); i++) {
        output += s[i];

        if (output.size() >= tlen && output.substr(output.size() - tlen) == t) {
            output.resize(output.size() - tlen);
        }
    }

    cout << output << endl;
}
