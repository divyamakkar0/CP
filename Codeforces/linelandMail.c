#include <stdio.h>

int main (){
    //num of cities in lineland
    int n;
    scanf("%d", &n); 

    //sequence of n ints contain coord of cities
    int coords[n];
    for (int i = 0; i < n; i++){
        scanf("%d", &coords[i]);
    }

    int min = 0;
    int max = 0;
    int min1 = 0;
    int min2 = 0; 
    
    for (int i = 0; i < n; i++){
                
        //finding min 
        if (i == 0){
            min = coords[i+1] - coords[i];
        } else if (i == n-1){
            min = coords[i] - coords[i-1];
        } else {
            min1 = coords[i+1] - coords[i];
            min2 = coords[i] - coords[i-1];
            if (min2 < min1) {
                min = min2;
            } else {
                min = min1;
            }
        }

        // finding max
        int max1 = (coords[i] - coords[0]);
        int max2 = (coords[n-1] - coords[i]);

        if (max2 > max1){
            max = max2;
        } else {
            max = max1;
        }

        printf("%d %d\n", min, max);
    }


}