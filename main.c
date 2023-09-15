#include <stdio.h>
#include <stdlib.h>

int main()
{
    float tpF;
    float tpC;

    printf("Give me the temperature in Fahrenheit: ");
    scanf("%f", &tpF);
    tpC = (tpF-32)/1.8;
    if (tpC <= 5){

        printf("So Cold!!");


    } else if (5 < tpC && tpC <= 18){

    printf ("Cold!");

    } else if (18 < tpC && tpC <= 28) {

     printf("Hot!");
    } else {

    printf ("Very Hot!!");
    }
    return 0;
}
