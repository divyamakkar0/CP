#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int find(vector<int> v, int e){
    for (int i = 0; i < v.size(); i++){
        if (v[i] == e){
            return i;
        }
    }
    return -1;
}

int main()
{
    int n, m, k;
    cin >> n >> m >> k;

    vector<int> h(m);
    vector<int> order(n, 0);

    for (int i = 0; i < m; i++)
    {
        cin >> h[i];
    }

    vector<pair<int, int> > c(k);
    for (int i = 0; i < k; i++)
    {
        cin >> c[i].first >> c[i].second;
        order[c[i].second - 1] = c[i].first;
    }

    int one = 0;
    for(int i = 0; i < n; i++){
        if (order[i] == 0) {        
            vector<int> my_order = order;

            my_order[i] = 1;

            for(int j = 0; j < m-1; j++){
                if (m == 1){
                    break;
                }
                int rightP = find(my_order, h[j+1]);
                    bool found = false; 
                    for(int k = 0; k < n; k++){
                        if (my_order[k] == 0){
                            if (k > rightP){
                                found = false;
                                break;
                            }
                        }
                        if(k == n-1 && k != 0){
                            found = false;
                            break; 
                        }
                    }
                    if (found == false) continue;

                }
            } 
        // one = i;
        // break; 
    }
    cout << one;
}