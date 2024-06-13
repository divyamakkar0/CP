#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    if (n == 0){
        printf("1");
    } else {
        int remaining = n % 4;

        if (remaining == 0){
            printf("6");
        } else if (remaining == 1){
            printf("8");
        } else if (remaining == 2){
            printf("4");
        } else if (remaining == 3){
            printf("2");
        }
    }
}