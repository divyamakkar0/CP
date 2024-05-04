#include <stdio.h>
#include <string.h>

int main (){
    char input[101];
    scanf("%s", input);
    
    int len = strlen(input);

    for(int i = 0; i < len - 1; i++){
        for (int j = 0; j < len - i - 1;j++){
            if (input[j] != '+'){
                if(input[j] > input[j+2]){
                    char temp = input[j];
                    input[j] = input[j+2];
                    input[j+2] = temp; 
                }
            }
        }
    }

    printf("%s", input);
}