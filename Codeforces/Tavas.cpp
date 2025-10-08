#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <string>
#include <cmath>
using namespace std;

long long int numDigits(int n)
{
    if (n == 0) return 1;

    int count = 0;
    while (n > 0)
    {
        n /= 10;
        count += 1;
    }
    return count;
}

int main()
{
    int n;
    cin >> n;

    long long int count = 0;
    long long int dig = numDigits(n);
    
    count += (2 * (pow(2, dig-1) - 1));

    string str_num = to_string(n);

    long long int internal_dig = dig;
    for (auto ch : str_num){
        int dig = ch - '0';
        if (dig == 7) {
            count += (pow(2, internal_dig -1));
        }
        internal_dig -= 1;
    }

    cout << count + 1 << endl;
}