#include <stdio.h>

int main (){
    int n;
    int m;
    scanf("%d %d", &n, &m);

    char pixel[n][m];
    int isColored = 0; 

    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            scanf(" %c", &pixel[i][j]);
        }
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if (pixel[i][j] == 'C' || pixel[i][j] == 'M' || pixel[i][j] == 'Y'){
                isColored = 1;
                break;
            }
        }
        if (isColored) {
            break;  // Exit outer loop if color is already found
        }
    }


    if (isColored){
        printf("#Color");
    } else {
        printf("#Black&White");
    }

    return 0;
    
}