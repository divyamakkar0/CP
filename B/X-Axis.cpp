#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <unordered_mn ap>
using namespace std;

int main()
{
    int t;
    int x;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        
        int sum = 100000;

        int temp1 = abs(b-a) + abs(c-a);
        int temp2= abs(a-b) + abs(c-b);
        int temp3 = abs(a-c) + abs(b-c);

        if (sum > temp1){
            sum = temp1;
        } 
        
        if (sum > temp2){
            sum = temp2;
        }
        
        if (sum > temp3){
            sum = temp3;
        }

        cout << sum << endl;
    }
}