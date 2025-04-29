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
    freopen("milkorder.in", "r", stdin);
    freopen("milkorder.out", "w", stdout);
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
            int leftp = -1;
            int works = 1;

            for(int j = 0; j < m; j++){
                if (m == 1){
                    break;
                }
                int hp = find(my_order, h[j]);
                // cout << "element is " << h[j] << " status is " << hp << endl;
                if (hp == -1){
                    bool placed = false;
                    for(int k = leftp+1; k < n;k++){
                        if (my_order[k] == 0){
                            my_order[k] = h[j];
                            leftp = k;
                            placed = true;
                            break;
                        }
                    }
                    if(!placed){
                        works = 0;
                        break;
                    }
                } else {
                    if (hp <= leftp){
                        works = 0;
                        break;
                    }
                    leftp = hp;
                }
                // for(int l = 0; l < n; l++){
                //     cout << my_order[l] << " ";
                // }
                if (works == 0){
                    break;
                }
                

                }
            
            if (works != 0){
                one = i;
                break; 
            }
        }
    }
    cout << one + 1 << endl;
}