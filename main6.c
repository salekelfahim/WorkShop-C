#include <stdio.h>
#include <math.h>

int main()
{
    float ry;
    printf("Inserer le rayon du cercl: ");
    scanf("%f", &ry);
    printf("\nLa circonférence du cercle est: %.2f\n", ry*2*M_PI);
    return 0;
}

