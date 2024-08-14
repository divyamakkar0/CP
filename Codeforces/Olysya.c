#include <stdio.h>

int main (){
    int n;
    int t;
    scanf("%d %d", &n, &t);

    char finalnum[n + 1];

    if (n == 1 && t == 10){
        printf("-1");
    } else if (t == 10 && n!= 1){
        for (int i = 0; i < (n-1); i++){
            finalnum[i] = '1';
        }
        finalnum[n-1] = '0';
        finalnum[n] = '\0';
        printf("%s", finalnum);
    } else {
    for (int i = 0; i < n; i++){
            finalnum[i] = t + '0';
        } 

        finalnum[n] = '\0';

        printf("%s", finalnum);
    }

    
    
}