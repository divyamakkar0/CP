#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;

int main()
{
    int w;
    cin >> w;

    int a = w-2;

    if (a % 2 == 0 && a != 0){
        cout << "YES";
    } else {
        cout << "NO";
    }
}