#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        vector<int> map(101, 0);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            map[a[i]]++;
        }

        int max_int = 0;
        for(int i = 0; i < map.size(); i++){
            max_int = max(max_int, map[i]);
        }

        int count = n - max_int;
        cout << count << endl;        
    }
}
