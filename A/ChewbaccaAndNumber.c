#include <stdio.h>
#include <string.h>

int main()
{
    char x[20];
    scanf("%s", x);

    int n = strlen(x);

    for (int i = 0; i < n; i++){
        int digit = x[i] - '0';
        int inverted = (9 - digit);
        if (inverted < digit){
            if (i == 0 && inverted == 0){
                continue;
            }
            x[i] = '0' + inverted;
        }
    }

    printf("%s", x); 
}