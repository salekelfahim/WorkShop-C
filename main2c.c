#include<stdio.h>

int main(){

char car;
printf("\nDonne moi un caractere: ");
scanf("%c", &car);

switch (car){
case 'a':
    printf("\n%c est une voyelle.", car);
    break;
    case 'A':
    printf("\n%c est une voyelle.", car);
    break;
    case 'e':
    printf("\n%c est une voyelle.", car);
    break;
    case 'E':
    printf("\n%c est une voyelle.", car);
    break;
    case 'i':
    printf("\n%c est une voyelle.", car);
    break;
    case 'I':
    printf("\n%c est une voyelle.", car);
    break;
    case 'o':
    printf("\n%c est une voyelle.", car);
    break;
    case 'O':
    printf("\n%c est une voyelle.", car);
    break;
    case 'u':
    printf("\n%c est une voyelle.", car);
    break;
    case 'U':
    printf("\n%c est une voyelle.", car);
    break;
    case 'y':
    printf("\n%c est une voyelle.", car);
    break;
    case 'Y':
    printf("\n%c est une voyelle.", car);
    break;
    default:
        printf("\n%c n'est pas une voyelle.", car);
}

return 0;
}
