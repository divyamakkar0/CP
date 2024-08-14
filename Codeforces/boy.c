#include <stdio.h>
#include <string.h>

int main (){
    char input[100];
    scanf("%s", input);

    int empty[26] = {0};
    

    for (int i = 0; input[i] != '\0'; i++){
        empty[(input[i] - 'a')] = 1;
    }


    int counter = 0;

    for (int i = 0; i < 26 ; i++){
        if (empty[i] == 1){
            counter++;
        }
    }

    if (counter % 2 == 0){
        printf("CHAT WITH HER!");
    } else if (counter % 2 != 0){
        printf("IGNORE HIM!");
    }
}