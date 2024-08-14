#include <stdio.h>
#include <stdlib.h>


int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}

int main (){
    int n; 
    scanf("%d", &n);

    int coins[n];

    int total_sum = 0;
    for (int i = 0; i < n; i++){
        scanf("%d", &coins[i]);
        total_sum += coins[i];
    }

    // printf(" total sum %d\n", total_sum);

    //sort the array
    qsort(coins, n, sizeof(int), cmpfunc);


    //pick from the sorted end
    int sum = 0;
    int needed = 0;
    for (int i = (n-1); i >= 0; i--){
        if (sum <= (total_sum - sum)){
            sum += coins[i];
            // printf("sum %d i= %d\n", sum, i);
            needed++;
        }         
    }

    printf("%d", needed);    
}