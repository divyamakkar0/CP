#include <iostream>
#include <string>

using namespace std;

int main (){
    string n;
    cin >> n;

    int count = 0;

    if (n.length() == 1){
        count << 0;
    }

    while (n.length() > 1){
        long long int sum = 0;
        for (char digit : n){
            sum += digit - '0';
        }
        n = to_string(sum);
        count++;
    }
    
    cout << count; 
}