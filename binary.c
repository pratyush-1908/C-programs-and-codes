#include <stdio.h>

int main(void) {
    int n, power = 1;
    int bit, count = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Find the highest power of 2 that fits into n
    while (power <= n / 2) {
        power = power * 2;
    }

    printf("Binary representation: ");

    // Work downwards from the highest power of 2 to 1
    while (power > 0) {
        if (n >= power) {
            bit = 1;
            n = n - power;
            count++;
        } else {
            bit = 0;
        }

        printf("%d", bit);
        power = power / 2;
    }

    printf("\nNumber of 1 bits: %d\n", count);

    return 0;
}