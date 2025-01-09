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
    int k;
    string q;

    cin >> k >> q;

    if (k > q.length()){
        cout << "NO";
    } else {
        int count = 1;
        char first = q[0];
        for (int i = 0; i < q.length(); i++){
            if (count == k){
                cout << q[i];
            } else {
                if (q[i] != first){
                    cout << endl << q[i];
                    first = q[i];
                    count++;
                } else {
                    cout << q[i];
                }
            }
        }
    }
    cout << endl;
}
