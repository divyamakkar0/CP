#include <stdio.h>

int main (){
    //inputs
    int k;
    int r;
    scanf("%d %d", &k, &r);

    int diff = (k - r);

    int counterk = 1;
    int var = k;
    
    for (int i = 1; i < 15; i++){
        if (var % 10 != 0){
            if ((diff) % 10 == 0){
                break;
            }
            diff += k;
            var += k;
            counterk++;
        } else if (k % 10 == 0){
            break;
        }
    }
    
    printf("%d", counterk);

}