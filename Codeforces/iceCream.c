#include <stdio.h>



int main (){
    int n;
    long long int iceCream;
    scanf("%d %lld", &n, &iceCream);

    int distressed = 0;

    int count = 0;

    while (n--){
        char op; 
        long long int num;
        scanf(" %c %lld", &op, &num);
        count++;

        if (op == '+'){
            iceCream += num;
        } else if (op == '-'){
            if (iceCream >= num){
                iceCream -= num;
            } else {
                distressed++;
            }
        }

    }

    printf("%lld %d", iceCream, distressed);
}