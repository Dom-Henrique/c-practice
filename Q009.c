// Read the base and heigth of triangle and give the area
#include <conio.h>
#include <stdio.h>

int main(void){
    float base;
    float heigth;

    printf("Base: ");
    scanf("%f", &base);
    printf("Heigth: ");
    scanf("%f", &heigth);
    float area = (base * heigth)/2;

    printf("Area: %4.f", area);
    getch();
    return 0;
}