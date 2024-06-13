#include <stdio.h>

int main (){
    int n;
    scanf("%d", &n);

    int presents[n];
    for (int i = 0; i < n; i++){
        scanf("%d", &presents[i]);
    }

    int outputs[n];
    for (int i = 0; i < n; i++){
        int temp = presents[i];
        outputs[(temp-1)] = (i+1);
    }

    for (int i = 0; i < n; i++){
        printf("%d ", outputs[i]);
    }

}