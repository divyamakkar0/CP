#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <set>
#include <unordered_map>
using namespace std;

int main()
{
    string s1, s2;
    cin >> s1 >> s2;

    int oSum = 0;
    for (char c : s1){
        if(c == '+'){
            oSum++;
        } else {
            oSum--;
        }
    }

    int q = 0;
    int correct = 0;
    for(char c : s2){
        if(c == '?'){
            q++;
        }
    }

    int denom = pow(2, q);

    for(int i = 0; i < denom; i++){
        int sum = 0;
        int temp = i;
        for(char c : s2){
            if(c == '+'){
                sum++;
            } else if(c == '-'){
                sum--;
            } else {
                if(temp % 2 == 0){
                    sum++;
                } else {
                    sum--;
                }
                temp /= 2;
            }
        }

        if(sum == oSum){
            correct++;
        }
    }

    double prob = static_cast<double>(correct) / denom;

    cout.precision(12);
    cout << fixed << prob << endl;

}