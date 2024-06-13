#include <stdio.h>

int main (){
    int n;
    int k;
    scanf("%d %d", &n, &k);

    char pass[n + 1];
    for (int i = 0; i < n; i++){
        int point = i % k; 
        pass[i] = 'a' + point;
    }
    pass[n] = '\0';

    
    printf("%s", pass);
}