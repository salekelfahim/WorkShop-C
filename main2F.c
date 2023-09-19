#include<stdio.h>

int somme(int x,int y){
    printf("\nLa somme est: %d\n",x+y);
    return x,y;
}
int main (){

int x,y;
printf ("Enter a number: ");
scanf("%d",&x);
printf ("Enter a number: ");
scanf("%d",&y);

somme(x,y);
return 0;
}
