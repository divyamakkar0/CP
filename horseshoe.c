#include <stdio.h>

int main() {
    int shoes[4];
    for (int i = 0; i < 4; i++) {
        scanf("%d", &shoes[i]);
    }

    //set an empty array
    int empty[4] = {0};

    //set the index of the empty array to 0
    int pointer = 0; 


    //go through every integer in shoes
    for (int i = 0; i < 4; i++){
        //currently anyhting in empty is false (not there)
        int in_empty = 0;
        //go through every value in empty array
        for(int j = 0; j < 4 ; j++){
            //if a value in shoes is in empty
            if(shoes[i] == empty[j]){
                //confirm that in empty is 1 so is true
                in_empty = 1; 
            }
        }

        // if it is still not in empty
        if(!in_empty){ 
            //pointer in empty is equal to shoes
            empty[pointer] = shoes[i]; 
            pointer++; 
        }
    }

    int counter = 0;
    for (int i = 0; i < 4; i++){
        if (empty[i] == 0){
            counter++;
        }
    }

    printf("%d", counter);
}
