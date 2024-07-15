#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;

    char rainbow[] = {"GBIV"};

     string final("ROYGBIV");

    int end1 = n - 7;

    for (int i = 0; i < end1; i++){
        final.push_back(rainbow[i % 4]);
    }

    cout << final;
}