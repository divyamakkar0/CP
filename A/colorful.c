#include <stdio.h>
#include <string.h>

int main (){
    char s[51];
    scanf("%s", s);

    char t[51];
    scanf("%s", t);


    int positionS = 0;
    int positionT = 0; 
    int lens = strlen(s);
    int lent = strlen(t);

    while (positionS < lens && positionT < lent){
        if (s[positionS] == t[positionT]){
            positionS++;
            positionT++;
        }
        else {
            positionT++;
        }
    }
    positionS++;

    printf("%d", positionS);

}