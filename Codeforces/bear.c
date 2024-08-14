#include <stdio.h>

int main (){
    int a = 0;
    int b = 0;
    scanf("%d %d", &a, &b);

    for (int year = 1; ; year++){
        a = 3*a;
        b = 2*b;
            if (a > b){
                printf("%d", year);
                break;
            }
    }

    
}