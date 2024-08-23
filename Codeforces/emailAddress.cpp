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
    string email;
    cin >> email;

    int atCounter = 0;
    vector<int> atIndex;

    int dotCounter = 0;
    vector<int> dotIndex;

    for(int i = 1; i < email.length(); i++){
        if(i != email.length() - 1){
            if (email[i] == 'a' && email[i+1] == 't'){
                atCounter++;
            }
        }

        if (i != email.length() - 3){
            if (email[i] == 'd' && email[i+1] == 'o' && email[i+2] == 't'){
                dotCounter++;
            }
        }
    }

    //print new string here
}