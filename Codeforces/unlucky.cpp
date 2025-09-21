#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
#include <string>
#include <utility>
#include <iomanip>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int length = 2*n;

    string number;
    cin >> number;

    //each difgit from the first half is strictyl less than the correspnding digit from the second jalf 
    string first_half = number.substr(0, n);
    string second_half = number.substr(n, length);


    sort(first_half.begin(), first_half.end());
    sort(second_half.begin(), second_half.end());


    if (first_half[0] < second_half[0]) {
        lower = true;
    } else if (second_half[0] > second_half[0]){
        lower = false;
    }

    bool lower = false;
    bool lucky = true;
    for(int i = 0; i < n; i++){
        if (i == 0)
        if (first_half[i] == second_half[i]){
            break;
            lucky = false;
        } elif (first_half[i] < second_half[i]
    }

    24, 12
    01, 35
    37, 45
}