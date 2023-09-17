#include <stdio.h>

int main() {
    char l;

    printf("Give me a letter: ");
    scanf(" %c", &l);

    if (l >= 65 && l <= 90) {
        printf("\n%c is an uppercase letter.", l);
    } else {
        printf("\n%c is not an uppercase letter.", l);
    }

    return 0;
}
