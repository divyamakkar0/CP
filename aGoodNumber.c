#include <stdio.h>
#include <string.h>

int main()
{
    long long int n, k;
    scanf("%lld %lld", &n, &k);

    long long int a[n];

    for (long long int i = 0; i < n; i++)
    {
        scanf("%lld", &a[i]);
    }

    long long int goodNum = n;

    for (long long int i = 0; i < n; i++){
        long long int temp = a[i];
        while (temp != 0){
            if (temp == 10){
                goodNum--;
            } else if ((temp % 10) > k){
                goodNum--;
            }
            temp /= 10;
        }
    }

    printf("%lld", goodNum);
}