#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <string>
#include <cmath>
using namespace std;


int main()
{
    long long int n, a;
    cin >> n;
   
    vector<int> seq1, seq2;
    long long int s1 = 0, s2 = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> a;
        if (a > 0)
        {
            s1 += a;
            seq1.push_back(a);
        }
        else
        {
            s2 += abs(a);
            seq2.push_back(abs(a));
        }
    }

    // return by sum
    if (s1 > s2){
        cout << "first" << endl;
        return 0;
    } else if (s2 > s1){
        cout << "second" << endl;
        return 0;
    }

    if (seq1 > seq2) {
        cout << "first" << endl;
        return 0;
    } else if (seq2 > seq1) {
        cout << "second" << endl;
        return 0;
    }

    if (a > 0){
        cout << "first" << endl;
    } else {
        cout << "second" << endl;
    }

}
