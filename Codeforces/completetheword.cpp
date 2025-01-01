#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    string s;
    cin >> s;

    bool found = false;

    for (int i = 0; i <= (int(s.length()) - 26); i++) {
        vector<int> alphabet(26, 0);
        int missing = 0, questionMarks = 0;

        for (int j = 0; j < 26; j++) {
            char c = s[i + j];
            if (c == '?') {
                questionMarks++;
            } else {
                alphabet[c - 'A']++;
                if (alphabet[c - 'A'] > 1) break; 
            }
        }

        for (int k = 0; k < 26; k++) {
            if (alphabet[k] == 0) missing++;
        }

        if (missing <= questionMarks) {
            string result = s;
            vector<char> unused;
            for (int k = 0; k < 26; k++) {
                if (alphabet[k] == 0) unused.push_back(char('A' + k));
            }

            int index = 0;
            for (int j = 0; j < 26; j++) {
                if (result[i + j] == '?') {
                    result[i + j] = unused[index++];
                }
            }

            
            for (char &c : result) {
                if (c == '?') {
                    c = 'A'; 
            }}

            cout << result << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << -1 << endl;
    }


}
