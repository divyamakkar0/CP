#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{   
    freopen("traffic.in", "r", stdin);
    freopen("traffic.out", "w", stdout);
    //inputs
    int n;
    cin >> n;

    vector<string> type(n);
    vector<int> start(n);
    vector<int> end(n);

    for(int i = 0; i < n; i++){
        cin >> type[i] >> start[i] >> end[i];
    }

    int startSpeed = 0;
    int endSpeed = 100000;

    vector<int> ons;
    vector<int> offs;

    for(int i = 1; i < n; i++){
        if(type[i] == "none"){
            startSpeed = max(startSpeed, start[i]);
            endSpeed = min(endSpeed, end[i]);
        } else if (type[i] == "on"){
            startSpeed += min(start[i], end[i]);
            endSpeed += min(start[i], end[i]);
            ons.push_back(i);
        } else if (type[i] == "off"){
            startSpeed -= end[i];
            endSpeed -= start[i];
            offs.push_back(i);
        }
    }

    int lp = 0;
    if (!ons.empty()){
        lp = min(ons[0], offs[0]);
    } lp = offs[0];

    int s1 = 0;
    int e1 = 100000;
    for(int i = 1; i < lp; i++){
        s1 = max(s1, start[i]);
        e1 = min(e1, end[i]);
    }

    s1 -= start[0];
    e1 -= end[0];

    cout << s1 << " " << e1 << endl;
    cout << startSpeed << " " << endSpeed;


}