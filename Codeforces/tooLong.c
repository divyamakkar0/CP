#include <stdio.h>
#include <string.h>

int main(){
    //get inputs
    int n; 
    scanf("%d", &n);

    char words[n][101];
    for (int i = 0; i < n; i++){
        scanf("%s", words[i]);
    } 

    int length = 0;
    char abbreviation[100];

    // Iterate over each word in words
    for (int i = 0; i < n; i++) {
        length = strlen(words[i]);
        if (length > 10) {
            // Create the abbreviation
            abbreviation[0] = words[i][0]; 
            abbreviation[1] = '0' + ((length - 2) % 10); 
            abbreviation[3] = words[i][length - 1]; // Last character
            abbreviation[4] = '\0'; // Null-terminate the abbreviation string

            printf("%s\n", abbreviation);
        } else {

            printf("%s\n", words[i]);
        }
    }
}