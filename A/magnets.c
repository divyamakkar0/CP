#include <stdio.h>


int main (){
    int num;
    scanf("%d", &num);

    int magnets[num];

    for (int i = 0; i < num; i++){
        scanf("%d", &magnets[i]);
    }

    int groups = 0;
    
    for (int i = 0; i < num; i++){
        if (magnets[i] != magnets[i + 1]){
            groups++;
        }
    }

    printf("%d", groups);

}