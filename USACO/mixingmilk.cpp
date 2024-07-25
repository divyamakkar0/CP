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
    freopen("mixmilk.in", "r", stdin);
    freopen("mixmilk.out", "w", stdout);

    int milk[3][2];
    for(int i = 0; i < 3; i++){
        cin >> milk[i][0] >> milk[i][1];
    }

    for(int i = 0; i < 10; i++){
        int temp = i % 3; 
        int temp2 = (i+1) % 3;
        if(milk[temp][1] + milk[temp2][1] <= milk[temp2][0]){
            milk[temp2][1] += milk[temp][1];
            milk[temp][1] = 0;
        } else {
            int diff = milk[temp2][0] - milk[temp2][1];
            milk[temp2][1] = milk[temp2][0];
            milk[temp][1] -= diff;
        }
    }

    for(int i = 0; i < 3; i++){
        cout << milk[i][1] << endl;
    }
 
}