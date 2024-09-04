#include <iostream>
#include <vector>
#include <unordered_map>
#include <limits.h>
#include <cmath>
#include <cstring>
#include <iostream>
#include <vector>
#include <unordered_map>
#include <limits.h>
#include <cmath>
#include <cstring>
#include <algorithm>
using namespace std;

int main()
{
   int l, r, a;
   cin >> l >> r >> a;

   if (!(r==l)){
    int m = min((l+a), (r+a));
    cout << (m*2);
   } else {
    cout << ((l + (a / 2))* 2);
   }

}
