#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>
#include <set>
#include <unordered_map>
using namespace std;

int main()
{
    int n;
    cin >> n;

    map <string, int> pm;

    pm.insert({"Poblano", 1500});
    pm.insert({"Mirasol", 6000});
    pm.insert({"Serrano", 15500});
    pm.insert({"Cayenne", 40000});
    pm.insert({"Thai", 75000});
    pm.insert({"Habanero", 125000});

    int heat = 0;
    for (int i = 0; i < n; i++)
    {
        string pepper;
        cin >> pepper;

        auto it = pm.find(pepper);
        if (it != pm.end())
        {
            heat += it->second;
        }
    }

    cout << heat;
}

