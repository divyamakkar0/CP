#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;

int main()
{
    freopen("promote.in", "r", stdin);
    freopen("promote.out", "w", stdout);

    int b1, b2;
    int s1, s2;
    int g1, g2;
    int p1, p2;

    cin >> b1 >> b2;
    cin >> s1 >> s2;
    cin >> g1 >> g2;
    cin >> p1 >> p2;

    int g_p = p2 - p1; 
    int s_g = g2 -g1 + g_p; 
    int b_s = s2-s1 + (s_g);
    
   

    cout << b_s << endl;
    cout << s_g << endl;
    cout << g_p << endl;
}
