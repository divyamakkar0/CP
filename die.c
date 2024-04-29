#include <stdio.h>

int main (){
    //inputs
    int y;
    int w;
    scanf("%d %d", &y, &w);


    //determine number to beat
    int highest = 0;

    if (y >= w){
        highest = y;
    } else {
        highest = w;
    }

    int count = 0;
    for (int i = 1; i < 7; i++){
        if (i >= highest){
            count++;
        }
    }

    if (count == 6){
        printf("1/1");
    } else if (count == 5){
        printf("5/6");
    } else if (count == 4){
        printf("2/3");
    } else if (count == 3){
        printf("1/2");
    } else if (count == 2){
        printf("1/3");
    } else if (count == 1){
        printf("1/6");
    } else if (count == 0){
        printf("0/1");
    }


    


}