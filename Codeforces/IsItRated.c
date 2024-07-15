#include <stdio.h>

int main (){
    int n;
    scanf("%d", &n);

    int ratings[n*2];
    for (int i  = 0; i < (n*2); i++){
        scanf("%d", &ratings[i]);
    }

    int rated = 0;
    
    //checked if the ratings changed
    for (int i = 0; i < (n*2); i+=2){
        if (ratings[i] != ratings[i+1]){
           rated = 1;
        }
    }

    int order = 0; 
    for (int i = 0; i < (n*2); i+=2){
        for (int j = i+2; j < (n*2 - 1); j+=2){
            if (ratings[i] < ratings[j]){
                order++;
            }             
            }
        }

    if (rated == 1){
        printf("rated");
    } else if (rated == 0) {
        if (order != 0){
            printf("unrated");
        } else if (order == 0){
            printf("maybe");
        }
    }

}
