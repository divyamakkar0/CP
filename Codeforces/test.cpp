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
    long long n = 4744000695826;

    while (n != 0)
    {   
        int j = n % 10;
       cout << j << endl;
       
        n /= 10;
    }
}