#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    int k;
    scanf("%d %d", &n, &k);

    int a[n];
    for (int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }

    int goodNum = n;

    for (int i = 0; i < n; i++){
        int digits[10] = {0};
        int temp = a[i];
        while (temp != 0){
            digits[(temp % 10)] = 1;
            temp /= 10;
        }

        for (int j = 0; j <= k; j++){
            if (digits[j] != 1){
                goodNum--;
                break;
            }
        }

        // printf("%d\n", digits[i]);
    }

    printf("%d", goodNum);
}