#include <stdio.h>

int main() {
    int age, isSmoker, hasCondition;

    scanf("%d %d %d", &age, &isSmoker, &hasCondition);

    if (isSmoker && hasCondition) {
        printf("HIGH RISK");
    } 
    else if (isSmoker || hasCondition || age > 65) {
        printf("MEDIUM RISK");
    } 
    else {
        printf("LOW RISK");
    }

    return 0;
}