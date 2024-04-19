#include <stdio.h>

int main(){

    //first input line
    int n = 0;
    scanf("%d", &n);
    
    //second input line
    int problems[n][3];
    for (int i = 0; i < n; i++){
        for(int j = 0; j < 3; j++){
            scanf("%d", &problems[i][j]);
        }
    }

    int count_1 = 0, answered = 0;
    
    for (int row = 0; row < n; row++){
        for (int col = 0; col < 3; col++){
            if (problems[row][col] == 1){
                count_1++;
            }
        }

        if(count_1 >= 2){
            answered++;
        }
        count_1 = 0;
    }

    printf("%d", answered);
}
