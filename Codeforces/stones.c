#include <stdio.h>

int main (){

    int n;
    scanf("%d", &n);

    char stones[n];
    scanf("%s", stones); 

    int remove = 0;

    for (int i = 0; i < n; i++){
        if (stones[i] == stones[i + 1]){
            remove++;
        }
    }

    printf("%d", remove);

    
}