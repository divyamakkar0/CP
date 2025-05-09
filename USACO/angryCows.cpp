#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> bales(n);
    for(int i = 0; i < n; i++) cin >> bales[i];
    sort(bales.begin(), bales.end());


    // we do this for every cow and simulate the explosion
    int max_explosions = 0;
    for (int i = 0; i < n; i++)
    {
        
        int bale_counter = 1;
        int radius = 1;
        int lb = i - radius;
        int ub = i + radius;

        cout << i << " ______" << endl;
        int current = i;

        // simulate explosion to the left
        while (lb >= 0)
        {
            for(int j = 0; j < lb; j++){
                if (bales[current] - bales[j] <= radius)
                {
                    bale_counter++;
                    radius += 1;
                    current = lb;
                    lb = current - radius;
                }
                else
                {
                    break;
                }
            }
            
            cout << "current " << current << endl;
            cout << "bale counter: " << bale_counter << " radius: " << radius << " lb: " << lb << " ub: " <<  ub << endl;
        }

        // while (ub < n)
        // {
        //     int current = i; 
        //     if (bales[current] + radius == bales[ub]){
        //         bale_counter++;
        //         radius += 1;
        //         current = ub;
        //         ub = current + radius;
        //     } 
        //     else{
        //         break;
        //     }
        //     // cout << "current " << current << endl;
        //     // cout << "bale counter: " << bale_counter << " radius: " << radius << " lb: " << lb << " ub: " <<  ub << endl;
        // }
        // max_explosions = max(max_explosions, bale_counter);
    }

    // cout << max_explosions << endl;
}