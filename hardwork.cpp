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
    cin >> a >> b >> c;
    cin >> n; 

    string final;
    string a_new;
    string b_new;
    string c_new;

    while (n--){
        for (int i = 0; i < a.length(); i++)
        {
            if (a[i] == '-' || a[i] == ';' || a[i] == '_')
            {
                continue;
            } else {
                a_new += tolower(a[i]);
            }

        }

    //cout << "a_new: " << a_new << endl;

        for (int j = 0; j < b.length(); j++)
        {
            if (b[j] == '-' || b[j] == ';' || b[j] == '_')
            {
                continue;
            } else {
                b_new += tolower(b[j]);
            }
        }

    //cout << "b_new: " << b_new << endl;

        for (int k = 0; k < c.length(); k++)
        {
            if (c[k] == '-' || c[k] == ';' || c[k] == '_')
            {
                continue;
            } else {
                c_new += tolower(c[k]);
            }
        }

    //cout << "c_new: " << c_new << endl;

        string temp;
        cin >> temp;
        string n;

        for (int i = 0; i < temp.length(); i++){
            n += tolower(temp[i]);
        }
        

        if ((n.find(a_new) != string::npos) && (n.find(b_new) != string::npos) && (n.find(c_new) != string::npos))
        {
            cout << "ACC" << endl;
        } else {
        cout << "WA" << endl;
        }
    }
    
}