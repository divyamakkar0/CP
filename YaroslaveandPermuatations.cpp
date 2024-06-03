#include <bits/stdc++.h>
#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    int n, m;
    cin >> n; 

    int elements[n];
    unordered_map<int, int> frequencyMap;

    for (int i = 0; i < n; i++){
        scanf("%d", &elements[i]);
        frequencyMap[elements[i]]++;
        if (m>frequencyMap[i]){
            m = frequencyMap[i];
        }
    }



    



}