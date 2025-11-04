#include <stdio.h>

int main() {
    int n, i;
    long long product = 1;  // use long long for large results

    scanf("%d", &n);

    for (i = 2; i <= n; i += 2) {
        product *= i;
    }

    printf("%lld", product);

    return 0;
}
