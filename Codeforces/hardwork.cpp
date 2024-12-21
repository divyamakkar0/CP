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
    string a;
    string b;
    string c;
    int nin;
    cin >> a >> b >> c;
    cin >> nin;

    string final;
    string a_new;
    string b_new;
    string c_new;

    
        for (int i = 0; i < a.length(); i++)
        {
            if (a[i] == '-' || a[i] == ';' || a[i] == '_')
            {
                continue;
            }
            else
            {
                a_new += tolower(a[i]);
            }
        }

        // cout << "a_new: " << a_new << endl;

        for (int j = 0; j < b.length(); j++)
        {
            if (b[j] == '-' || b[j] == ';' || b[j] == '_')
            {
                continue;
            }
            else
            {
                b_new += tolower(b[j]);
            }
        }

        // cout << "b_new: " << b_new << endl;

        for (int k = 0; k < c.length(); k++)
        {
            if (c[k] == '-' || c[k] == ';' || c[k] == '_')
            {
                continue;
            }
            else
            {
                c_new += tolower(c[k]);
            }
        }

        // cout << "c_new: " << c_new << endl;
    while (nin--) {
        string temp;
        cin >> temp;
        string n;

        for (int i = 0; i < temp.length(); i++)
        {
            if (temp[i] == '-' || temp[i] == ';' || temp[i] == '_')
            {
                continue;
            }
            else
            {
                n += tolower(temp[i]);
            }
        }

        if (n == a_new + b_new + c_new || n == a_new + c_new + b_new || n == b_new + c_new + a_new || n == b_new + a_new + c_new || n == c_new + a_new + b_new || n == c_new + b_new + a_new)
        {
            cout << "ACC" << endl;
        }
        else
        {
            cout << "WA" << endl;
        }
    }
}