#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    int first = 0;
    int second=0; 
    int draw = 0;

    for (int i = 1; i <= 6; i++){
        int fd = abs(i - a);
        int sd = abs(i - b);

        if (fd < sd){
            first++;
        } else if (sd < fd){
            second++;
        } else {
            draw++;
        }
    }

    cout << first << " " << draw << " " << second << endl;
}