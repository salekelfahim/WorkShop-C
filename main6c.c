#include<stdio.h>

int main () {

float n;
printf("Give me a number: ");
scanf("%f", &n);
if (n<0){
    printf("\n%.2f is negatif.",n);
}else if (n>0){
printf("\n%.2f is positif.",n);
}else {
printf("\n%.f is null.",n);
}


return 0;
}
