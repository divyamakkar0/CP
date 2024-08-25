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

    int value = 0;
    for(int i = 0; i < n; i++){
        string temp;
        cin >> temp;

        int plus = 0;
        int minus = 0;

        for(int i = 0; i < temp.length(); i++){
            if (temp[i] == '+'){
                plus++;
            } else if (temp[i] == '-'){
                minus++;
            }
        }

        if(minus == 2){
                value--;
            } else if (plus == 2){
                value++;
        }
    }

    cout << value;
}