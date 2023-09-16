#include<stdio.h>
#include<math.h>
int main(){

float a,b,c,d,d0,d1,d2;
printf("\nGive me a number (a):  ");
scanf("%f", &a);
if (a==0){
    printf("\na can't be 0, Enter a different number: ");
    scanf("%f", &a);
}
printf("\nGive me a number (b): ");
scanf("%f", &b);
printf("\nGive me a number (c):  ");
scanf("%f", &c);
d=pow((b),2)-(4*a*c);
if (d<0){
       printf("\nThis equation has no real solution.");
}else if (d==0) {
    d0= -b/(2*a);

printf("\nThe solution is: %.2f",d0);
}else {
d1= (-b- sqrt(d))/ (2*a);
d2= (-b+sqrt(d))/ (2*a);
printf("\nThe solutions are : %.2f and %.2f",d1,d2);


}

return 0;
}
