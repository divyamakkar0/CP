#include <stdio.h>
#include <string.h>

int main (){
    
    int n;
    scanf("%d", &n);
    char s[n]; 
    scanf("%s", s);
    
    int A = 0, D = 0; 
    for (int i = 0; i < n; i++){
        if (s[i] == 'A'){
            A++;
        } else if (s[i] == 'D'){
            D++;
        }
    }

    if (A > D){
        printf("Anton");
    } else if (A < D) {
        printf("Danik");
    } else {
        printf("Friendship");
    }
}