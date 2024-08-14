#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(){
    int max = 101;
    char input1[max];
    char input2[max];

    //take in inputs of different lengths
    scanf("%s %s", input1, input2);

    int len1 = strlen(input1);
    int len2 = strlen(input2);

    

    int sum1 = 0, sum2 = 0;
    // go through each array
    for (int c = 0; input1[c] != '\0' || input2[c] != '\0'; c++){
        char c1 = tolower(input1[c]);
        char c2 = tolower(input2[c]);

            if (c1 > c2){
                sum1++;
                break;
            } else if (c1 < c2){
                sum2++;
                break;
            }
        }
    
    // Compare the sums and print output
    if (sum1 < sum2){
        printf("-1");
    } else if (sum1 > sum2){
        printf("1");
    } else if (sum1 == sum2){
        printf("0");
    }

}