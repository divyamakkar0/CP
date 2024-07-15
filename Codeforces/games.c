#include <stdio.h>

int main () {
    int n;
    scanf("%d", &n);
    int lenght = 0;
    lenght = (n * (n-1));

    int home_uniforms[n], guest_uniforms[n]; 

    for (int i = 0; i < n; i++) {
        scanf("%d %d", &home_uniforms[i], &guest_uniforms[i]);
    }

    int change = 0;

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (home_uniforms[i] == guest_uniforms[j]){
                change++;
            }
        }
    } 

    printf("%d", change);
}