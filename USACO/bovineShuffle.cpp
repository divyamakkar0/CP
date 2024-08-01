#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> perm(n);
    vector<int> id(n);

    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        a--;
        id.push_back(a);
    }

    for(int i = 0; i < n; i++){
        cin >> id[i];
    }
    ///////inputs taken in

    int shuffleNum = 3;

    vector<int> final(n);

    for(int i = 0; i < shuffleNum; i++){
        
    }


    
}