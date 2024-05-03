#include <stdio.h>

int main (){
    char input[1000];
    fgets(input, 1000, stdin);

    int arr[26] = {0};

   for (int i = 0; input[i] != '}'; i++) {
        if (input[i] >= 'a' && input[i] <= 'z') { 
            arr[input[i] - 'a'] = 1;
        }
    }

    int count = 0;
    for (int i = 0; i < 26; i++){
        if (arr[i] == 1)
            count++;
    }

    printf("%d", count);
}
