#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("\nEcrivez un nombre: ");
    scanf("%d", &num);
    if(num%2==0){
        printf("\nLe nembre %d est pair.", num);

    }else {
    printf("\nLe nembre %d est unpair.", num);

    }
    return 0;
}
