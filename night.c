#include <stdio.h>
#include <stdlib.h>

int main (){
    char word[101];
    scanf("%s", word);

    int sum = 0;
    int sum_0 = 0;
    //account for first rotation from a to word[i]
    int c = 0, diff1 = 0;
    c = word[0] - 'a';
    diff1 = abs(0 - c);
    if (diff1 <= 13){
        sum_0 += diff1;
    } else if (diff1 > 13){
        sum_0 += (26 - diff1);
    }

    //accounts for all other rotations
    for (int i = 0; word[i] != '\0'; i++){
        if (word[i + 1] != '\0'){
            int a = 0;
            int b = 0;
            int diff = 0;
            a = word[i] - 'a';
            b = word[i + 1] - 'a';
            diff = abs(a-b);
            if(diff <= 13){
                sum += diff;
            } else if (diff > 13){
                sum += (26 - diff);
            }
        }
    }

    int final = 0;
    final = sum + sum_0;
    printf("%d", final);

}