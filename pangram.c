#include <stdio.h>
#include <ctype.h>


int main (){
    int n;
    scanf("%d", &n);

    char word[n];
    scanf("%s", word);

    int alpha[26] = {0};

    for (int i = 0; i < n; i++){
        word[i] = tolower(word[i]);
        alpha[word[i] - 'a'] = 1;
    }

    int count = 0;
    for (int i = 0; i < 26; i++){
        if (alpha[i] == 1){
            count++;
        }
    }


    if (count == 26){
        printf("YES\n");
    } else {
        printf("NO\n");
    }
}