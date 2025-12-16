// Calculate the square area and perimeter with side gived by the user

#include <stdio.h>
#include <conio.h>
#include <math.h>

int main(){
    float side;

    printf("Insert the side: ");
    scanf("%f", &side);
    float area = pow(side, 2);
    float perimeter = side*4;

    printf("%f\n", area);
    printf("%f", perimeter);
    getch();
    return 0;
}