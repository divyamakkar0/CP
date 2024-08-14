#include <stdio.h>

int main (){
    int n;
    int b;
    int d;
    scanf("%d %d %d", &n, &b, &d);

    int size[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &size[i]);
    }

    int count = 0;
    int waste_sum = 0;
    for (int i = 0; i < n; i++){
        if (size[i] <= b){
            waste_sum += size[i];
            if (waste_sum > d){
                count++;
                waste_sum = 0;
            }
        }
    }

    printf("%d", count);

}