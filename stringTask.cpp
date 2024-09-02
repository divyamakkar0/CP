#include <iostream>
#include <vector>
#include <unordered_map>
#include <limits.h>
#include <cmath>
#include <cstring>
#include <algorithm>
using namespace std;

int main()
{
    vector<char> input;
    char a;

    while (cin.get(a) && a != '\n') {
        input.push_back(a);
    }
    vector<char> result;

    for(int i = 0; i < input.size(); i++){
        input[i] = tolower(input[i]);

        if (!(input[i] == 'a' || input[i] == 'o' || input[i] == 'y' || input[i] == 'e' || input[i] == 'i' || input[i] == 'u'))
        {
            result.push_back('.');
            result.push_back(input[i]);  
        }
    }

    for(int i = 0; i < result.size();i++){
        cout << result[i];
    }
}
