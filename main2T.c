#include <stdio.h>

int main (){

int tab [10],max,min,i;
printf("Enter 1 number:");
scanf("%d", &tab[0]);
min=max=tab[0];

for ( i =1; i<10;i++){
    printf("Entre %d number: ",i+1);
    scanf("%d",&tab[i]);
    if (max<tab[i]){
         max = tab[i];

    } else if (tab[i]<min) {
     min = tab [i];
    }

}
 for ( i =0; i<10;i++){
        if (i==0){
            printf("The numbers are:");
        }
printf(" %d",tab[i]);

}
printf("\nLe max est : %d\nLe min est : %d",max,min);
return 0;


}

