#include <stdio.h>

int main() {
    char l;

    printf("Give me a lettre: ");
    scanf("%c", &l);

    if ((l >= 'A' && l <= 'Z') || (l >= 'a' && l <= 'z')) {
        if (l >= 'A' && l <= 'Z') {
            printf("\n%c is an uppercase letter.", l);
        } else {
            printf("\n%c is not an uppercase letter.", l);
        }
    } else {
        printf("\n%c is not a letter!!!", l);
    }

    return 0;
}
