#include <stdio.h>

int main() {
    int num;
    int count = 0;

    printf("Enter a positive decimal integer: ");
    if (scanf("%d", &num) != 1 || num <= 0) {
        printf("Please enter a valid positive integer.\n");
        return 1;
    }
    int p = 1;
    while (p <= num / 2) {
        p *= 2;
    }
    printf("Binary representation: ");
    while (p > 0) {
        if (num >= p) {
            printf("1");
            count++;
            num -= p; 
        } else {
            printf("0");
        }
        p /= 2; 
    }
    printf("\n");
    printf("Number of 1 bits: %d\n", count);
    return 0;
}
