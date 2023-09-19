#include <stdio.h>

int main (){

int tab []={1,2,3,4,5,6,7,8,9,10};
for(int i=0; i <=8;i++){
printf ("%d,",tab[i]);
if (i==8){
    printf("%d",tab[i+1]);
}

}
return 0;
}
