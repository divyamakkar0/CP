#include <stdio.h>

int main() {
    int n; 
    scanf("%d", &n); 

    int p; 
    scanf("%d", &p); 

    int x_pass[p]; 
    for (int i = 0; i < p; i++) {
        scanf("%d", &x_pass[i]); 
    }

    int q; 
    scanf("%d", &q); 

    int y_pass[q]; 
    for (int i = 0; i < q; i++) {
        scanf("%d", &y_pass[i]); 
    }


    int empty[n];

    //go through all of p
    for (int i = 0; i < p; i++){
       empty[x_pass[i]-1] = 1;
    }


    //go through all of q
    for (int i = 0; i < q; i++){
       empty[y_pass[i]-1] = 1;
    }


    for (int i = 0; i < n; i++){
        if (empty[i] != 1){
            printf("Oh, my keyboard!");
            return 0; 
        } 
    }

    
    printf("I become the guy.");

}
