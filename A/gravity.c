#include <stdio.h> 

int main(){
    int n;
    scanf("%d", &n);

    int columns[n];
    for (int i = 0; i < n; i++){
        scanf("%d",&columns[i]);
    }

    //go through every column
    for (int i = 0; i < n - 1; i++){
        for (int j = 0; j < n - i - 1; j++)
        {
            if (columns[j] > columns[j + 1]){
                int temp  = columns[j];
                columns[j] = columns[j + 1];
                columns[j + 1] = temp; 
            }
        }
    }

    for (int i = 0; i < n ; i++){
        printf("%d ", columns[i]);
    }

}