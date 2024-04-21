#include <stdio.h>
#include <ctype.h>

int main(){

    char word[100];
    scanf("%s", word);

    int upper_count = 0;
    int lower_count = 0;

    for (int i = 0; word[i] != '\0'; i++){
        if (word[i] - 'A' <= 25){
            upper_count++;
        } else if (word[i] - 'A' > 30){
            lower_count++;
        }
    }
    
    int i = 0;
    char chr;

    if (upper_count > lower_count){
        while(word[i]){
            chr = word[i];
            printf("%c", toupper(chr));
            i++;
        }
    } else if (upper_count == lower_count){
         while(word[i]){
            chr = word[i];
            printf("%c", tolower(chr));
            i++;
        }
    } else {
         while(word[i]){
            chr = word[i];
            printf("%c", tolower(chr));
            i++;
        }
    }

}