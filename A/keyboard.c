#include <stdio.h>

int main(){
    //input 1
    char shift;
    scanf("%c", &shift);

    //input 2
    char message[101];
    scanf("%s", message);


    char keyboard[30] = {"qwertyuiopasdfghjkl;zxcvbnm,./"};
    
    for (int i = 0; message[i] != '\0'; i++){
        if (shift == 'L'){
            for (int j = 0; j < 30; j++){
                if (keyboard[j] == message[i]){
                    message[i] = keyboard[j + 1];
                    break;
                }
            }
        } else if (shift == 'R'){
            for (int j = 0; j < 30; j++){
                if (keyboard[j] == message[i]){
                    message[i] = keyboard[j - 1];
                    break;
                }
            }
        }
    }

   printf("%s", message);
}