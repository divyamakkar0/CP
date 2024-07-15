#include <stdio.h>

int main (){
    //input 1
    int cal[4];
    for (int i = 0; i < 4; i++) {
        scanf("%d", &cal[i]);
    }

    //input 2
    char s[100000];
    scanf("%s", s); 

    int sum = 0;
    for (int i = 0; s[i] != '\0'; i++){
        if (s[i] == '1'){
            sum += cal[0];
        } else if (s[i] == '2'){
            sum += cal[1];
        } else if (s[i] == '3'){
            sum += cal[2];
        } else if (s[i] == '4'){
            sum += cal[3];
        }
    }

    printf("%d", sum);
    
}