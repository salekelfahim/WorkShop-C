#include<stdio.h>

int main()
{

int num;

printf("Enter a number between 1 and 10: ");
scanf("%d", &num);
if (num>0 && num<=10){
for (int i=0; i<=10; i++){

    printf("%d x %d = %d\n",num,i,i*num);

}
} else {
printf("Invalid number!");
}

return 0;
}
