#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> tanks(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> tanks[i];
    }

    int product = 1;
    for (int i = 0; i < n; i++){
        int copy = tanks[i];
        int ones = 0;
        while(copy > 0){
            int digit = copy % 10; 
            cout << "digit" << digit << endl;
            if ((digit != 1) && (digit != 0)){
                break;
            } else if (digit == 1){
                ones++;
            }
            copy /= 10;
            cout << "copy" << copy << endl;

        }
        if (ones == 1){
            product *= tanks[i];
        }
        cout << "done" << endl;
        
    }
    cout << product << endl;
}