#include <stdio.h>

int main()
{
    long long int n, m, a;
    scanf("%lld %lld %lld", &n, &m, &a);


    //calculating width blocks
    long long int widthblocks = 0;
    if (m <= a){
        widthblocks = 1;
    } else {
        if (m % a == 0){
            widthblocks = (m / a);
        } else {
            widthblocks = (m / a) + 1;
        }
    }

    long long int heightBlocks = 0;
    long long int totalBlocks = 0;

    if (n <= a){
        heightBlocks = 1;
    } else {
        if (n % a == 0){
            heightBlocks = (n / a);
        } else {
            heightBlocks = (n / a) + 1;
        }
    }

    totalBlocks = heightBlocks * widthblocks;

    printf("%lld", totalBlocks);

    }