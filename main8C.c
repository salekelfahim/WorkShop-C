#include<stdio.h>

int main (){

float myn;
printf("Donne moi la moyenne : ");
scanf("%f",&myn);
if (myn>= 0 && myn<10){
    printf("\nLa mention obtenue est : recalé.");
}else if (myn>= 10 && myn<12){
    printf("\nLa mention obtenue est : passable.");
}else if (myn>= 12 && myn<14){
    printf("\nLa mention obtenue est : assez bien.");
}else if (myn>= 14 && myn<16){
    printf("\nLa mention obtenue est : bien.");
}else if (myn>= 16 && myn<=20){
    printf("\nLa mention obtenue est : tres bien.");
}else {
printf("La moyenne donner n'est pas valide!!");
}

return 0;
}
