#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    freopen("angry.in", "r", stdin);
    freopen("angry.out", "w", stdout);

    int n;
    cin >> n;
    vector<int> bales(n);
    for(int i = 0; i < n; i++) cin >> bales[i];
    sort(bales.begin(), bales.end());


    int max_explosions = 0;
    for (int i = 0; i < n; i++)
    {
        
        int bale_counter = 1;
        int radius = 1;
        int cur = i;

        while(true){
            int lb = cur;
            for(int j = cur - 1; j >= 0; j--){
                if (bales[cur] - bales[j] <= radius){
                    lb = j;
                } else {
                    break;
                }
            } 
            if (lb == cur)
                break;
            bale_counter += cur - lb;
            cur = lb;
            radius++;
        }

        radius = 1;
        cur = i;

        while (true)
        {
            int ub = cur;
            for(int j = cur + 1; j < n; j++){
                if (bales[j] - bales[cur] <= radius){
                    ub = j;
                } else {
                    break;
                }
            }
            if (ub == cur){
                break;
            }

            bale_counter += ub - cur;
            cur = ub;
            radius++;
        }

        max_explosions = max(max_explosions, bale_counter);
    }

    cout << max_explosions << endl;
}