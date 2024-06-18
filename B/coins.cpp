#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{   
    vector<string> results(3);
    
    // Input results
    for (int i = 0; i < 3; ++i) {
        cin >> results[i];
    }

    int weight[3] = {0}; 

    // Calculate weights
    for (const string &result : results) {
        if (result == "A>B" || result == "A>C" || result == "C<A" || result == "B<A") {
            weight[0]++;
        } else if (result == "B>A" || result == "B>C" || result == "A<B" || result == "C<B") {
            weight[1]++;
        } else if (result == "C>A" || result == "C>B" || result == "A<C" || result == "B<C") {
            weight[2]++;
        }
    }

    char final[3] = {'A', 'B', 'C'};

    if (weight[0] == weight[1] || weight[0] == weight[2] || weight[1] == weight[2]){
        cout << "Impossible";
    } else {
        for (int i = 0; i < 3; i++){
            if (weight[i] == 0){
                final[0] = 'A' + i;
            } else if (weight[i] == 1){
                final[1] = 'A' + i;
            } else if (weight[i] == 2){
                final[2] = 'A' + i;
            }
        }
        
        cout << final[0] << final[1] << final[2];
    }

    return 0;
}
