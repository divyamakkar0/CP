#include <stdio.h>
#include <string.h>

int main()
{
    char scale[100];
    scanf("%s", scale);

    char weights[100];
    scanf("%s", weights);

    int weightL = 0;
    int weightR = 0;
    int Ireached = 1; //1 means not reached, 0 means I has happened
    for (int i = 0; i < strlen(scale); i++){
        if (Ireached = 1){
            if (scale[i] != "|"){
                weightL++;
            } else {
                Ireached = 0;
            } 
        } else if (Ireached = 0){
            weightR++;
        }
    }

    int extra = strlen(weights);

}