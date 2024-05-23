#include <stdio.h>

int main()
{
    int l, r;
    scanf("%d %d", &l, &r);

    int isPrime = 1;
    int a, b, c;

    //finding a
    for (int i = l; i <= r; i++){
        for (int j = 2; j < i; j++){
            if (i % j == 0){
                isPrime = 0;
                break;
            }
        }

        if (isPrime){
                a = i;
                break;
        }
    }

    //finding b
    for (int i = (a+1);; i++){
        isPrime = 1; 
        
    for (int j = 2; j < i; j++){
        if (i % j == 0){
            isPrime = 0;
            break;
        }
    }  
    if (isPrime){
        b = i;
        break;
    } 
    }

    for (int i = a*2; i <)

    printf("a: %d b: %d", a, b);

}