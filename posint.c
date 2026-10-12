#include <stdio.h>
int main(void) {
int n, digit;
int count = 0, sum = 0, reversed = 0;
printf("Enter a number: ");
scanf("%d", &n);
while (n > 0) {
    digit = n % 10;

    count++;
    sum += digit;
    reversed = reversed * 10 + digit;

    n = n / 10;
    }

printf("Digits: %d\n", count);
printf("Sum: %d\n", sum);
printf("Reversed: %d\n", reversed);

return 0;
}