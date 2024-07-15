#include <stdio.h>
#include <stdlib.h>

int main(){
    
    // get input
    int matrix[5][5];
    for (int j = 0; j < 5; j++){
        for (int i = 0; i < 5; i++){
            scanf("%d", &matrix[i][j]);
        }
    }


    //find out where the 1 is 
    int x = 0;
    int y = 0;
    for (int row = 0; row < 5; row++){
        for (int col = 0; col < 5; col++){
            if(matrix[row][col] == 1){
                x = row;
                y = col;
            }
        }
    }

    //steps
    int steps = 0; 
    steps = abs(x-2) + abs(y-2);

    printf("%d", steps);
}