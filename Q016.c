// Read three angles of triangle and calculate the third angle.
#include <stdio.h>

int main(void){
    float angle1, angle2;

    printf("1st and 2nd angle: ");
    scanf("%f\n%f", &angle1, &angle2);
    if ((angle1+angle2)<180){
        float angle3 = 180 - (angle1+angle2);
        printf("%.2f\n", angle3);
    }
    else{
        printf("Cannot calculate.\n");
    }
}