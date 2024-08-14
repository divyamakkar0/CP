#include <stdio.h>

int main()
{
    long long int n;
    scanf("%lld", &n);

    if (n % 2 == 0){
        long long int a = (n / 2);
        printf("%lld", a);
    } else {
        long long int a = (((n + 1)/ 2)*-1);
        printf("%lld", a);
    }
}