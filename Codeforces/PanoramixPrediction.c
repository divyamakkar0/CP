#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    int isPrime;
    int nextprime = 0;
    int i, j;

    //start adding onto i to find the next prime
    for (i = (n+1);; i++){
        isPrime = 1; // assume num is prime
        
        //if the new number is divisible b any other one, isprime - 0 so not priem
    for (j = 2; j < i; j++){
        if (i % j == 0){
            isPrime = 0;
            break;
        }
    }  

    //if it is prime, next prime num is i
    if (isPrime){
         nextprime = i;
        break;
    }
   
}
    if (nextprime == m){
        printf("YES");
    } else{
        printf("NO");
    }

}