#include <stdio.h>

long long findNumber(long long n, long long k) {
    if (k <= (n + 1) / 2) // If k is in the odd numbers range
        return 2 * k - 1; // Formula to get the kth odd number
    else
        return 2 * (k - (n + 1) / 2); // Formula to get the kth even number
}

int main() {
    long long n, k;
    scanf("%lld %lld", &n, &k);
    printf("%lld\n", findNumber(n, k));
    return 0;
}
