#include <bits/stdc++.h>
#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    int n;
    cin >> n; 

    int elements[n];
    int freq[100000];

    int m = 0;

    for (int i = 0; i < n; i++){
        scanf("%d", &elements[i]);
        freq[elements[i]]++;
        // printf("%d\n", freq[elements[i]]);
        if (freq[elements[i]] > m){
            m = freq[elements[i]];
        }
        // printf("m %d\n", m);
    }

    if (m > ((n + 1) / 2)){
        printf("NO");
    } else {
        printf("YES");
    }


}