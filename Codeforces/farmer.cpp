#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;

        int global_min = 1000000;
        int global_max = 0;
        int min_row, max_row = -1;


        int cards[n][m];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> cards[i][j];
                if (cards[i][j] > global_max){
                    global_max = cards[i][j];
                    max_row = i;
                }

                if (cards[i][j] < global_min){
                    global_min = cards[i][j];
                    min_row = i;
                }
            }
        }

        if (n == 1)
        {
            cout << 1 << endl;
        } else if (min_row != max_row){
            cout
        }
    }
}