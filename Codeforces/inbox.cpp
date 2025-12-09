#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> letters;
    int unread = 0;
    int read = 0;

    for (int i = 0; i < n; i++)
    {
        int e;
        cin >> e;
        letters.push_back(e);
        if (e == 1)
        {
            unread += 1;
        } else if (e == 0)
        {
            read += 1;
        }
    }

    if (read == n)
    {
        cout << 0 << endl;
        return 0;
    }

    // cout << "read: " << read  << " n: " << n << endl;

    int counter = 0;
    int start_ind = 0;
    while (letters[start_ind] == 0)
    {
        start_ind += 1;
    }

    // cout << "counter: " << counter << "| startd_ind: " << start_ind << endl;

    for (int i = start_ind; i < n; i++)
    {
        if (letters[i] == 1){
            counter += 1;
            if (i > 0 && i != start_ind && letters[i-1] == 0){
                counter +=1;
            }
        } 
    }

    cout << counter << endl;
}