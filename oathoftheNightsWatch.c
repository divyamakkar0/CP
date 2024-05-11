#include <stdio.h>
#include <stdlib.h>

int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}

int main (){
    int n;
    scanf("%d", &n);

    int value[n];
    for (int i = 0; i < n; i++){
        scanf("%d", &value[i]);
    }

    //sort the array first
    qsort(value, n, sizeof(int), cmpfunc);

   //iterate through the array
   int counter = 0;

    for (int i = 1; i < (n - 1); i++) {
    if (value[i] > value[0] && value[i] < value[n-1]) {
        counter++;
        }
    }


    printf("%d", counter);

}