#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    int k;
    string q;
    vector<int> alphabet(26, 0); 
    int diff = 0;

    cin >> k >> q;

    for (int i = 0; i < q.size(); i++) {
        if (alphabet[q[i] - 'a'] == 0) {
            diff++;
        }
        alphabet[q[i] - 'a']++;
    }

    if (k > diff) {
        cout << "NO" << endl;
        return 0;
    }

    cout << "YES" << endl;

    int count = 0;
    vector<bool> used(26, false);
    for (int i = 0; i < q.size(); i++) {
        if (count < k && !used[q[i] - 'a']) {
            if (count > 0) {
                cout << endl; 
            }
            count++;
            used[q[i] - 'a'] = true;
        }
        cout << q[i];
    }
    cout << endl;

    return 0;
}

