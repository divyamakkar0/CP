#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
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

        int cards[n][m];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> cards[i][j];
            }
        }

        //index: smallest number, value: row number
        map<int, int> first_cards;

        for (int i = 0; i < n; i++){
            sort(cards[i], cards[i] + m);
            int index = cards[i][0];
            first_cards[index] = i;
        }

        int top_card = -1;
        int success = 0;
        for (int i = 0; i < m; i++){
            for (auto &card : first_cards){
                int index = card.second;
                if (cards[index][i] <= top_card){
                    success = 1;
                    break;
                } else {
                    top_card = cards[index][i];
                }
            }
        }

        if (success == 0){
            for (auto &card : first_cards){
                cout << card.second + 1 << " ";
            }
            cout << endl;
        } else {
            cout << -1 << endl;
        }


        // for (int i = 0; i < n; i++){
        //     for (int j = 0; j < m; j++){
        //         cout << cards[i][j] << " ";
        //     }
        //     cout << endl;
        // }


    }
}