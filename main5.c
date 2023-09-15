#include <stdio.h>
#include <math.h>

int main()
{
    float x1, x2, y1, y2, Xp, Yp, XY;
    float dis;
    printf("\nGive me x1 :");
    scanf("%f", &x1);
    printf("\nGive me x2 :");
    scanf("%f", &x2);
    printf("\nGive me y1 :");
    scanf("%f", &y1);
    printf("\nGive me y2 :");
    scanf("%f", &y2);\
    Xp = pow((x2-x1), 2) ;
    Yp = pow((y2-y1), 2) ;
    XY = Xp + Yp;
    dis = sqrt(XY);


    printf("\nDistance is : %.2f\n", dis);

    return 0;
}
