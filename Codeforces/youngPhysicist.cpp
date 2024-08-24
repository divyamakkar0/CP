#include <iostream>
#include <vector>
#include <unordered_map>
#include <limits.h>
#include <cmath>
#include <string>
#include <string.h>
#include <algorithm>
using namespace std;

int main()
{
   int n;
   cin >> n;

   int v[n][3];

   int s1 = 0;
   int s2 = 0; 
   int s3 = 0;

   for(int i = 0; i < n; i++){
    cin >> v[i][0] >> v[i][1] >> v[i][2];
    s1 += v[i][0];
    s2 += v[i][1];
    s3 += v[i][2];
   }

   if (s1 == 0 & s2 == 0 & s3 == 0){
    cout << "YES";
   } else {
    cout << "NO";
   }


}