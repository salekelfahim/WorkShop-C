#include<stdio.h>

int main (){

int d,m,y;
printf("Give me the day: ");
scanf("%d",&d);
if (d<0 || d>31){
         printf("\nInvalid date!!");
         return 0;
}
printf("\nGive me the month: ");
scanf("%d",&m);
if (m<0 || m>12){
         printf("\nInvalid date!!");
}else {
printf("\nGive me the year: ");
scanf("%d",&y);
switch (m){
case 1 :
    printf("\n%d-January-%d",d,y);
    break;
case 2 :
    printf("\n%d-February-%d",d,y);
    break;
case 3 :
    printf("\n%d-March-%d",d,y);
    break;
case 4 :
    printf("\n%d-April-%d",d,y);
    break;
case 5 :
    printf("\n%d-May-%d",d,y);
    break;
case 6 :
    printf("\n%d-June-%d",d,y);
    break;
case 7 :
    printf("\n%d-July-%d",d,y);
    break;
case 8 :
    printf("\n%d-August-%d",d,y);
    break;
case 9 :
    printf("\n%d-September-%d",d,y);
    break;
case 10 :
    printf("\n%d-October-%d",d,y);
    break;
case 11 :
    printf("\n%d-November-%d",d,y);
    break;
case 12 :
    printf("\n%d-December-%d",d,y);
    break;
}

}
return 0;
}
