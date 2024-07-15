#include <stdio.h>
#include <string.h>

void solve(){ 

    char a[101]; 
    scanf("%s", a); 
    int length = strlen(a); 

    if(length <= 10){ 
        printf("%s\n", a);
        return; 
    }

    char first = a[0]; 
    char last = a[length - 1]; 

    printf("%c%d%c\n", first, length-2, last); 

}

int main(){ 

    int n; 
    scanf("%d", &n); 
    while(n--){ 
        solve(); 
    }

}