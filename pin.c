#include <stdio.h>

int main(void) {
    int pin;
    int correctPIN = 1234;
    int attempts = 0;

    do {
        printf("Enter your PIN: ");
        scanf("%d", &pin);

        attempts++;

        if (pin == correctPIN) {
            printf("PIN correct! Access granted.\n");
            break;
        } else {
            if (attempts < 3) {
                printf("Incorrect PIN. Try again.\n");
            }
        }

    } while (attempts < 3);

    if (pin != correctPIN) {
        printf("Too many failed attempts. Access denied!\n");
    }

    return 0;
}