#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    char s[n];
    cin >> s; 

    int c[n];
    for (int i = 0; i < n; i++){
        cin >> c[i];
    }
    
    long long int lowest = 1000000000000000;

    for (int i = 0; i < n; i++){
        if (s[i] == 'R' && s[i+1] == 'L'){
            long long int temp = ((c[i+1] - c[i])/2);
            if (temp < lowest){
                lowest = temp;
            }
        } 
    }

    if (lowest != 1000000000000000){
        cout << lowest;
    } else {
        cout << "-1";
    }

}