// Converts Brazilian Real to Dollar
#include <stdio.h>
#include <conio.h>

int main(void){
    float brl, cotation;

    printf("Brazlian REAL and cotation: ");
    scanf("%f\n%f", &brl, &cotation);
    float dollar = brl * cotation;

    printf("Dollar: %f", dollar);
    getch();
    return 0;
}