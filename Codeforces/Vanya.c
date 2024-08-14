#include <stdio.h>

int main(){

    // take in the inputs
    int n, h; 
    
    scanf("%d %d",&n, &h);
    
    int heights[n];
    for (int i = 0; i < n; i++){
        scanf("%d", &heights[i]);
    }

    // check height
    int width = 0; 

    for (int i = 0; i < n; i++){
        if ((heights[i]) <= h){
            width++;
            
        } else {
            width+=2;
            
        }
    }

    printf("%d", width);
}

