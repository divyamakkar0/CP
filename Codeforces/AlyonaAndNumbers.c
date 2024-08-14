#include <stdio.h>
#include <stdlib.h>

int main() {
    long long int n, m;
    scanf("%lld %lld", &n, &m);

    long long int count[5] = {0};

    for (int i = 1; i <= m; i++) {
        count[i % 5]++;
    }

    long long int totalPairs = 0;

    for (int i = 1; i <= n; i++) {
        totalPairs += count[(5 - (i % 5)) % 5];
    }

    printf("%lld\n", totalPairs);
    return 0;
}
