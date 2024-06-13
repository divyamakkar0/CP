#include <stdio.h>
#include <string.h>

int max(int a, int b) {
    return (a > b) ? a : b;
}

int findUncommonSubsequenceLength(char* a, char* b) {
    if (strcmp(a, b) == 0) {
        return -1; 
    } else {

        return max(strlen(a), strlen(b));
    }
}

int main() {
    char a[100001], b[100001];
    
    scanf("%s %s", a, b);
    
    int result = findUncommonSubsequenceLength(a, b);
    
    printf("%d\n", result);
    
    return 0;
}
