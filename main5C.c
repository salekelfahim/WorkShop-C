#include<stdio.h>
#include<math.h>
int main(){

int b;
double a;
printf("\nGive me a number of years:  ");
scanf("%lf", &a);
printf("\nChoose to witch Form you want to convert it:\n1-Month\n2-Day\n3-Hour\n4-Minute\n5-Second\n");
scanf("%d", &b);
switch (b){

case 1:

printf("\n%lf years = %.2lf months",a,a*12);
break;
case 2:
printf("\n%lf years = %.2lf days",a,a*365);
break;
case 3:
printf("\n%lf years = %.2lf hours",a,a*8760);
break;
case 4:
printf("\n%lf years = %.2lf minutes",a,a*525600);
break;
case 5:
printf("\n%lf years = %.2lf seconds",a,a*31536000);
break;





}


return 0;
}
