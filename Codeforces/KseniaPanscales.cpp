#include <stdio.h>
#include <string.h>

int main() {
    char scale[100];
    scanf("%s", scale);

    char weights[100];
    scanf("%s", weights);

    char leftW[50];
    char rightW[50];

    char *sep = strchr(scale, '|');
    if (sep != NULL) {
        strncpy(leftW, scale, sep - scale);
        leftW[sep - scale] = '\0'; 

        strcpy(rightW, sep + 1);
    } else {
        strcpy(leftW, scale);
        rightW[0] = '\0'; 
    }

    int left = strlen(leftW);
    int right = strlen(rightW);
    int z = strlen(weights);

    int ideal = (left + right + z) / 2;

    if ((left + right + z) % 2 != 0 || left > ideal || right > ideal) {
        printf("Impossible\n");
        return 0;
    }

    int i = 0;
    while (left < ideal && i < z) {
        leftW[left++] = weights[i++];
    }
    leftW[left] = '\0';

    while (right < ideal && i < z) {
        rightW[right++] = weights[i++];
    }
    rightW[right] = '\0';

    printf("%s|%s\n", leftW, rightW);

    return 0;
}
