#include<stdio.h>

int main(){

float a,b;
printf("\nDonne moi un nombre: ");
scanf("%f", &a);
printf("\nDonne moi un autre nombre: ");
scanf("%f", &b);
if (a==b){
       printf("\nLe triple de leur somme est: %.2f",(a+b)*3);
}else {

printf("\nLa somme est: %.2f",a+b);
}

return 0;
}
