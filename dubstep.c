#include <stdio.h>
#include <string.h>


int main (){
    //input for song
    char song[201];
    scanf("%s", song);

    //stringlength of the song
    int b = strlen(song);

    //check if we are in a word
    int inword = 0;

    //for every character in song
    for (int i = 0; i < b; i++){
        //if the next 3 chars are WUB
        if (song[i] == 'W' && song[i+1] == 'U' && song[i+2] == 'B'){
            //move forward 2 as the third step forward will happen by the i++
            i+=2;
            //we we are in a word, print a space and now we are not in a word
            if (inword == 1){
                printf(" ");
                inword = 0;
            }
        }
        //if wub is not next, we are in a word, print the character, inword is 1 and move on
        else {
            printf("%c", song[i]);
            inword = 1;
        }
    }


}

