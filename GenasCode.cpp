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
    vector<string> tanks(n);

    string imperfect = "";
    bool imp = 0;
    string product = "";
    long long int zeros = 0; 
    bool zero = 0;

    for (long long int i = 0; i < n; ++i)
    {
        cin >> tanks[i];
        if (tanks[i] == "0"){
            zero = 1;
        }

        string copy = tanks[i];
        long long int ones = 0;

        for(int j = 0; j < copy.length(); ++j){
            int digit = copy[j] - '0';
            // cout << "digit = " << digit << endl;
            if (digit != 0){
                // cout << "her1" << endl;
                if (digit != 1){
                    imp = 1;
                    // cout << "her2" << endl;
                    imperfect = tanks[i];
                    // cout << "imperfect = " << imperfect << endl;
                    break;
                } else if (digit == 1 && ones != 0){
                    imp = 1;
                    imperfect = tanks[i];
                    // cout << "imperfect = " << imperfect << endl;
                    break;
                } else if (digit == 1){
                    ones++;
                }
            }
        }
        
    }
    if (!imp) imperfect = "1";

    
    if (zero){
        cout << 0 << endl;
    } else {

        product += imperfect;
            // cout << product << endl;

            for(int i = 0; i < n; ++i){
                if (tanks[i] != "1"){
                    if (tanks[i] != imperfect){
                        // cout << tanks[i] << endl;
                        string copy = tanks[i];
                        for (int i = 0; i < copy.length(); ++i){
                            if (copy[i] == '0'){
                                zeros++;
                            }
                        }
                    }
                }
            }


        for (int i = 0; i < zeros; ++i){
            product += to_string(0);
        }


        cout << product << endl;
    }
        
}

