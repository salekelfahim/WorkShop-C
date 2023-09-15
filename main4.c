#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a;
    float b;
    float c;
    float d;
    float som;
    float moy;
    printf("\nGive me a numbere (a): ");
    scanf("%f", &a);
    printf("\nGive me a numbere (b): ");
    scanf("%f", &b);
    printf("\nGive me a numbere (c): ");
    scanf("%f", &c);
    printf("\nGive me a numbere (d): ");
    scanf("%f", &d);
    som = a+b+c+d;
    moy = (a+b+c+d)/4;
    printf("\nSomme: %.2f", som);
    printf("\nMoyenne: %.2f", moy);
    return 0;
}
