// Read two cathets and calculate the hipotenuse
#include <stdio.h>
#include <conio.h>
#include <math.h>

int main(void){
    float ct1, ct2;

    printf("1st cathet: ");
    scanf("%f", &ct1);
    printf("2nd cathet: ");
    scanf("%f", &ct2);
    float hippo = pow(ct1, 2) + pow(ct2, 2);
    
    printf("Hipotenuse: %f", hippo);
    getch();
    return 0;
}