#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    char letters[n][n];

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++)
            scanf(" %c", &letters[i][j]);
    }

    //compare diagonals
    int p1 = 0;
    int p2 = (n-1);
    int diag = 0;
    int diagcmp = letters[0][0];
    int alpha = 0;
    char cmp = letters[0][p1+1];

    //make sure diag and normal chars are not the same
    if (cmp == diagcmp){
        alpha = 1;
    }

    for (int i = 0; i < n; i++){
            if (letters[i][p1] != diagcmp || letters[i][p2] != diagcmp){
                diag = 1;
            } 
                        
            for (int j = 0; j < n; j++){
               if (j != p1 && j != p2){
                    if (letters[i][j] != cmp){
                        alpha = 1;
                    }
               }
            }
            p1++;
            p2--;
        }

    // printf("%d %d\n", diag, alpha);
    if (diag != 0 || alpha != 0){
        printf("NO");
    } else {
        printf("YES");
    }
    


}