#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main(){
            int n;
           cin >> n;

           int count = 0;
           vector<int> chocolates(n);
           for (int i = 0; i < n; i++) {
               cin >> chocolates[i];
               if (chocolates[i] == 1)
               {
                   count++;
               }
           }

           int mult = 1;
           int c = 0;
           if (count == 1) {
               cout << 1 << endl;
           } else {
               for (int i = 0; i < n; i++)
               {
                   if (chocolates[i] == 1)
                   {
                       mult *= (c + 1);
                       c = 0;
                   }
                   else
                   {
                       c++;
                   }
               }
               cout << mult << endl;
           }

}