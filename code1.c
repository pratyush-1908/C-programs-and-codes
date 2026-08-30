#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    double discriminant, root1, root2, realPart, imagPart;

    printf("Enter coefficients a, b and c: ");
    if (scanf("%lf %lf %lf", &a, &b, &c) != 3) {
        printf("Error: Invalid input. Please enter numerical values.\n");
        return 1;
    }

    if (a == 0) {
        if (b != 0) {
            printf("The equation is linear. One real root: %.4lf\n", -c / b);
        } else {
            if (c == 0) {
                printf("Infinite solutions.\n");
            } else {
                printf("Invalid equation (No solution).\n");
            }
        }
        return 0;
    }

    discriminant = (b * b) - (4 * a * c);

    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Roots are real and distinct.\n");
        printf("root1 = %.4lf\n", root1);
        printf("root2 = %.4lf\n", root2);
    } 
    else if (discriminant == 0) {
        root1 = root2 = -b / (2 * a);
        printf("Roots are real and equal.\n");
        printf("root1 = root2 = %.4lf\n", root1);
    } 
    else {
        realPart = -b / (2 * a);
        imagPart = sqrt(-discriminant) / (2 * a);
        printf("Roots are complex and distinct.\n");
        printf("root1 = %.4lf + %.4lfi\n", realPart, imagPart);
        printf("root2 = %.4lf - %.4lfi\n", realPart, imagPart);
    }

    return 0;
}