#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a;
    float b;
    float add;
    float sub;
    float multi;
    float div;
    int remi;
    printf("\nGive me the first number (a): ");
    scanf("%f", &a);
    printf("\nGive me the seconde number (b): ");
    scanf("%f", &b);
add = a + b;
sub = a - b;
multi = a * b;
div = a / b;
remi = (int)a % (int)b;

printf("\nAddition (a+b): %.2f", add);
printf("\nSubtraction (a-b): %.2f", sub);
printf("\nMultiplication (a*b): %.f", multi);
printf("\nDivision (a/b): %.2f", div);
printf("\nRemainder (a%%b): %d ", remi);
    return 0;
}
