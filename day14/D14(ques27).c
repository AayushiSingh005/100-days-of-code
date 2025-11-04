#include <stdio.h>

int main() {
    int n, sum = 0, i, odd = 1;
    
    scanf("%d", &n);
    
    for(i = 1; i <= n; i++) {
        sum += odd;
        odd += 2;
    }
    
    printf("%d", sum);
    
    return 0;
}
