#include <stdio.h>

int main (){

    //input #of events
    int n;
    scanf("%d", &n);

    //input array
    int events[n];
    
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &events[i]);
    }
   
    int unoticed = 0;
    int officers = 0;

    for (int i = 0; i < n; i++){
        if (events[i] == -1){
            if (officers == 0){
                unoticed++;
            } else {
                officers--;
            }
        } else {
            officers += events[i];
        }
    }

    printf("%d", unoticed);


}