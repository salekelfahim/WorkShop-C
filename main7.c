#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    printf("\nEnter un nombre entier trois chiffre: ");
    scanf("%d%d%d", &a,&b,&c);
    printf("\nLe nombre entier est %d%d%d, son inverse est %d%d%d",a,b,c,c,b,a);
    return 0;
}
