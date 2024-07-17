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
    string s1;
    cin >> s1;

    string s2;
    cin >> s2;

    int oSum = 0;
    for (int j = 0; j < s1.length(); j++){
        if(s1[j] == '+'){
            oSum++;
        } else {
            oSum--;
        }
    }

    int q = 0;
    int s2sum = 0;
    for(int i = 0; i < s2.length(); i++){
        if(s2[i] == '?'){
            q++; 
        } else if (s2[i] == '+'){
            s2sum++;
        } else {
            s2sum--;
        }
    }

    int diff = oSum -s2sum;
    
    std::cout << "hello";


}