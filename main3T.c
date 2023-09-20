#include<stdio.h>
#include<stdlib.h>
int main (){
float temp;
float numbers[10];
for (int i=0; i<10; i++){
    printf("Enter %d number: ", i+1);
    scanf("%f", &numbers[i]);
}

for (int j = 0;j<10;j++) {
    for (int k= j+1;k<10;k++) {
        if (numbers[j]<numbers[k]) {
            temp=numbers [j];
            numbers[j] = numbers[k];
            numbers [k]=temp;
    }
}
}


for (int n= 0; n < 10; n++ ) {

    printf ("%.1f,",numbers[n]);

}


return 0;
}
