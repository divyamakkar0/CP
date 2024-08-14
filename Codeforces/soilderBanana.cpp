#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;

int main()
{
    int k, n, w;
    cin >> k >> n >> w;

    int sum = 0;
    for (int i = 1; i <= w; i++)
    {
        sum += i;
    }

    int total = sum * k;
    int diff = total - n;
    if (diff < 0) {
        cout << "0";
    } else {
        cout << diff;
    }
}