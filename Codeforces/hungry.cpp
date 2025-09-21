#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
#include <string>
#include <utility>
#include <iomanip>
using namespace std;

int getPrime(int num)
{
    int s = sqrt(num);
    for (int i = 2; i <= s; i++)
    {
        if (num % i == 0)
        {
           return getPrime(num+1); 
        }
    }

    return num;
}

int main()
{
    int n;
    cin >> n;

    int num = 2;
    while (n > 0)
    {
        int ret = getPrime(num);
        cout << ret << " ";

        num = ret + 1;
        n -= 1;    
    }
    cout << endl;

}